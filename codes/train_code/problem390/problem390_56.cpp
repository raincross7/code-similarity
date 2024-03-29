#include "bits/stdc++.h"
using namespace std;
#ifdef _DEBUG
#include "dump.hpp"
#else
#define dump(...)
#endif

#define int long long
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) begin(c),end(c)
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9) + 7;
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (b < a) { a = b; return true; } return false; }

signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int Q; cin >> Q;
	rep(i, 0, Q) {
		int a, b; cin >> a >> b;
		if (a > b)swap(a, b);
		int c = a*b;
		int d = sqrt(c);
		if (d*d == c)d--;
		if ((d + 1)*(d + 1) < c)d++;
		int ans = d*2;
		if (d*(d + 1) >= c)ans--;
		if (d >= b)ans--;
		if (d >= a)ans--;
		cout << ans << endl;
	}
	return 0;
}