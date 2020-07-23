#include<bits/stdc++.h>
#define ll long long
using namespace std;
int i, j;

int main()

{
	ios::sync_with_stdio(false);
	cin.tie(0);


	ll int n, m, k;
	cin >> n >> m >> k;

	ll int a[n], size[m];

	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (i = 0; i < m; i++)
	{
		cin >> size[i];
	}

	sort(a, a + n);
	sort(size, size + m);


	int count = 0;
	int i = 0;
	int j = 0;

	while (i < n && j < m)
	{
		if (abs(a[i] - size[j]) <= k)
		{
			count++;
			i++;
			j++;
		}
		else if (a[i] < size[j])
		{
			i++;
		}
		else
		{
			j++;
		}
	}

	cout << count;


	return 0;
}
