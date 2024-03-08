#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using P = pair<ll, ll>;
using Pld = pair<ld, ld>;
using Vec = vector<ll>;
using VecP = vector<P>;
using VecB = vector<bool>;
using VecC = vector<char>;
using VecD = vector<ld>;
using VecS = vector<string>;
template <class T>
using Vec2 = vector<vector<T>>;
#define REP(i, m, n) for(ll i = (m); i < (n); ++i)
#define REPN(i, m, n) for(ll i = (m); i <= (n); ++i)
#define REPR(i, m, n) for(ll i = (m)-1; i >= (n); --i)
#define REPNR(i, m, n) for(ll i = (m); i >= (n); --i)
#define rep(i, n) REP(i, 0, n)
#define repn(i, n) REPN(i, 1, n)
#define repr(i, n) REPR(i, n, 0)
#define repnr(i, n) REPNR(i, n, 1)
#define all(s) (s).begin(), (s).end()
#define pb push_back
#define fs first
#define sc second
template <class T1, class T2>
bool chmax(T1 &a, const T2 b){if(a < b){a = b; return true;} return false;}
template <class T1, class T2>
bool chmin(T1 &a, const T2 b){if(a > b){a = b; return true;} return false;}
ll pow2(const int n){return (1LL << n);}
void co() { cout << endl; }
template <class Head, class... Tail>
void co(Head&& head, Tail&&... tail) {
    cout << head << ' ';
    co(forward<Tail>(tail)...);
}
void ce() { cerr << endl; }
template <class Head, class... Tail>
void ce(Head&& head, Tail&&... tail) {
    cerr << head << ' ';
    ce(forward<Tail>(tail)...);
}
void sonic(){ios::sync_with_stdio(false); cin.tie(0);}
void setp(const int n){cout << fixed << setprecision(n);}
constexpr int INF = 1e9+1;
constexpr ll LINF = 1e18L+1;
constexpr ll MOD = 1e9L+7;
constexpr ll MOD_N = 998244353;
constexpr ld EPS = 1e-11;
const double PI = acos(-1);

struct union_find{
    vector<ll> par;
    vector<ll> size;

    union_find(ll n){
        par.resize(n);
        size.assign(n, 1);
        for(int i = 0; i < n; ++i) par[i] = i;
    }

    ll root(ll x){
        if(par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(ll x, ll y){
        x = root(x), y = root(y);
        if(x != y){
            if(size[x] > size[y]) swap(x, y);
            par[y] = x;
            size[x] += size[y];
        }
    }

    ll getSize(ll x){
        return size[root(x)];
    }

    bool same(ll x, ll y){
        return root(x) == root(y);
    }
};

int main(void){
    ll n, q;
    cin >> n >> q;
    union_find uf(n);
    while(q--){
        ll t, u, v;
        cin >> t >> u >> v;
        if (t == 0) uf.unite(u, v);
        else
            co(uf.same(u, v));
    }

    return 0;
}
