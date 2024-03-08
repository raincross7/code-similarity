#include <iostream>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    if (n == k) { cout << "0\n"; return 0; }
    int h[n]; for (int i = 0; i < n; i++) cin >> h[i];
    long long dp[n+1][n+1];
    const long long INF = 1LL<<60;
    long long ans = INF;
    dp[0][0] = 0;
    for (int i = 1; i <= n; i++) dp[i][0] = INF;
    for (int i = 1; i <= n; i++) {
        dp[i][1] = h[i-1];
        for (int j = 2; j <= n; j++) {
            dp[i][j] = INF;
            for (int x = 1; x < i; x++)
                dp[i][j] = min(dp[i][j], dp[x][j-1] + max(0, h[i-1]-h[x-1]));
            if (j >= n-k) ans = min(ans, dp[i][j]);
        }
    }
    cout << ans << endl;
}
