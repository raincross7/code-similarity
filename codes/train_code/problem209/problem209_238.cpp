#include <bits/stdc++.h>
#define ll long long int
#define F(i,j,k,in) for(int i=j;i<k;i+=in)
#define DF(i,j,k,in) for(int i=j;i>=k;i-=in)
#define feach(it,l) for (auto it = l.begin(); it != l.end(); ++it)
#define fall(a) a.begin(),a.end()
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define eq equal_range
#define fs first
#define ss second
#define ins insert
#define mkp make_pair
#define endl "\n"
using namespace std;
typedef vector<ll> vll;
typedef vector<int> vin;
typedef vector<char> vch;
typedef vector<string> vst;
typedef vector<vector<ll>> vvll;
typedef vector<vector<int>> vvin;
typedef vector<pair<ll,ll>> vpll;
typedef vector<pair<int,int>> vpin;
typedef set<ll> sll;
typedef set<int> sint;
typedef set<char> sch;
typedef set<string> sst;
typedef queue<ll> qll;
typedef priority_queue<ll> pqll;
typedef queue<int> qin;
typedef priority_queue<int> pqin;
typedef map<ll,ll> mpll;
typedef map<int,int> mpin;
typedef pair<ll,ll> pll;
typedef pair<int,int> pin;
const ll MOD=1000000007;
const long double PI=3.1415926535897932384626433832795;
ll pwr(ll b,ll p){ll res=1;while(p){if(p&1) {res*=b; p--;}else{b*=b; p>>=1;}}return res;}
const int maxn = 2e5;
vin adj[maxn];
bool vis [maxn];
int sz;
void dfs (int a) {
  ++sz;
  vis [a] = true;
  for (auto v  : adj[a]) if (!vis[v]) dfs (v);
}
int main()
{
ios_base::sync_with_stdio(false) , cin.tie(NULL) , cout.tie(NULL);
int n,m; cin>>n>>m;
F (i,0,m,1) {
  int a, b; cin>>a>>b;
  --a; --b;
  adj[a].pb(b); adj[b].pb(a);
}
int maxi=-1;
F (i,0,n,1) vis[i]=false;
F (i,0,n,1) {
  sz=0;
  if (!vis[i]) dfs(i);
  maxi=max (maxi , sz);
}
cout<<maxi;
return 0;
}
