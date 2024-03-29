#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL)
#define ll long long
#define fm_t  ll t;cin>>t;while(t--)
#define fr(i,a,b) for( ll i=a;i<b;i++)
#define fr1(i,n,a) for( ll i=n-1;i>=a;i--)
#define sz(x) (ll)(x).size()
#define all(v)  (v).begin(), (v).end()
#define Sort(x) sort(x.begin(),x.end())
#define ms(a) memset(a,0,sizeof(a))
#define endl '\n'
#define pb push_back
#define ff first
#define ss second
const ll Mod = 998244353;
#define mod 1000000007

#define inf 1e18
#define ld long double
#define pll pair<ll, ll> 
#define vi vector<int>
#define vl vector<ll> 
#define vvl vector< vector<ll> > 
#define vvi vector< vector<int> >
#define vlp vector< pair<ll, ll> >
#define vllp vector<pair<ll, ll>, ll >
#define pi pair<ll, ll>
#define ppi pair<pair<ll, ll>, ll>
#define ump unordered_map<ll,ll>
#define pri priority_queue< pair<ll,ll> , vector< pair<ll,ll> >, greater< pair<ll,ll> > >
void ingraph(vl graph[], ll m){ll x, y;fr(i,0,m){cin>>x>>y;x--, y--;graph[x].pb(y);graph[y].pb(x);}}

#define max3(a, b, c)   max(max(a, b), c)
#define min3(a, b, c)   min(min(a, b), c)

//setprecision(10)
//greater<int>()
ll gcd(ll a, ll b){if(b==0)return a;return gcd(b, a%b);}
ll lcm(ll a, ll b){return a*b/gcd(a, b);}


ll modmulti(ll a, ll b){
   return ((a%mod)*1ll*(b%mod))%mod;
}
ll modadd(ll a, ll b){
   ll asdfgh =  ((a%mod)+(b%mod)+mod+mod)%mod;
   asdfgh = (asdfgh+mod)%mod;
   return asdfgh;
}
ll modpower(ll a, ll n){
   if(n==0) return 1;
   if(n==1) return a%mod;
   ll b = modpower(a,n/2);
   b = modmulti(b,b);
   if(n%2==0) return b;
   return modmulti(a,b);
}
ll modinv(ll a){
    return modpower(a,mod-2);
} 


     
int main()
{
      
  fast;
  ll n,k;
  cin>>n>>k;
  ll a[n+5];
  for(ll i=1;i<=n;i++)
      cin>>a[i];
  ll dp[n+1][k+1];
  ms(dp);
  dp[0][0]=1;
  for(int i=1;i<=n;i++)
  {
    ll pref[k+1];
    ms(pref);
    pref[0]=dp[i-1][0]%mod;
    fr(j,1,k+1)
      pref[j]=(pref[j-1]+dp[i-1][j])%mod;
    fr(j,0,k+1)
    {
      if(j<=a[i])
        dp[i][j]=pref[j]%mod;
      else dp[i][j]=(pref[j]-pref[j-a[i]-1]+mod)%mod;
    }
  } 

  cout<<dp[n][k]<<endl;


    
//cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
return 0;
}