

#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX
#define INF LLONG_MAX
#define ll long long
#define ull unsigned long long
#define M (int)(1e9+7)
#define P pair<int,int>
#define FOR(i,m,n) for(int i=(int)m;i<(int)n;i++)
#define RFOR(i,m,n) for(int i=(int)m;i>=(int)n;i--)
#define rep(i,n) FOR(i,0,n)
#define rrep(i,n) RFOR(i,n,0)
#define all(a) a.begin(),a.end()
const int vx[4] = {0,1,0,-1};
const int vy[4] = {1,0,-1,0};
#define F first
#define S second
#define PB push_back
#define EB emplace_back
#define int ll
#define vi vector<int>
#define IP pair<int,P>
#define PI pair<P,int>
#define PP pair<P,P>
#define Yes(f){cout<<(f?"Yes":"No")<<endl;}
#define YES(f){cout<<(f?"YES":"NO")<<endl;}
int Madd(int x,int y) {return (x+y)%M;}
int Msub(int x,int y) {return (x-y+M)%M;}
int Mmul(int x,int y) {return (x*y)%M;}



template< typename T >
struct edge {
  int src, to;
  T cost;

  edge(int to, T cost) : src(-1), to(to), cost(cost) {}

  edge(int src, int to, T cost) : src(src), to(to), cost(cost) {}

  edge &operator=(const int &x) {
    to = x;
    return *this;
  }

  operator int() const { return to; }
};

template< typename T >
using Edges = vector< edge< T > >;
template< typename T >
using WG = vector< Edges< T > >;
using UG = vector< vector< int > >;
template< typename T >
using Matrix = vector< vector< T > >;

template< typename T >
void tsort_dfs(int u,vector<int> &graph,vector<bool> &visited,WG<T> &g){

  if(visited[u]) return;
  visited[u] = true;
  for(int i=0;i<g[u].size();i++){
    tsort_dfs(g[u][i].to,graph,visited,g);
  }
  graph.PB(u);
}

template< typename T>
vector<int> tsort(WG<T> &g){
  vector<int> graph;
  vector<bool> visited(g.size(),false);
  for(int i=0;i<g.size();i++){
    tsort_dfs(i,graph,visited,g);
  }
  reverse(all(graph));
  return graph;
}

signed main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout<<fixed<<setprecision(20);

  int n,m;
  cin>>n>>m;
  WG<int> es(n);
  rep(i,m){
    int a,b;
    cin>>a>>b;
    es[a].PB(edge<int>(b,0));
  }

  vi res=tsort(es);
  for(auto x:res){
    cout<<x<<endl;
  }


}
