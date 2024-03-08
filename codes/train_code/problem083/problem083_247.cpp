#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair< ll, ll > Pi;
#define rep(i,n) for(int i=0;i<(n);i++)
#define rep2(i,n) for(int i=1;i<=(n);i++)
#define rep3(i,i0,n) for(int i=i0;i<(n);i++)
#define pb push_back
#define mod 1000000007
const ll INF = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
ll gcd(ll a, ll b) {return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) {return a/gcd(a,b)*b;}
#define all(x) x.begin(), x.end()
#define mp make_pair
bool compare(Pi a, Pi b) {
    if(a.first != b.first){
        return a.first < b.first;
        
    }else{
        return a.second < b.second;
    }
}


bool In_map(ll y,ll x,ll h,ll w){
    if(y<0 || x<0 || y>=h || x>=w){
        return 0;
    }else{
        return 1;
    }
}
const vector<ll> dx{1,0,-1,0};
const vector<ll> dy{0,1,0,-1};


int main() {
    ll N,M,R;
    cin >>N>>M>>R;
    vector<vector<ll>>dp(N,vector<ll>(N,INF));
    vector<ll>r(R);
    rep(i,R)cin>>r[i];
    rep(i,M){
        ll a,b,c;
        cin>>a>>b>>c;
        a--,b--;
        dp[a][b]=c;
        dp[b][a]=c;
    }
    rep(i,N){
        dp[i][i]=0;
    }
    rep(k,N){
        rep(i,N){
            rep(j,N){
                chmin(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }
    /*rep(i,N){
        rep(j,N){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    vector<ll> a(R);
    rep(i,R){
        a[i] = i;
    }
    ll ans=INF;
    do {
    ll now=0; 
    rep(i,R-1) {
        now+=dp[r[a[i]]-1][r[a[i+1]]-1];
        
    }
    //cout<<now<<endl;
    chmin(ans,now);
    }while(next_permutation(a.begin(),a.end()));

    cout << ans << endl;


    return 0;
    

}