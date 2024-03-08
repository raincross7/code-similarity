#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define PI  3.14159265358979323846
#define lp(i,n) for(int i = 0; i <n;i++)
#define rlp(i,n) for(int i = int(n);i >= 0;i--)
#define range1(i,a,b,c) for(int i = int(a);i <= int(b);i+=int(c))
#define range(i,a,b) for(int i = int(a);i <= int(b);i++)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define MP make_pair
#define fr first
#define sc second
#define sz(v) ((int)((v).size()))
#define sfi1(v) scanf("%d",&v)
#define sfi2(v1, v2) scanf("%d %d",&v1,&v2)
#define sfi3(v1, v2, v3) scanf("%d %d %d",&v1,&v2,&v3)
#define sfll1(v) scanf("%I64d",&v);
#define sfll2(v1, v2) scanf("%I64d %I64d",&v1,&v2)
#define sfll3(v1, v2, v3) scanf("%I64d %I64d %I64d",&v1,&v2,&v3)
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<pair<int, int> > vii;
typedef pair<int, int> pii;
template<class T> using ordered_set=tree<T,
null_type,
less<T>,
rb_tree_tag,
tree_order_statistics_node_update>;
const ll MOD = 1e9 + 7;
const int OO = (int)1e6;
const int N = (int)200005;
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int mult(int a,int b){
    int res = (a%MOD * b%MOD)%MOD;
    return res;
}
vector<int>adj[N];
int vis[N],vid, n,m;
bool f = false;
void dfs(int node,int cnt =0){
    vis[node]=1;
    
    if(node==n&&cnt==2){
        f = true;
        return;
    }else if(cnt==2){
        return ;
    }
    for(int child : adj[node]){
        if(!vis[child]){
            dfs(child,cnt+1);
        }
    }
}
void _run(){

  cin>>n>>m;
  for(int i=0;i<m;i++){
      int x,y;
      cin>>x>>y;
      adj[x].pb(y);
  }
  for(int i=1;i<=n;i++){
      if(!vis[i]){
          dfs(i);
          if(f){
              puts("POSSIBLE");
              return ;
          }
      }
  }
  puts("IMPOSSIBLE");
}
int main() {
	#   ifdef LOCAL_PROJECT
        freopen("in.txt", "r", stdin);
    #   endif
    int t=1;
    // scanf("%d",&t);
    while(t--)_run();
    
    return 0;
}