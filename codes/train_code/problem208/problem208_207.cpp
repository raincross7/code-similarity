#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <queue>
#include <set>
#include <numeric>
#include <cmath>

using namespace std;

typedef long long int lld;

const lld mod = 1e9+7;
const lld INF = 1e9;
//const lld MAXN = 1e9;

int main()
{
	lld k;
	cin >> k;

	if (k==0)
	{
		cout << 2 << endl;
		cout << 1 << " " << 1 << endl;;
	}else if (k==1)
	{
		cout << 2 << endl;
		cout << 2 << " " << 0 << endl;
	}else if (k <= 50)
	{
		cout << k << endl;
		for(int i = k; i > 1; i--)
		{
			cout << i << " ";
		}cout << 1 << endl;
	}else
	{
		cout << 50 << endl;
		lld x = k / 50, r = k % 50;
		lld ans[51] = {0};
		for(int i = 50; i >= 1; i--)
		{
			ans[i] = x-1 + i;
		}
		int i = 50;
		while(r > 0)
		{
			ans[i]++;
			i--;
			r--;
		}

		for(int i = 50; i > 1; i--)
		{
			cout << ans[i] << " ";
		}cout << ans[1] << endl;

	}

	return 0;
}