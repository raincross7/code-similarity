#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<n;i++)
#define repl(i,l,r) for(ll i=(l);i<(r);i++)
#define per(i,n) for(ll i=n-1;i>=0;i--)
#define perl(i,r,l) for(ll i=r-1;i>=l;i--)
#define fi first
#define se second
#define pb push_back
#define ins insert
#define all(x) (x).begin(),(x).end()
using ll=long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
const ll MOD=1000000007;
const ll MOD9=998244353;
const int inf=1e9+10;
const ll INF=4e18;
const ll dy[8]={1,0,-1,0,1,1,-1,-1};
const ll dx[8]={0,-1,0,1,1,-1,1,-1};
using Graph = vector<vector<ll>>;
double nCk(int n, int k) {
double res=1.0;
for(int i=0; i<n; i++){
res*=0.5;}
for(int i=0; i<k; i++){
res*=(double)(n-i);
res/=(double)(k-i);
}
return res;}
struct edge{ll to, cost;};
typedef pair<ll,ll> P;
struct graph{
  ll V;
  vector<vector<edge> > G;
  vector<ll> d;

  graph(ll n){
    init(n);
  }

  void init(ll n){
    V = n;
    G.resize(V);
    d.resize(V);
    rep(i,V){
      d[i] = INF;
    }
  }

  void add_edge(ll s, ll t, ll cost){
    edge e;
    e.to = t, e.cost = cost;
    G[s].push_back(e);
  }

  void dijkstra(ll s){
    rep(i,V){
      d[i] = INF;
    }
    d[s] = 0;
    priority_queue<P,vector<P>, greater<P> > que;
    que.push(P(0,s));
    while(!que.empty()){
      P p = que.top(); que.pop();
      ll v = p.second;
      if(d[v]<p.first) continue;
      for(auto e : G[v]){
        if(d[e.to]>d[v]+e.cost){
          d[e.to] = d[v]+e.cost;
          que.push(P(d[e.to],e.to));
        }
      }
    }
  }
};
class UnionFind
{
public:
  ll par[100005];
  ll depth[100005];
  ll nGroup[100005];
 
  UnionFind(ll n) {
    init(n);
  }
 
  void init(ll n) {
    for(ll i=0; i<n; i++) {
      par[i] = i;
      depth[i] = 0;
      nGroup[i] = 1;
    }
  }
 
  ll root(ll x) {
    if(par[x] == x) {
      return x;
    } else {
      return par[x] = root(par[x]);
    }
  }
 
  bool same(ll x, ll y) {
    return root(x) == root(y);
  }
 
  void unite(ll x, ll y) {
    x = root(x);
    y = root(y);
    if(x == y) return;
 
    if(depth[x] < depth[y]) {
      par[x] = y;
      nGroup[y] += nGroup[x];
      nGroup[x] = 0;
    } else {
      par[y] = x;
      nGroup[x] += nGroup[y];
      nGroup[y] = 0;
      if(depth[x] == depth[y])
        depth[x]++;
    }
  }
};
const ll MAX = 510000;
ll fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
ll COM(ll n, ll k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
} 

vector<ll> depth;
vector<ll> subtree_size;
void dfs(const Graph &G, ll v, ll p, ll d) {
    depth[v] = d;
    for (auto nv : G[v]) {
        if (nv == p) continue; // nv が親 p だったらダメ
        dfs(G, nv, v, d+1);
    }

    // 帰りがけ時に、部分木サイズを求める
    subtree_size[v] = INF; // 自分自身
    vl q;
    for (auto c : G[v]) {
        if (c == p) continue;
        q.pb(subtree_size[c]);// 子のサイズを加える
    }
  ll qq = q.size();
  //cout << v << " " << qq << endl;
  if(qq==0) subtree_size[v]=0;
  else{
  sort(all(q));
    //rep(i,qq)cout << q[i];
    //cout << endl;
  ll caa = 0;
  rep(i,qq){
    caa = max(qq+q[i]-i,caa);}
    subtree_size[v]=caa;
  }
}
ll dp[100005][2];
int main() {
string L; cin>>L;
  ll len = L.size();
  dp[1][0]=1;
  dp[1][1]=2;
  repl(i,1,len){
    rep(j,2){
        if(L.at(i)=='0'){
          dp[i+1][0]=(3*dp[i][0])%MOD;
          dp[i+1][1]=dp[i][1]%MOD;}
      else{
        dp[i+1][0]=(3*dp[i][0]+dp[i][1])%MOD;
        dp[i+1][1]=(2*dp[i][1])%MOD;}
    }
  }
  cout << (dp[len][0]+dp[len][1])%MOD << endl;}