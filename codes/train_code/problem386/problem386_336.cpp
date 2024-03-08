#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<n; i++)
#define rep1(i, n) for(int i=1; i<=n; i++)
#define repr(i, n) for(int i=n-1; i>=0; i--)
#define repr1(i, n) for(int i=n; i>=1; i--)
#define all(v) v.begin(),v.end()
using ll = long long;
using pii = pair<int, int>;
using pil = pair<int, ll>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
const int INF = 1e9;
const ll LLINF = 1e18;
const ll MOD = 1e9+7;
const double EPS = 1e-10;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, c; ll k;
    cin >> n >> c >> k;
    vector<ll> t(n);
    rep(i, n) cin >> t[i];
    sort(all(t));

    ll ans = 0;
    for (int i = 0; i < n;) {
        int notteru = 0;
        for (int j = i; j < n; j++) {
            if (t[j] <= t[i] + k && notteru < c) notteru++;
            else break;
        }
        ans++;
        i += notteru;
    }
    cout << ans << endl;
}
