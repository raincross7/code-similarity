#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <array>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <sstream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <list>
#include <numeric>
#include <stack>
#include <iomanip>
#include <random>
#include <complex>
#include <functional>
#include <tuple>

using namespace std;

#define Rep(i,a,b) for(int i = a; i < b; ++i)
#define rep(i,b) Rep(i,0,b)
#define allof(a) (a).begin(), (a).end()

#define Yes(q) ((q) ? "Yes" : "No")
#define YES(q) ((q) ? "YES" : "NO")
#define Possible(q) ((q) ? "Possible" : "Impossible")
#define POSSIBLE(q) ((q) ? "POSSIBLE" : "IMPOSSIBLE")

using ll = long long;

using pint = std::pair<int, int>;
using pll = std::pair<ll, ll>;


constexpr int inf = 1e9 + 7;
constexpr ll infll = 1ll << 62ll;
constexpr ll mod = 1e9 + 7;
// 0~3までは右左下上 4~7までは斜め
constexpr int dx[] = { 1, 0, -1, 0, 1, 1, -1, -1 };
constexpr int dy[] = { 0, -1, 0, 1, 1, -1, -1, 1 };

namespace {
    template<typename T> void chmax(T& a, T b) { a = std::max(a, b); }
    template<typename T> void chmin(T& a, T b) { a = std::min(a, b); }
    template<typename T> void chadd(T& a, T b) { a = a + b; }

    void Cout(long long x, const char* end = "\n") { std::cout << x << end; }
    template <typename T> void Cout(const T& x, const char* end = "\n") { std::cout << x << end; }
    template <typename T> void Cout(const std::vector<T>& x, const char* sep = " ", const char* end = "\n") { for (std::size_t i = 0, sz = x.size(); i < sz; i++) { std::cout << x[i] << (i == sz - 1 ? end : sep); } }

    void CCout(long long x, const char* end = "\n") { std::cerr << x << end; }
    template <typename T> void CCout(const T& x, const char* end = "\n") { std::cerr << x << end; }
    template <typename T> void CCout(const std::vector<T>& x, const char* sep = " ", const char* end = "\n") { for (std::size_t i = 0, sz = x.size(); i < sz; i++) { std::cerr << x[i] << (i == sz - 1 ? end : sep); } }

    // 標準入出力
    struct inp {
        std::size_t sz;
        inp(std::size_t _sz = 1) : sz(_sz) {}
        template <typename T> operator T () const { T a; std::cin >> a; return a; }
        template <typename T> operator std::vector<T>() const { vector<T> a(sz); for (std::size_t i = 0; i < sz; i++) std::cin >> a[i]; return a; }
        template <typename T, typename U> operator std::pair<T, U>() const { T f; U s; std::cin >> f >> s; return std::pair<T, U>(f, s); }
    };

    inp inp1; // input one
}

int main() {

    int n, K;
    cin >> n >> K;
    vector<ll> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];

    ll ans = infll;

    // 全探索
    vector<ll> lefts(n);
    vector<ll> rights(n);
    vector<ll> tops(n);
    vector<ll> bottoms(n);
    rep(i, n) {
        lefts[i] = x[i];
        rights[i] = x[i];
        tops[i] = y[i];
        bottoms[i] = y[i];
    }

    sort(allof(lefts));
    sort(allof(rights), greater<ll>());
    sort(allof(bottoms));
    sort(allof(tops), greater<ll>());

    // どこまで縮めるか
    rep(i, n) {
        rep(j, n - i - 1) {
            rep(k, n) {
                rep(l, n - k - 1) {
                    ll left = lefts[i];
                    ll right = rights[j];
                    ll bottom = bottoms[k];
                    ll top = tops[l];

                    // 何点含まれているか
                    int cnt = 0;
                    rep(m, n) {
                        if (x[m] < left || x[m] > right) continue;
                        if (y[m] < bottom || y[m] > top) continue;
                        ++cnt;
                    }

                    if (cnt >= K) {
                        chmin(ans, (right - left)* (top - bottom));
                    }
                }
            }
        }
    }

    Cout(ans);

    return 0;
}