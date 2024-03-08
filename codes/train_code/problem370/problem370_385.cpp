#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, x, n) for(int i = x; i <= n; i++)
#define rep3(i, x, n) for(int i = x; i >= n; i--)
#define elif else if
#define sp(x) fixed << setprecision(x)
#define pb push_back
#define eb emplace_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pil = pair<int, ll>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
const ll MOD = 1e9+7;
//const ll MOD = 998244353;
const int inf = (1<<30)-1;
const ll INF = (1LL<<60)-1;
const ld EPS = 1e-10;
template<typename T> bool chmax(T &x, const T &y) {return (x < y)? (x = y, true) : false;};
template<typename T> bool chmin(T &x, const T &y) {return (x > y)? (x = y, true) : false;};

struct Union_Find_Tree{
    vector<int> par, rank, num, p;
    
    Union_Find_Tree(int N){
        par.assign(N, -1);
        rank.assign(N, 0);
        num.assign(N, 1);
        p.assign(N, 0);
    }
    
    int root(int x){
        if(par[x] < 0 || par[x] == x) return x;
        int ret = root(par[x]);
        p[x] += p[par[x]];
        return par[x] = ret;
    }

    int weight(int x){
        root(x);
        return p[x];
    }
    
    bool unite(int x, int y, int w){
        w += weight(x), w -= weight(y);
        x = root(x), y = root(y);
        if(x == y) return false;
        if(rank[x] < rank[y]) swap(x, y), w *= -1;
        if(rank[x] == rank[y]) rank[x]++;
        par[y] = x, num[x] += num[y];
        p[y] = w;
        return true;
    }
    
    int size(int x) {return num[root(x)];}
    
    bool same(int x, int y){
        return root(x) == root(y);
    }
    
    void clear(){
        fill(all(par), -1);
        fill(all(rank), 0);
        fill(all(num), 1);
        fill(all(num), 0);
    }
};

int main(){
    int N, M;
    cin >> N >> M;
    Union_Find_Tree uf(N);
    bool ans = true;
    rep(i, M){
        int u, v, d; cin >> u >> v >> d; u--, v--;
        if(!uf.unite(u, v, d)){
            ans &= (uf.weight(v)-uf.weight(u) == d);
        }
    }
    cout << (ans? "Yes" : "No") << endl;
}