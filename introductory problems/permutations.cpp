#include<bits/stdc++.h>
using namespace std;
int i;

int main()
{

	int n;
	cin >> n;

	bool x = false;

	std::vector<int> v1, v2, v3
	


	if (n == 2 || n == 3)
	{
		cout << "NO SOLUTION";
		x = true;
	}

	for (i = 1; i <= n; i++)
	{
		if (x == true)
		{
			break;
		}

		v1.push_back(i);


	}
	while ( x == false)
	{
		for (i = 0; i < n; i++)
		{
			if (v1[i] % 2 == 0)
			{
				v2.push_back(v1[i]);
			}
			else
			{
				v3.push_back(v1[i]);
			}
		}

		for (i = 0; i < v2.size(); i++)
		{
			cout << v2[i] << " ";
		}
		for (i = 0; i < v3.size(); i++)
		{
			cout << v3[i] << " ";
		}

		x = true;
	}
	return 0;
}



