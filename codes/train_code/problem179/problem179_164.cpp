#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <queue>
#include <bitset>
#include <stack>
#include <functional>

#ifdef LOCAL
    #define eprintf(...) fprintf(stderr, __VA_ARGS__)
#else
    #define eprintf(...) 42
#endif

#define rep_(i, a_, b_, a, b, ...) for (int i = (a), i##_len = (b); i < i##_len; ++i)
#define rep(i, ...) rep_(i, __VA_ARGS__, __VA_ARGS__, 0, __VA_ARGS__)
#define reprev_(i, a_, b_, a, b, ...) for (int i = (b-1), i##_min = (a); i >= i##_min; --i)
#define reprev(i, ...) reprev_(i, __VA_ARGS__, __VA_ARGS__, 0, __VA_ARGS__)
#define all(x) (x).begin(), (x).end()
template <class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T &a, const T &b) { if (b < a) { a = b; return 1; } return 0; }
template <class T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair <int,int> P;
typedef long double ld;

int main (void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, k; cin >> n >> k;
    vector<ll> a(n), l(n + 1), r(n + 1), c(n - k + 1);
    rep (i, n) cin >> a[i];
    rep (i, n) l[i + 1] = l[i] + (a[i] > 0LL ? a[i] : 0LL);
    reprev (i, n) r[i] = r[i + 1] + (a[i] > 0LL ? a[i] : 0LL);
    rep (i, k) c[0] += a[i]; rep (i, n - k) c[i + 1] = c[i] - a[i] + a[i + k];
    for (ll i : l) eprintf("%lld ", i); eprintf("\n");
    for (ll i : r) eprintf("%lld ", i); eprintf("\n");
    for (ll i : c) eprintf("%lld ", i); eprintf("\n");

    ll ans = 0;
    rep (i, n - k + 1) chmax(ans, l[i] + r[i + k] + (c[i] > 0LL ? c[i] : 0LL));
    cout << ans << "\n";
    return 0;
}