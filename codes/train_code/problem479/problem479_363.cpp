#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define pb push_back
#define mp make_pair
#define ff first
#define ar array
#define ss second
#define ll long long int
#define mem(x) memset(x,0,sizeof(x))
#define setbits(x)  __builtin_popcount(x)
#define ull unsigned long long int
#define all(c) (c).begin(),(c).end()
#define debug(x) cout<<#x<<" :: "<<x<<endl;
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<endl;
#define printclock cerr<<"Time : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n";
#define db double
#define endl "\n"
#define  fbo(x) find_by_order(x)
#define  ook(x) order_of_key(x)
 
using namespace __gnu_pbds;
using namespace std;
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair<ll,ll > iil;
typedef pair<ll,int> li;
typedef pair<int,int> ii;
typedef tree<int, null_type, less<int>, rb_tree_tag,
            tree_order_statistics_node_update>
    os1;
typedef tree<int, null_type, greater<int>, rb_tree_tag,
            tree_order_statistics_node_update>
    os2;

inline void fast()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
const ll pi=31;
const ll MOD[2] = {1187278649, 1149736019};//for double hashing
const ll mod=(ll)(1e9)+7;
ll pmod(ll x,ll n){
  ll r=1;
  while(n>0)
  {
    if(n&1LL)
      r=(r*x)%mod;
    x=(x*x)%mod;
    n=n/2;
    n%=mod;
  }
  return r;
}
ll pMod(ll x,ll n,ll mod)
{ ll r=1;
  while(n>0)
  {
    if(n&1LL)
      r=(r*x)%mod;
    x=(x*x)%mod;
    n=n/2;
    n%=mod;
  }
  return r;
 
}
 
//think recursively also;
const int mxn=1000;
char a[mxn+1][mxn+1];
int dp[mxn+1][mxn+1];
int h,w;
void solve()
{ 
  cin>>h>>w;
  for(int i=1;i<=h;i++)
  {
    for(int j=1;j<=w;j++)
    {
      cin>>a[i][j];
    }
  }

  for(int i=1;i<=h;i++)
  {
    for(int j=1;j<=w;j++)
    {
       if(i==1 && j==1)
        {dp[1][1]=1;
          continue;
        }
      if(a[i][j]=='#')
        continue;
      dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
    }
  }
  cout<<dp[h][w]<<endl;
  
}
int main()
{
  fast();
   // int t;
   // cin>>t;
   // for(int casee=1;casee<=t;casee++)
  {//cout<<"Case #"<<casee<<": ";
    solve();
  }
 
 
 
}