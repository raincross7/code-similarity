#include <bits/stdc++.h>
//#include "stdc++.h"
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = s; i < (int)(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = max(a, b)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using namespace std;
using ll = long long;
using pii = pair<int, int>;

void	solve()
{
	int h, w;
	cin >> h >> w;
	vector<string> v(h);
	rep(i, h) cin >> v[i];
	rep(i, h) {
		cout << v[i] << endl;
		cout << v[i] << endl;
	}
}

int		main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	solve();
}