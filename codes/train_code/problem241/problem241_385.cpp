#pragma region includes, macros
#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
#include <vector>
#include <set>
#include <queue>
#include <stack>
#include <numeric>
#include <bitset>
#include <map>
#include <set>
#include <list>
#include <unordered_set>
#include <unordered_map>
#include <stdlib.h>

using namespace std;

typedef int64_t i64;
typedef pair<i64, i64> P;

template<class T>
const T INF = numeric_limits<T>::max();
template<class T>
const T SINF = numeric_limits<T>::max() / 10;
static const i64 MOD = 1000000007;

//int dx[5] = {-1,0,0,0,1}, dy[5] = {0,-1,0,1,0};
//int dx[8] = {-1,0,1,1,1,0,-1,-1}, dy[8] = {1,1,1,0,-1,-1,-1,0};
//int dx[9] = {-1,0,1,1,1,0,-1,-1,0}, dy[9] = {1,1,1,0,-1,-1,-1,0,0};

struct edge {
    i64 from, to, cost;
    edge(i64 to, i64 cost) : from(-1), to(to), cost(cost) {}
    edge(i64 src, i64 to, i64 cost) : from(src), to(to), cost(cost) {}
};

// 多重vectorを可変引数テンプレートで http://beet-aizu.hatenablog.com/entry/2018/04/08/145516
template<typename T>
vector<T> make_v(size_t a) { return vector<T>(a); }

template<typename T, typename... Ts>
auto make_v(size_t a, Ts... ts) {
    return vector<decltype(make_v<T>(ts...))>(a, make_v<T>(ts...));
}

template<typename T, typename V>
typename enable_if<is_class<T>::value == 0>::type
fill_v(T& t, const V& v) { t = v; }

template<typename T, typename V>
typename enable_if<is_class<T>::value != 0>::type
fill_v(T& t, const V& v) {
    for (auto& e : t) fill_v(e, v);
}
//

#pragma endregion

int dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 };

int main() {
    i64 n;
    cin >> n;
    vector<i64> t(n), a(n);
    for(int i = 0; i < n; ++i) cin >> t[i];
    for(int i = 0; i < n; ++i) cin >> a[i];
    vector<bool> x(n, false), y(n, false);
    x[0] = y[n - 1] = true;
    for (int i = 1; i < n; ++i) {
        if (t[i] != t[i - 1]) {
            x[i] = true;
        }
    }
    for (int i = n - 2; i >= 0; --i) {
        if (a[i] != a[i + 1]) {
            y[i] = true;
        }
    }
    i64 ans = 1;
    for (int i = 0; i < n; ++i) {
        if (x[i] && y[i]) {
            if (t[i] != a[i]) {
                ans = 0;
            }
        }
        else if (x[i]){
            if(t[i] > a[i]) ans = 0;
        }
        else if (y[i]) {
            if(a[i] > t[i]) ans = 0;
        }
        else {
            ans = ans * min(t[i], a[i]) % MOD;
        }
    }
    cout << ans << endl;
}
