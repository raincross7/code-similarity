#include <bits/stdc++.h>
using namespace std;
const long INF = 1000000000;
int main() {
    int n,k; cin >> n >> k;
    vector<long> h(n);
    for(int i = 0; i < n; i ++) cin >> h[i];
    vector<long> dp(n, INF);
    dp[0] = 0;
    for(int i = 1; i < n; i ++) {
        for(int j = 1; j <= min(i,k); j ++) {
            dp[i] = min(dp[i],abs(h[i]-h[i-j]) + dp[i-j]);
        }
    }
    cout << dp[n-1] << endl;
}