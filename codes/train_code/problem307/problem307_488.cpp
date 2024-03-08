#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
#define rrep(i,n) for(int i=1;i<(n);++i)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define dunk(a) cout << (a) << "\n"
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const int inf = 1001001001;
const int mod = 1000000007;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int n = s.size();
	vector<vector<ll>> dp(n + 1, vector<ll>(2));
	dp[0][0] = 1;
	rep(i, n) rep(j, 2) {
		if (s[i] == '1') {
			dp[i + 1][1] = (dp[i + 1][1] + dp[i][j]) % mod;
		}
		else {
			dp[i + 1][j] = (dp[i + 1][j] + dp[i][j]) % mod;
		}
		if (!(s[i] == '0' && j == 0)) dp[i + 1][j] = (dp[i + 1][j] + (dp[i][j] * 2) % mod) % mod;
	}
	dunk((dp[n][0] + dp[n][1]) % mod);
	return 0;
}
