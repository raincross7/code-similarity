#include <bits/stdc++.h>
using namespace std;

#define rep(i, m, n) for(int(i) = (int)(m); i < (int)(n); ++i)
#define rep2(i, m, n) for(int(i) = (int)(n)-1; i >= (int)(m); --i)
#define REP(i, n) rep(i, 0, n)
#define REP2(i, n) rep2(i, 0, n)
#define all(hoge) (hoge).begin(), (hoge).end()
#define en '\n'
using ll = long long;
using ull = unsigned long long;
template <class T>
using vec = vector<T>;
template <class T>
using vvec = vector<vec<T>>;
typedef pair<ll, ll> P;
using tp = tuple<ll, ll, ll>;
constexpr long long INF = 1LL << 60;
constexpr int INF_INT = 1 << 25;
constexpr long long MOD = (ll)1e9 + 7;
//constexpr long long MOD = 998244353LL;
using ld = long double;
static const ld pi = 3.141592653589793L;
typedef vector<ll> Array;
typedef vector<Array> Matrix;

template <class T>
inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return true;
    }
    return false;
}

//グラフ関連
struct Edge {
    ll to, cap, rev;
    Edge(ll _to, ll _cap, ll _rev) {
        to = _to;
        cap = _cap;
        rev = _rev;
    }
};
typedef vector<Edge> Edges;
typedef vector<Edges> Graph;

void add_edge(Graph &G, ll from, ll to, ll cap, bool revFlag, ll revCap) {
    G[from].push_back(Edge(to, cap, (ll)G[to].size()));
    if(revFlag)
        G[to].push_back(Edge(from, revCap, (ll)G[from].size() - 1));
}

ll a[3][3];
ll b[10];
void solve() {
    REP(i, 3) {
        REP(j, 3) {
            cin >> a[i][j];
        }
    }

    ll n;
    cin >> n;
    map<ll, ll> mp;
    REP(i, n) {
        cin >> b[i];
        mp[b[i]]++;
    }

    REP(i, 3) {
        bool flag = true;
        REP(j, 3) {
            if(!mp.count(a[i][j])) {
                flag = false;
            }
        }
        if(flag) {
            cout << "Yes" << en;
            return;
        }
    }
    REP(i, 3) {
        bool flag = true;
        REP(j, 3) {
            if(!mp.count(a[j][i])) {
                flag = false;
            }
        }
        if(flag) {
            cout << "Yes" << en;
            return;
        }
    }

    bool flag = true;
    REP(i, 3) {
        if(!mp.count(a[i][i])) {
            flag = false;
        }
    }
    if(flag) {
        cout << "Yes" << en;
        return;
    }

    flag = true;
    REP(i, 3) {
        if(!mp.count(a[i][2 - i])) {
            flag = false;
        }
    }
    if(flag) {
        cout << "Yes" << en;
        return;
    }
    cout << "No" << en;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    /*
    ll t;
    cin >> t;
    while(t--)*/
    solve();

    return 0;
}
