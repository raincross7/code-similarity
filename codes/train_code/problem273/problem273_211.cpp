#include<bits/stdc++.h>
using namespace std;
using ull=unsigned long long;
#define mod 1000000007
#define mod2 998244353 
#define PI 3.14159265
#define ll long long
#define ld long double
#define pi pair<ll,ll>
#define pb push_back
#define vi vector<ll>
#define sz size()
#define setbits(x)  __builtin_popcount(x)
#define fi first
#define se second
#define lz length()
#define all(x) (x).begin(),(x).end()
#define scf(x) scanf("%lld",&x)
#define rep(i,n) for(ll i=0;i<n;i++)
const int INF = (int)1e9;
const ll IINF=1LL<<62;
const int maxn=10000005;

//int divr[maxn];
/**/
/*void divisor()
{for(int i=2;i<sqrt(maxn);i++)
     {
          if(!divr[i])
          {
               for(int j=i*i;j<maxn;j+=i)if(!divr[j])divr[j]=i;     
          }
     }
     for(int i=1;i<maxn;i++)if(!divr[i])divr[i]=i;
}*/
 
/*const int N=1000005;
ll n;
struct line {
    long long m, c;
    long long eval(long long x) { return m * x + c; }
    long double intersectX(line l) { return (long double) (c - l.c) / (l.m - m); }
};
vector<pair<pi,ll>> rect;
deque<line> dq;
*/
/*int find(int a){
     if(a==par[a])return a;
     return par[a]=find(par[a]);
}
void unite(int a,int b){
     a=find(a),b=find(b);
     if(a==b)return ;
     par[b]=a;
}
ll modexpo(ll a,ll b)
{
     int ans=1LL;
     while(b>0)
     {
          if(b&1)ans=(ans*a)%mod;
          a=(a*a)%mod;
          b>>=1;
     }
     return ans;
}
*/





vector<int> adj[100005];
int dist1[100005];
int dist2[100005];
void dfs(int node,int par,int dist1[]){
     for(int child:adj[node]){
          if(child==par)continue;
          dist1[child]=dist1[node]+1;
          dfs(child,node,dist1);
     }
}
int main(){
     ll n,d,a;
     cin>>n>>d>>a;
     vector<pi> vec(n);
     for(int i=0;i<n;i++)cin>>vec[i].fi>>vec[i].se;
     sort(vec.begin(),vec.end());
     ll r[n+3]={0};
     ll ans=0LL;
     for(int i=0;i<n;i++){
          vec[i].se-=r[i];
          if(vec[i].se>0){
               ll t=(vec[i].se+a-1)/a;
               ans+=t;
               r[i]+=t*a;
               int id1=upper_bound(vec.begin(),vec.end(),
               pi{vec[i].fi+2*d,1e9})-vec.begin();
               r[id1]-=t*a;

          }
          r[i+1]+=r[i];
          
     }
     cout<<ans;

}












































