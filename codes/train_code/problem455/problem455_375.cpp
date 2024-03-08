#include <bits/stdc++.h>

using namespace std;

#define int long long
// #define double long double
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define FORR(i, a, b) for(int i = (a); i > (b); --i)
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOREACH(x, a) for(auto &(x) : (a))
#define VECCIN(x)                                                              \
    for(auto &youso_ : (x)) cin >> youso_
#define bitcnt(x) __builtin_popcount(x)
#define lbit(x) __builtin_ffsll(x)
#define rbit(x) (64 - __builtin_clzll(x))
#define fi first
#define se second
#define All(a) (a).begin(), (a).end()
#define rAll(a) (a).rbegin(), (a).rend()
#define cinfast() cin.tie(0), ios::sync_with_stdio(false)
#define PERM(c)                                                                \
    sort(All(c));                                                              \
    for(bool cp = true; cp; cp = next_permutation(All(c)))
#define COMB(n, k)                                                             \
    for(ll bit = (1LL << k) - 1; bit < (1LL << n); bit = next_combination(bit))
#define PERM2(n, k)                                                            \
    COMB(n, k) {                                                               \
        vector<int> sel;                                                       \
        for(int bitindex = 0; bitindex < n; bitindex++)                        \
            if(bit >> bitindex & 1) sel.emplace_back(bitindex);                \
        PERM(sel) { Printv(sel); }                                             \
    }
#define MKORDER(n)                                                             \
    vector<int> od(n);                                                         \
    iota(All(od), 0LL);

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
template <class Head> inline void COUT(Head &&head) { cout << (head) << "\n"; }
template <class Head, class... Tail>
inline void COUT(Head &&head, Tail &&... tail) {
    cout << (head) << " ";
    COUT(forward<Tail>(tail)...);
}

#define CCIN(...)                                                              \
    char __VA_ARGS__;                                                          \
    CIN(__VA_ARGS__)
#define DCIN(...)                                                              \
    double __VA_ARGS__;                                                        \
    CIN(__VA_ARGS__)
#define LCIN(...)                                                              \
    long long __VA_ARGS__;                                                     \
    CIN(__VA_ARGS__)
#define SCIN(...)                                                              \
    string __VA_ARGS__;                                                        \
    CIN(__VA_ARGS__)
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

long long next_combination(long long sub) {
    long long x = sub & -sub, y = sub + x;
    return (((sub & ~y) / x) >> 1) | y;
}

// generic lambdas
template <typename F>
#if defined(__has_cpp_attribute) && __has_cpp_attribute(nodiscard)
[[nodiscard]]
#elif defined(__GNUC__) && (__GNUC__ > 3 || __GNUC__ == 3 && __GNUC_MINOR__ >= 4)
__attribute__((warn_unused_result))
#endif // defined(__has_cpp_attribute) && __has_cpp_attribute(nodiscard)
    static inline constexpr decltype(auto)
    fix(F &&f) noexcept {
    return [f = std::forward<F>(f)](auto &&... args) {
        return f(f, std::forward<decltype(args)>(args)...);
    };
}

template <typename T> using PQG = priority_queue<T, vector<T>, greater<T>>;
template <typename T> using PQ = priority_queue<T>;

typedef long long ll;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef pair<ll, ll> PL;
typedef vector<PL> VPL;
typedef vector<bool> VB;
typedef vector<double> VD;
typedef vector<string> VS;

const int INF = 1e9;
// const int MOD = 1e9 + 7;
const int MOD = 998244353;
const ll LINF = 1e18;
const ll dw[] = {1, 1, 0, -1, -1, -1, 0, 1};
const ll dh[] = {0, 1, 1, 1, 0, -1, -1, -1};
#define PI 3.141592653589793238
#define EPS 1e-7

signed main() {
    LCIN(N);
    LCIN(A);
    ll now = 1, ans = 0;
    ans += A - 1;
    FOR(i, 1, N) {
        LCIN(A);
        if(A <= now + 1) {
            now += (A == now + 1);
            continue;
        }
        if(A % (now + 1) == 0) A -= (now + 2), ans++;
        ans += A / (now + 1);
    }
    cout << ans << "\n";
}
