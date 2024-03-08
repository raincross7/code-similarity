#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main() {
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> h(n), dp(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);
    for(int i = 2; i < n; i++){
        dp[i] = min (dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
    }
    cout << dp[n - 1];
    return 0;
}