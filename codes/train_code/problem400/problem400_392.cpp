#include <bits/stdc++.h>
using namespace std;
#define repl(i, l, r) for (ll i = (l); i < (r); i++)
#define rep(i, n) repl(i, 0, n)
#define CST(x) cout << fixed << setprecision(x)
using ll = long long;
const ll MOD = 1000000007;
const int inf = 1e9 + 10;
const ll INF = 4e18 + 10;
const int dx[9] = {1, 0, -1, 0, 1, -1, -1, 1, 0};
const int dy[9] = {0, 1, 0, -1, 1, 1, -1, -1, 0};
const int p = 1000005;
int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	string s;
	cin >> s;
	int now = 0;
	for (auto c : s) now += c - '0';
	cout << (now % 9 == 0 ? "Yes\n" : "No\n");
	return 0;
}