#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <ctime>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
using ll = long long;

#define REP(i, a) for (int i = 0; i < (a); ++i)
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORR(i, a, b) for (int i = (a)-1; i >= (b); --i)
#define ALL(obj) (obj).begin(), (obj).end()
#define SIZE(obj) (int)(obj).sizeT()
#define YESNO(cond, yes, no) \
    { cout << ((cond) ? (yes) : (no)) << endl; }
#define SORT(list) sort(ALL((list)));
#define RSORT(list) sort((list).rbegin(), (list).rend())
#define ASSERT(cond, mes) assert(cond&& mes)

constexpr int MOD = 1'000'000'007;
constexpr int INF = 1'050'000'000;

template <typename T>
T round_up(const T& a, const T& b) {
    return (a + (b - 1)) / b;
}

template <typename T1, typename T2>
istream& operator>>(istream& is, pair<T1, T2>& p) {
    is >> p.first >> p.second;
    return is;
}

template <typename T1, typename T2>
ostream& operator<<(ostream& os, pair<T1, T2>& p) {
    os << p.first << p.second;
    return os;
}

template <typename T>
istream& operator>>(istream& is, vector<T>& v) {
    REP(i, (int)v.size())
        is >> v[i];
    return is;
}

template <typename T>
T clamp(T& n, T a, T b) {
    if (n < a) n = a;
    if (n > b) n = b;
    return n;
}

template <typename T>
static T GCD(T u, T v) {
    T r;
    while (v != 0) {
        r = u % v;
        u = v;
        v = r;
    }
    return u;
}

template <typename T>
static T LCM(T u, T v) {
    return u / GCD(u, v) * v;
}

template <typename T>
std::vector<T> enum_div(T n) {
    std::vector<T> ret;
    for (T i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) { ret.push_back(n / i); }
        }
    }
    return ret;
}

template <typename T>
bool chmin(T& a, const T& b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template <typename T>
bool chmax(T& a, const T& b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

struct ToUpper {
    char operator()(char c) {
        return toupper(c);
    }
};

struct ToLower {
    char operator()(char c) {
        return tolower(c);
    }
};

int N, K;
vector<vector<pair<int, int>>> G;
vector<ll> bfs() {
    queue<int> q;
    q.emplace(K);
    vector<ll> memo(N, -1);
    memo[K] = 0;
    while (!q.empty()) {
        int i = q.front(); q.pop();
        for (auto&& x : G[i]) {
            if (memo[x.first] != -1)continue;
            memo[x.first] = memo[i] + x.second;
            q.emplace(x.first);
        }
    }
    return memo;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(20);

    int N, M;
    cin >> N >> M;

    struct Cake {
        ll x, y, z;
    };
    vector<Cake> cakes(N);
    REP(i, N) {
        ll x, y, z;
        cin >> x >> y >> z;
        cakes[i] = { x,y,z };
    }

    ll ans = 0;
    REP(i, 8) {
        vector<int> D(3);
        REP(d, 3) {
            if ((i >> d) & 1)D[d] = 1;
            else D[d] = -1;
        }
        auto func = [&](const Cake& c1, const Cake& c2) {
            return D[0] * c1.x + D[1] * c1.y + D[2] * c1.z
                < D[0] * c2.x + D[1] * c2.y + D[2] * c2.z;
        };

        vector<Cake> q(N);
        REP(i, N) {
            q[i] = (cakes[i]);
        }
        sort(ALL(q), func);

        ll x = 0, y = 0, z = 0;
        REP(i, M) {
            Cake c = q.back(); q.pop_back();
            x += c.x;
            y += c.y;
            z += c.z;
        }
        ll now = abs(x) + abs(y) + abs(z);
        chmax(ans, now);
    }
    cout << ans << endl;
    return 0;
}
