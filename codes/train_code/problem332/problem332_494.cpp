#include <bits/stdc++.h>

using namespace std;

#define int long long
#define FOR(i, a, b) for(ll i = (a); i < (b); ++i)
#define FORR(i, a, b) for(ll i = (a); i > (b); --i)
#define REP(i, n) for(ll i = 0; i < (n); ++i)
#define REPR(i, n) for(ll i = n; i >= 0; i--)
#define FOREACH(x, a) for(auto &(x) : (a))
#define VECCIN(x)                                                              \
    for(auto &youso_ : (x)) cin >> youso_
#define bitcnt __builtin_popcount
#define SZ(x) ((ll)(x).size())
#define fi first
#define se second
#define All(a) (a).begin(), (a).end()
#define rAll(a) (a).rbegin(), (a).rend()
template <typename T = long long> inline T IN() {
    T x;
    cin >> x;
    return (x);
}
inline void CIN() {}
template <class Head, class... Tail>
inline void CIN(Head &&head, Tail &&... tail) {
    cin >> head;
    CIN(move(tail)...);
}
#define CCIN(...)                                                              \
    char __VA_ARGS__;                                                          \
    CIN(__VA_ARGS__)
#define DCIN(...)                                                              \
    double __VA_ARGS__;                                                        \
    CIN(__VA_ARGS__)
#define LCIN(...)                                                              \
    ll __VA_ARGS__;                                                            \
    CIN(__VA_ARGS__)
#define SCIN(...)                                                              \
    string __VA_ARGS__;                                                        \
    CIN(__VA_ARGS__)
#define Yes(a) cout << (a ? "Yes" : "No") << "\n"
#define YES(a) cout << (a ? "YES" : "NO") << "\n"
#define Printv(v)                                                              \
    {                                                                          \
        FOREACH(x, v) { cout << x << " "; }                                    \
        cout << "\n";                                                          \
    }
template <typename T = string> inline void eputs(T s) {
    cout << s << "\n";
    exit(0);
}
template <typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val) {
    std::fill((T *)array, (T *)(array + N), val);
}
template <typename T> using PQG = priority_queue<T, vector<T>, greater<T>>;
template <typename T> using PQ = priority_queue<T>;

typedef long long ll;
typedef pair<ll, ll> PL;
typedef vector<PL> VPL;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef vector<bool> VB;
typedef vector<double> VD;

const int INF = 1e9;
// const int MOD = 1e9 + 7;
const int MOD = 998244353;
const ll LINF = 1e18;
const double PI = atan(1.0) * 4.0;
const ll dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
const ll dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
#define PI 3.141592653589793238

ll N, M;
VL A(100000);
VVL G(100010);

ll dfs(ll now, ll par) {
    ll csum = 0, mx = 0;
    if(G[now].size() == 1) return A[now];
    FOREACH(to, G[now]) {
        if(to == par) continue;
        ll cv = dfs(to, now);
        mx = max(cv, mx);
        csum += cv;
    }
    ll in = csum - A[now], out = 2 * A[now] - csum;
    if(in < 0 || out < 0) eputs("NO");
    if(mx >= csum / 2 && in > csum - mx) eputs("NO");
    if(mx < csum / 2 && in > csum / 2) eputs("NO");
    return out;
}

signed main() {
    cin >> N;
    REP(i, N) cin >> A[i];
    if(N == 2) {
        cout << (A[0] == A[1] ? "YES" : "NO") << "\n";
        return 0;
    }
    REP(i, N - 1) {
        LCIN(a, b);
        a--, b--;
        G[a].emplace_back(b);
        G[b].emplace_back(a);
    }
    REP(i, N) {
        if(G[i].size() == 1) continue;
        cout << (dfs(i, -1) ? "NO" : "YES") << "\n";
        return 0;
    }
}
