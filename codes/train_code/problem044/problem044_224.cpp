#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <tuple>
#include <vector>

using namespace std;
typedef long long ll;

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define reps(i, f, n) for (ll i = (f); i < (n); i++)
#define repr(i, n) for (ll i = n; i >= 0; i--)
#define repv(v) for (auto it = (v).begin(); it != (v).end(); it++)
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define pb push_back
#define INIT    \
    cin.tie(0); \
    ios::sync_with_stdio(false);

template <class T>
inline bool chmax(T& a, T b) {
    return a = (a < b) ? b : a;
}
template <class T>
inline bool chmin(T& a, T b) {
    return a = (a > b) ? b : a;
}

ll const INF = 1LL << 60;
ll const MOD = 1000000007;

int main() {
    INIT;
    ll N;
    cin >> N;
    vector<ll> h(N);
    rep(i, N) cin >> h[i];

    ll ans = 0;
    bool flg = true;
    while (1) {
        flg = false;
        ll l = -1, r = -1;

        rep(i, N) {
            if (h[i] > 0) {
                flg = true;
                l = i;
            }

            reps(j, i, N) {
                if (h[j] > 0) {
                    r = j;
                } else
                    break;
            }

            if (flg) break;
        }

        if (!flg) break;

        // cout << "l: " << l << ", r: " << r << endl;
        reps(i, l, r + 1) { h[i]--; }
        ans++;

        // rep(i, N) { cout << h[i] << " "; }
        // cout << endl;
    }

    cout << ans << endl;

    return 0;
}