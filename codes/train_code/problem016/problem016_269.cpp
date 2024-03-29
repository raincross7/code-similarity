#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using ii = pair<int, int>;
using vii = vector<ii>;

#define rep(i, n)   for (int i = 0; i < (n); i++)
#define sz(x)       (int)x.size()
#define eb          emplace_back
#define pb          push_back
#define all(x)      x.begin(), x.end()
#define rall(x)     x.rbegin(), x.rend()
#define fi          first
#define se          second

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef LOCAL
    freopen("io\\in.txt", "r", stdin);
    freopen("io\\out.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    ll ret = 0;
    const int mod = 1000000007;

    rep(i, 60) {
        int cnt0 = 0, cnt1 = 0;
        rep(j, n) if (a[j] >> i & 1) cnt1++; else cnt0++;
        ret = (ret + (1ll << i) % mod * cnt0 % mod * cnt1) % mod;
    }

    cout << ret;

    return 0;
}
