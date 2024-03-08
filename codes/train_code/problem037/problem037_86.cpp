#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define pp pair<pair<ll, ll>,pair<ll, ll>>
#define pll pair<ll,ll>
#define pdd pair<double,double>
#define vii vector<int>
#define vll vector<ll>
#define mat vector<vector<ll>>
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define eb emplace_back
#define fi first
#define sc second
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep2(i,a,b) for(ll i=a;i<b;i++)
#define repr(i,n) for(ll i=n-1;i>=0;i--)
#define all(x) x.begin(),x.end()
#define sz(x) (ll) (x).size()
#define pq priority_queue<ll>
#define pqg priority_queue<ll,vector<ll>,greater<ll>>
#define LB(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define UB(v,x) (upper_bound(v.begin(),v.end(),x)-v.begin())
#define ERASE(v) sort(v.begin(),v.end());v.erase(unique(v.begin(),v.end()),v.end())
#define int ll
// #define ll int
using namespace std;
const ll INF = (1 << 30 ) - 1;
const ll LLINF = (1LL << 60LL);
const ll MOD = 1000000007;
const ll mod = 998244353;
const ll MAX = 1100000;
const double pi = acos(-1);
const double eps = 1e-10;
ll dx[8] ={1,0,-1,0,1,-1,1,-1};
ll dy[8] ={0,1,0,-1,1,-1,-1,1};
 
template<class T> 
inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> 
inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }




void solve(){
    ll h,n,a[1010],b[1010];
    cin>>h>>n;
    rep(i,n) cin>>a[i]>>b[i];
    ll dp[1100][10100];
    rep(i,n+2)rep(j,h+2) dp[i][j]=LLINF;
    rep(i,n+1) dp[i][0]=0;
    rep(i,n){
        rep(j,h+1){
            dp[i+1][j]=min(dp[i+1][j],dp[i][j]);
            if(j>=a[i]) dp[i+1][j]=min(dp[i+1][j],dp[i+1][j-a[i]]+b[i]);
        }
    }
    ll ans=dp[n][h];
    rep(j,h){
        rep(i,n){
            if(j+a[i]>=h) chmin(ans,dp[n][j]+b[i]);
        }
    }
    cout<<ans<<endl;
    // cout<<"--"<<endl;
    // cout<<"     ";
    // rep(j,h+1) cout<<j<<" ";
    // cout<<endl;
    // rep(i,n+1){
    //     cout<<"i: "<<i<<" ";
    //     rep(j,h+1){
    //         if(dp[i][j]==LLINF) cout<<"x ";
    //         else cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    

}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    
     

    solve(); 


    return 0;
}
