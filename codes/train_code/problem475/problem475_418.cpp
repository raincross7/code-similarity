#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<n;i++)
#define repl(i,l,r) for(ll i=(l);i<(r);i++)
#define per(i,n) for(ll i=n-1;i>=0;i--)
#define perl(i,r,l) for(ll i=r-1;i>=l;i--)
#define fi first
#define se second
#define pb push_back
#define ins insert
#define pqueue(x) priority_queue<x,vector<x>,greater<x>>
#define all(x) (x).begin(),(x).end()
#define CST(x) cout<<fixed<<setprecision(x)
#define vtpl(x,y,z) vector<tuple<x,y,z>>
#define rev(x) reverse(x);
using ll=long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using pl=pair<ll,ll>;
using vpl=vector<pl>;
using vvpl=vector<vpl>;
const ll MOD=1000000007;
const ll MOD9=998244353;
const int inf=1e9+10;
const ll INF=4e18;
const ll dy[9]={1,0,-1,0,1,1,-1,-1,0};
const ll dx[9]={0,-1,0,1,1,-1,1,-1,0};
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
using ld=long double;
const ld eps=1e-10;
int main(){
    ll n;cin >> n;
    vector<pair<ld,ld>> e(n);
    rep(i,n){
        cin >> e[i].fi >> e[i].se;
    }
    vector<pair<ld,int>> rad(n);
    rep(i,n){
        rad[i].fi=atan2(e[i].se,e[i].fi);
        rad[i].se=i;
    }
    sort(all(rad));
    rep(i,n)rad.pb(rad[i]);
    ld ans=0;
    rep(i,n){
        repl(j,i,i+n){
            ld x=0,y=0;
            for(int k=i;k<=j;k++){
                x+=e[rad[k].se].fi;
                y+=e[rad[k].se].se;
            }
            chmax(ans,sqrt(x*x+y*y));
        }
    }
    CST(12);
    cout << ans <<endl;
} 