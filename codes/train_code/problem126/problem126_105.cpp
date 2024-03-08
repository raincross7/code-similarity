#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rrep(i, n) for (int i = (int)(n - 1); i >= 0; i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) int(x.size())
#define get_unique(x) x.erase(unique(all(x)), x.end());
typedef long long ll;
typedef complex<double> Complex;
const int INF = 1e9;
const ll MOD = 1e9 + 7;
const ll LINF = 1e18;
template <class T>
bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool chmin(T &a, const T &b) {
    if (b < a) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
vector<T> make_vec(size_t a) {
    return vector<T>(a);
}
template <class T, class... Ts>
auto make_vec(size_t a, Ts... ts) {
    return vector<decltype(make_vec<T>(ts...))>(a, make_vec<T>(ts...));
}

int main() {
    int h, w;
    cin >> w >> h;
    vector<pair<int, int>> v(h + w);
    rep(i, w) {
        int p;
        cin >> p;
        v[i] = make_pair(p, 0);
    }
    rep(i, h) {
        int q;
        cin >> q;
        v[i + w] = make_pair(q, 1);
    }
    sort(all(v));

    int zero = h + 1, one = w + 1;
    ll ans = 0;
    for (auto p : v) {
        int x = p.first;
        int k = p.second;
        if (k == 0) {
            ans += (ll)x * zero;
            one--;
        } else {
            ans += (ll)x * one;
            zero--;
        }
    }
    cout << ans << endl;
}
