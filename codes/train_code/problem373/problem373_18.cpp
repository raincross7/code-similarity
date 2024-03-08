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
const ll dy[8]={1,0,-1,0,1,1,-1,-1};
const ll dx[8]={0,-1,0,1,1,-1,1,-1};
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
int main(){
    ll n,k;cin >> n >>k;
    vpl v(n);
    rep(i,n)cin >> v[i].se >> v[i].fi;
    sort(all(v));rev(all(v));
    ll sum=0;
    set<ll> s;
    priority_queue<ll,vl,greater<ll>> que;
    rep(i,k){
        sum+=v[i].fi;
        if(s.count(v[i].se))que.push(v[i].fi);
        s.ins(v[i].se);
    }
    ll ans=sum+s.size()*s.size();
    //cout << ans <<endl;
    repl(i,k,n){
        if(s.count(v[i].se))continue;
        if(que.empty())continue;
        sum-=que.top();
        que.pop();
        sum+=v[i].fi;
        s.ins(v[i].se);
        ll t=s.size();t*=t;
        chmax(ans,sum+t);
    }
    cout << ans <<endl;
}