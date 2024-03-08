#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vl = vector<ll>;
using pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0, xxx_rep_end = (n); i < xxx_rep_end; ++i)
#define all(x) (x).begin(), (x).end()

template <class T1, class T2>
inline void chmax(T1 &a, const T2 &b) {
    if (a < b) a = b;
}
template <class T1, class T2>
inline void chmin(T1 &a, const T2 &b) {
    if (a > b) a = b;
}

constexpr ll INF = 0x3f3f3f3f3f3f3f3fLL;
constexpr ll mod = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> P(N);
    rep(i, N) { cin >> P[i]; }
    sort(all(P));

    int ans = 0;
    rep(i, K) { ans += P[i]; }

    cout << ans << endl;
}