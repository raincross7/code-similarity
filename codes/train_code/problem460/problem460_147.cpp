#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<n;i++)
#define repl(i,l,r) for(ll i=(l);i<(r);i++)
#define per(i,n) for(ll i=n-1;i>=0;i--)
#define lper(i,r,l) for(ll i=r-1;i>=l;i--)
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ins insert
#define all(x) (x).begin(),(x).end()
#define CST(x) cout<<fixed<<setprecision(x)
using ll=long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using pl=pair<ll,ll>;
using vpl=vector<pl>;
const ll MOD=1000000007;
const ll MOD9=998244353;
const int inf=1e9+10;
const ll INF=4e18;
const ll dy[4]={1,0,-1,0};
const ll dx[4]={0,-1,0,1};
ll modfac(ll a){
    ll ans=1;
    while(a>1){
        ans*=a;
        ans%=1000000007;
        a--;
    }
    return ans;
}
ll modinv(ll a,ll m) {
    ll b = m, u = 1, v = 0;
    while (b) {
        ll t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m; 
    if (u < 0) u += m;
    return u;
}
struct UnionFind {
    vector<int> par;
    
    UnionFind(int n) : par(n, -1) {}

    int root(int x) {
        if (par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }
    
    bool same(int x, int y) {
        return root(x) == root(y);
    }
    
    bool merge(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x, y);
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    
    int size(int x) {
        return -par[root(x)];
    }
};
ll modpow(ll a, ll n, ll mod) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}
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
    ll w,h;cin >> w >>h;
    if(w%3==0||h%3==0){
        cout << 0 <<endl;
        return 0;
    }
    if(w*h==4){
        cout << 1 <<endl;
        return 0;
    }
    ll ans=min(h,w);
    rep(i,w){
        ll a=i*h;
        ll b=(w-i)*(h/2);
        ll c=h*w-a-b;
        ll x=min(a,b);
        x=min(x,c);
        ll y=max(a,b);
        y=max(y,c);
        ans=min(ans,y-x);
    }
    swap(h,w);
        rep(i,w){
        ll a=i*h;
        ll b=(w-i)*(h/2);
        ll c=h*w-a-b;
        ll x=min(a,b);
        x=min(x,c);
        ll y=max(a,b);
        y=max(y,c);
        ans=min(ans,y-x);
    }
    cout << ans <<endl;
}
