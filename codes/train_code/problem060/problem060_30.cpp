/* ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄▄            ▄            ▄▄▄▄▄▄▄▄▄▄▄  ▄         ▄       ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄
▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌          ▐░▌          ▐░░░░░░░░░░░▌▐░▌       ▐░▌     ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░▌
▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌▐░▌          ▐░▌          ▐░█▀▀▀▀▀▀▀█░▌▐░▌       ▐░▌     ▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌
▐░▌          ▐░▌       ▐░▌▐░▌          ▐░▌          ▐░▌       ▐░▌▐░▌       ▐░▌     ▐░▌          ▐░▌       ▐░▌▐░▌       ▐░▌
▐░█▄▄▄▄▄▄▄▄▄ ▐░▌       ▐░▌▐░▌          ▐░▌          ▐░▌       ▐░▌▐░▌   ▄   ▐░▌     ▐░▌ ▄▄▄▄▄▄▄▄ ▐░▌       ▐░▌▐░▌       ▐░▌
▐░░░░░░░░░░░▌▐░▌       ▐░▌▐░▌          ▐░▌          ▐░▌       ▐░▌▐░▌  ▐░▌  ▐░▌     ▐░▌▐░░░░░░░░▌▐░▌       ▐░▌▐░▌       ▐░▌
▐░█▀▀▀▀▀▀▀▀▀ ▐░▌       ▐░▌▐░▌          ▐░▌          ▐░▌       ▐░▌▐░▌ ▐░▌░▌ ▐░▌     ▐░▌ ▀▀▀▀▀▀█░▌▐░▌       ▐░▌▐░▌       ▐░▌
▐░▌          ▐░▌       ▐░▌▐░▌          ▐░▌          ▐░▌       ▐░▌▐░▌▐░▌ ▐░▌▐░▌     ▐░▌       ▐░▌▐░▌       ▐░▌▐░▌       ▐░▌
▐░▌          ▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄█░▌▐░▌░▌   ▐░▐░▌     ▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄█░▌
▐░▌          ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░▌     ▐░░▌     ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░▌
 ▀            ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀       ▀▀       ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀  */

//#pragma optimization_level 3

//#pragma comment(linker, "/stack:200000000")
//#pragma GCC optimize("Ofast")
//#pragma GCC optimize("unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <chrono>
#include <ctime>
#include <queue>
#include <math.h>
#include <deque>
#include <stack>
#include <iomanip>
#include <assert.h>
#include <stdio.h>
#include <cstring>
#include <random>
#include <limits.h>

using namespace std;

#define int long long
#define ll long long
#define ull unsigned long long
#define ld long double
#define pii pair<int, int>
#define pld pair<ld, ld>
#define vi vector <int>
#define vpi vector <pii>
#define vld vector <ld>
#define try tr
#define left left11
#define right right11
#define lb lower_bound
#define ub upper_bound
#define sz(c) (int)(c).size()
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define pf push_front
#define sqr(a) ((a) * (a))
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define x first
#define y second

mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

clock_t START;

inline ld TIME() {
    return (ld) (clock() - START) / CLOCKS_PER_SEC;
}

ld TL = 2.0; 
int calls = 0;

inline bool IS() {
    if(++calls == 1000) {
        calls = 0;
        if(TL - TIME() < 0.1)
            return true;
    }
    return false;
}

template<typename T1, typename T2>
inline void amin(T1 &a, T2 b) { if (a > b) a = b; }

template<typename T1, typename T2>
inline void amax(T1 &a, T2 b) { if (a < b) a = b; }

template<typename T1, typename T2>
ostream &operator<<(ostream &os, pair<T1, T2> &p) {
    os << p.first << ' ' << p.second << endl;
    return os;
}

template<typename T1, typename T2>
istream &operator>>(istream &is, pair<T1, T2> &p) {
    is >> p.first >> p.second;
    return is;
}

template<typename T>
istream &operator>>(istream &is, vector<T> &v) {
    for (auto &u : v) is >> u;
    return is;
}

template<typename T>
ostream &operator<<(ostream &os, vector<T> &v) {
    for (auto &u : v) os << u << ' ';
    os << endl;
    return os;
}

int hash_mod[4] = {1000000007, 998244353, 1000000009, 999999937}, mod = hash_mod[rnd() % 4];
int hash_pows[4] = {179, 239, 1007, 2003}, P = hash_pows[rnd() % 4];

int binpow(int x, int p) {
    int res = 1;
    while(p) {
        if(p % 2)
            res = (res * x) % mod;
        x = (x * x) % mod;
        p /= 2;
    }
    return res;
}

int sum(int x, int y) {
    x += y;
    if(x >= mod)
        x -= mod;
    return x;
}

void mult(int &x, int y) {
    x = (x * y) % mod;
}

const int N = 1e5 + 7, NS = 3e3 + 7, lg = 20, sq = 550, inf = 1e9 + 7, SM = 1e2 + 7;
const ld eps = 1e-9;
int d[N][2];
vi v[N];
void dfs(int x = 0, int p = -1) {
    d[x][0] = d[x][1] = 1;
    for (auto u : v[x]) {
        if(u == p)
            continue;
        dfs(u, x);
        mult(d[x][0], d[u][1]);
        mult(d[x][1], sum(d[u][1], d[u][0]));
    }
}
void solve() {
    mod = hash_mod[0];
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        v[a].pb(b);
        v[b].pb(a);
    }
    dfs();
    cout<< sum(d[0][0], d[0][1]);
}

signed main() {
    fast
    solve();
}