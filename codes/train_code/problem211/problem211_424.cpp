#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<pdd> vdd;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define mem(a,b) memset(a, b, sizeof(a) )
#define all(x) (x).begin(),(x).end()
#define INF 1000000000000
#define MOD 1000000007
#define PB push_back
#define MP make_pair
#define F first
#define S second

inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main(){
    int n;cin>>n;
    vl a(n),c;
    rep(i,n)cin>>a[i];
    ll r=1e18,l=0;
    while(r-l>1){
        ll m=(r+l)/2,b=m;
        for(int i=0;i<n;++i){
            b=b-b%a[i];
            if(b==0)break;
        }
        if(b<2){
            l=m;
        }
        else{
            r=m;
        }
    }
    ll R=1e18,L=0;
    while(R-L>1){
        ll m=(R+L)/2,b=m;
        for(int i=0;i<n;++i){
            b=b-b%a[i];
            if(b==0)break;
        }
        if(b<=2){
            L=m;
        }
        else{
            R=m;
        }
    }
    ll d=r,e=L;
    rep(i,n){
        d=d-d%a[i];
        e=e-e%a[i];
    }
    if(d==2&&e==2){
        cout<<r<<" "<<L<<endl;
    }
    else cout<<-1<<endl;
}