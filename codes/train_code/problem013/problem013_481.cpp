#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> p_ll;

template<class T>
void debug(T itr1, T itr2) { auto now = itr1; while(now<itr2) { cout << *now << " "; now++; } cout << endl; }
#define repr(i,from,to) for (int i=(int)from; i<(int)to; i++)
#define all(vec) vec.begin(), vec.end()
#define rep(i,N) repr(i,0,N)
#define per(i,N) for (int i=(int)N-1; i>=0; i--)

const ll MOD = pow(10,9)+7;
const ll LLINF = pow(2,61)-1;
const int INF = pow(2,30)-1;

vector<ll> fac;
void c_fac(int x=pow(10,6)+10) { fac.resize(x,true); rep(i,x) fac[i] = i ? (fac[i-1]*i)%MOD : 1; }
ll inv(ll a, ll m=MOD) { ll b = m, x = 1, y = 0; while (b!=0) { int d = a/b; a -= b*d; swap(a,b); x -= y*d; swap(x,y); } return (x+m)%m; }
ll nck(ll n, ll k) { return fac[n]*inv(fac[k]*fac[n-k]%MOD)%MOD; }
ll gcd(ll a, ll b) { if (a<b) swap(a,b); return b==0 ? a : gcd(b, a%b); }
ll lcm(ll a, ll b) { return a/gcd(a,b)*b; }

// ----------------------------------------------------------------------
// ----------------------------------------------------------------------

struct UnionFind {
  vector<int> par, s; 
  UnionFind(int N) : par(N), s(N) { rep(i,N) { par[i] = i; s[i] = 1; } }
  int root(int x) { return par[x]==x ? x : par[x] = root(par[x]); }
  int size(int x) { return par[x]==x ? s[x] : s[x] = size(root(x)); }
  void unite(int x, int y) { int rx=root(x), ry=root(y); if (rx!=ry) { s[rx] += s[ry]; par[ry] = rx; } }
  bool same(int x, int y) {  int rx=root(x), ry=root(y); return rx==ry; }
};

// ----------------------------------------------------------------------
// ----------------------------------------------------------------------

vector<vector<ll>> adj;
vector<ll> color;

bool dfs(ll n) {
  if (color[n]==-1) color[n] = 0;
  bool result = true;
  for (auto x: adj[n]) {
    if (color[x]==-1) {
      color[x] = !color[n];
      result &= dfs(x);
    }
    else result &= color[x]!=color[n];
  }
  return result;
}

int main() {
  ll N, M; cin >> N >> M;
  adj.resize(N);
  UnionFind uf(N);
  rep(i,M) {
    int u, v; cin >> u >> v; u--; v--;
    uf.unite(u,v);
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  color.resize(N,-1);
  ll one = 0, bi = 0, nbi = 0;
  rep(i,N) {
    if (uf.root(i)!=i) continue;
    if (uf.size(i)==1) one++;
    else {
      if (dfs(i)) bi++;
      else nbi++;
    }
  }
  // cout << one << " " << bi << " " << nbi << endl;

  ll result = (N*N-(N-one)*(N-one)) + bi*bi*2 + nbi*bi*2 + nbi*nbi;
  cout << result << endl;
  return 0;
}