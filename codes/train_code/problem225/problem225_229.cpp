#include<bits/stdc++.h>
//ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//clock_t start=clock();clock_t end=clock();cout<<(double)(end-start)/CLOCKS_PER_SEC<<endl;
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;
typedef pair<int,int> pii;
typedef pair<pii,int> ppii;
typedef pair<int,pii> pipi;
typedef pair<ll,ll> pll;
typedef pair<pll,ll> ppll;
typedef pair<ll,pll> plpl;
typedef pair<pii,pii> P;
typedef tuple<ll,ll,ll> tl;
typedef pair<double,double> pdd;
typedef vector<vector<ll>> mat;
ll mod=1000000007;
ll mod2=998244353;
ll mod3=1000003;
ll mod4=998244853;
ll mod5=1000000009;
ll inf=1LL<<60;
double pi=3.141592653589793238462643383279L;
double eps=1e-14;
#define rep(i,m,n) for(ll i=m;i<n;i++)
#define rrep(i,n,m) for(ll i=n;i>=m;i--)
#define srep(itr,st) for(auto itr=st.begin();itr!=st.end();itr++)
#define mrep(itr,mp) for(auto itr=mp.begin();itr!=mp.end();itr++)
#define Max(a,b) a=max(a,b)
#define Min(a,b) a=min(a,b)
int dh[4]={1,-1,0,0};
int dw[4]={0,0,1,-1};
int ddh[8]={-1,-1,-1,0,0,1,1,1};
int ddw[8]={-1,0,1,-1,1,-1,0,1};
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
#define umh unordered_map<ll,ll,custom_hash>
ll gcd(ll a,ll b){
    if(a<b)swap(a,b);
    if(b==0)return a;
    if(a%b==0)return b;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b){
    ll c=gcd(a,b);
    return a*b/c;
}
ll Pow(ll n,ll k){
    ll ret=1;
    ll now=n;
    while(k>0){
        if(k&1)ret*=now;
        now*=now;
        k/=2;
    }
    return ret;
}
ll beki(ll n,ll k,ll md){
  ll ret=1;
  ll now=n;
    now%=md;
  while(k>0){
    if(k%2==1){
      ret*=now;
      ret%=md;
    }
    now*=now;
    now%=md;
    k/=2;
  }
  return ret;
}
ll gyaku(ll n,ll md){
  return beki(n,md-2,md);
}
ll popcount(ll n){
    ll ret=0;
    ll u=n;
    while(u>0){
        ret+=u%2;
        u/=2;
        
    }
    return ret;
}
struct UF{
private:
    vector<int> par,len,you;
public:
    UF(int n){
        rep(i,0,n){
            par.push_back(i);
            len.push_back(0);
            you.push_back(1);
        }
    }
    int root(int n){
        if(par[n]==n)return n;
        else return par[n]=root(par[n]);
    }
    void unit(int a,int b){
        a=root(a);
        b=root(b);
        if(a==b)return;
        if(len[a]<len[b]){
            par[a]=b;
            you[b]+=you[a];
        }
        else{
            par[b]=a;
            you[a]+=you[b];
            if(len[a]==len[b])len[a]++;
        }
    }
    ll yo(int a){
        a=root(a);
        return you[a];
    }
};
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;cin>>n;
    ll a[n];
    rep(i,0,n)cin>>a[i];
    ll u=100000000000000000,d=-1;
    ll mi=inf;
    while(u-d>1){
        ll mid=(u+d)/2;
        ll now=mid*n;
        ll r=0;
        rep(i,now,now+n){
            ll b[n];
            ll sum=0;
            rep(j,0,n){
                b[j]=a[j]+i;
                sum+=b[j]/(n+1);
                if(b[j]%(n+1)==n)sum++;
            }
            if(sum<=i){
                r=1;
                Min(mi,i);
            }
        }
        if(r)u=mid;
        else d=mid;
    }
    cout<<mi<<endl;
}
