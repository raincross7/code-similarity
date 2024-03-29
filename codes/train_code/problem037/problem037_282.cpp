#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int INF = 1001001001;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    int h, n;
    cin >> h >> n;
    vector<int> dp(h+1, INF);
    dp[0] = 0;
    rep(i,n) {
        int a, b;
        cin >> a >> b;
        rep(j,h) {
            int nj = min(j+a,h);
            dp[nj] = min(dp[nj], dp[j]+b);
        }
    }
    cout << dp[h] << endl;
    return 0;
}