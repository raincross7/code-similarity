#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <cstring>
#include <climits>
using namespace std;
#define ll long long
#define FOR(i,n) for(int i=0;i<n;i++)
#define sz(x) (int)(x.size())
#define all(x) (x).begin(),(x).end()
template<typename tp> void read(tp &x) {cin >> x;}
template<typename tp, typename... Args> void read(tp& x, Args&... args) {read(x);read(args...);}
const int mxN = (int)1e5,INF = (int)1e9,MOD = (int)1e9+7;

void solve()
{
	int n;
	read(n);
	vector<int> a(n),b(n),c(n);
	FOR(i,n)
	{
			read(a[i]);
			c[i] = i+1;
	}
	FOR(i,n) read(b[i]);
	if(b == a)
	{
		cout << "0\n";
		return;
	}
	int count = 0,flag = 0;
	do
	{
		if(!flag && (c==a || c==b))
		{
			flag = 1,count++;
			continue;
		}
		if(flag)count++;
		if(flag && (c==a||c==b))
			break;
	}
	while(next_permutation(all(c)));
	cout << count-1 << '\n';
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int test = 1;
	//read(test);
	while(test--)
		solve();
	return 0;
}

