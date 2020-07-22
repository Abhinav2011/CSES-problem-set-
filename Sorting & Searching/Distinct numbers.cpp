#include<bits/stdc++.h>
using namespace std;
int i, j;

int main()

{
	ios::sync_with_stdio(false);
	cin.tie(0);


	long long int n;
	cin >> n;
	long long int a[n];

	long long int distinct = 0;
	std::map<long long int, long long int> map;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		map[a[i]]++;
	}

	for (auto it : map)
	{
		distinct++;
	}

	cout << distinct << endl;

	return 0;
}


