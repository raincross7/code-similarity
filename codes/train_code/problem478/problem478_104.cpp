#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n; cin >> n;
	for (int i = 0; i < 100; ++i)
		for (int j = 0; j < 100; ++j)
			if (4*i + 7*j == n)
			{
				cout << "Yes" << endl;
				return 0;
			}
	cout << "No" << endl;
}
