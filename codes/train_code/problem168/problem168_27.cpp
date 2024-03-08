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
    
    ll n,z,w;cin>>n>>z>>w;
    if(n==1){
        ll x;cin>>x;
        cout<<abs(x-w)<<endl;
        return 0;
    }
    vector<ll> a(n);
    rep(i,n){
        cin>>a[i];
    }   
    cout<<(max(abs(a[n-1]-a[n-2]),abs(w-a[n-1])))<<endl;
    return 0;
}
