#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll h, w;
	cin >> h >> w;
	vector<string> v(h);
	for (ll i = 0; i < h; ++i)cin >> v[i];
	vector<vector<ll>> dp(h, vector<ll>(w));
	if (v[0][0] == '.')dp[0][0] = 0;
	else dp[0][0] = 1;
	for (ll i = 1; i < w; ++i) {
		dp[0][i] = dp[0][i - 1] + (v[0][i] != v[0][i - 1]);
	}
	for (ll i = 1; i < h; ++i) {
		dp[i][0] = dp[i - 1][0] + (v[i][0] != v[i - 1][0]);
	}
	for (ll i = 1; i < h; ++i) {
		for (ll j = 1; j < w; ++j) {
			dp[i][j] = min(dp[i - 1][j] + (v[i][j] != v[i - 1][j]),
				dp[i][j - 1] + (v[i][j] != v[i][j - 1]));
		}
	}
	cout << (dp.back().back() + 1) / 2 << endl;
}
