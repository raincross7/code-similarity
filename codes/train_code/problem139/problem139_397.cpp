#include<bits/stdc++.h>
using namespace std;
#define ALL(x) x.begin(),x.end()
#define rep(i,n) for(int i=0;i<n;i++)
#define debug(v) cout<<#v<<":";for(auto x:v){cout<<x<<' ';}cout<<endl; 
#define INF 1000000000
#define mod 1000000007
typedef long long ll;
const ll LINF = 1001002003004005006ll;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;cin>>n;
    ll B=(1<<n);
    vector<ll> a(B);
    rep(i,B){
        cin>>a[i];
    }
    pair<ll,ll> dp[B][n+1];
    rep(i,B){
        dp[i][0]=make_pair(a[i],0);
    }

    //dp[i][j]
    rep(i,B){
        rep(j,n){  
            if((i>>j)&1){
                vector<ll> t;
                t.push_back(dp[i][j].first);
                t.push_back(dp[i][j].second);
                t.push_back(dp[i& ~(1<<j)][j].first);
                t.push_back(dp[i& ~(1<<j)][j].second);
                sort(ALL(t));reverse(ALL(t));
                dp[i][j+1].first =t[0];
                dp[i][j+1].second=t[1];
            }else{
                dp[i][j+1]=dp[i][j];
            }
        }
    }
    ll ans=0;
    for(int i=1;i<B;i++){
        chmax(ans,dp[i][n].first+dp[i][n].second);
        cout<<ans<<endl;
    }
    return 0;
}
