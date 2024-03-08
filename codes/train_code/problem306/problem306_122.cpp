#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;
using vc = vector<char>;
using vvc = vector<vc>;
using pll = pair<ll, ll>;
using stkll = vector<pll>;
const ll INF = 1LL << 60;
const ll MOD = 1e9 + 7;
#define rep(i, n) for (ll i = 0; i < (n); i++)
template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
#ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x << ": " << x << endl;
#else
    #define debug(x)
#endif

ll dp[20][110000];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(20);

    ll N;
    cin >> N;
    vll x(N);
    rep(i, N) cin >> x[i];
    ll L, Q;
    cin >> L >> Q;

    rep(i, N) dp[0][i] = upper_bound(x.begin(), x.end(), x[i]+L) - x.begin() - 1;

    rep(i, 19) rep(j, N) dp[i+1][j] = dp[i][dp[i][j]];

    rep(i, Q) {
        ll a, b;
        cin >> a >> b;
        a--, b--;
        if(a > b) swap(a, b);

        ll ans = 1;
        for(ll i = 19; i >= 0; i--) {
            if(dp[i][a] < b) {
                a = dp[i][a];
                ans += 1LL<<i;
            }
        }
        cout << ans << endl;
    }
}
