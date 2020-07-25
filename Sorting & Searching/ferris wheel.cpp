#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll int i, j;
 
int main()
 
{
	ios::sync_with_stdio(false);
	cin.tie(0);
 
	ll n, x, count, temp;
	cin >> n >> x;
	ll wchild[n];
	for (ll i = 0; i < n; i++) {cin >> wchild[i];}
	sort(wchild, wchild + n);
 
	ll i = count = 0;	//i to smallest
	ll j = n - 1;		//j to largest
	while (i <= j) {	//keep doing until i==j
		if (wchild[i] + wchild[j] <= x) 
    {count++; i++; j--;} //1 gondola per 2
		else {j--; count++;} //1 gondola for unpaired large one
	}
	cout << count << endl;
 
	return 0;
}
