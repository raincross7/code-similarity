#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
#include<string>
#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
 
template <class T> using V = vector<T>;
 
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
 
const long long INF = 1LL << 60;
 
using ll = long long;
using db = double;
using st = string;
using ch = char;
using bl = bool;
using vll = V<ll>;
using vpll =V<pair<ll,ll>>;
using vst = V<st>;
using vdb = V<db>;
using vch = V<ch>;
using vbl = V<bl>;

 
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define rFOR(i,a,b) for(ll i=(a);i>=(b);i--)
#define oFOR(i,a,b) for(ll i=(a);i<(b);i+=2)
#define bgn begin()
#define en end()
#define SORT(a) sort((a).bgn,(a).en)
#define REV(a) reverse((a).bgn,(a).en)
#define M(a,b) max(a,b)
#define rM(a,b) min(a,b)
#define fi first
#define se second
#define sz size()
#define gcd(a,b) __gcd(a,b)
#define co(a) cout<<a<<endl;
#define ci(a) cin>>a;
  
 

ll sum(ll n) {
ll m=0;
  while(n){
    m+=n%10;
    n/=10;
  }
  return m;
}
 
 
const int MAX = 510000;
const int MOD = 1000000007;
 
long long fac[MAX], finv[MAX], inv[MAX];
 
void Comuse() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}
 
 
#define comuse Comuse()
 
ll combi(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}
 
 
 
 
ll lcm(ll a,ll b){
  ll n;
  n=a/gcd(a,b)*b;
  return n;
}




 
/****************************************\
| Thank you for viewing my code:)        |
| Written by RedSpica a.k.a. RanseMirage |
| Twitter:@asakaakasaka                  | 
\****************************************/
 
 
signed main() {
  ll h,w;
    cin>>h>>w;
  ll ans=10000000000;

  //縦に3つ
  for(int i=1;i<h-1;i++){
    ll a=i*w;
    ll b=(h-i)/2*w;
    ll c=(h-i-(h-i)/2)*w;
    ll now=max({a,b,c})-min({a,b,c});
    chmin(ans,now);
  }
  //横に3つ
  for(int i=1;i<w-1;i++){
    ll a=i*h;
    ll b=(w-i)/2*h;
    ll c=(w-i-(w-i)/2)*h;
    ll now=max({a,b,c})-min({a,b,c});
    chmin(ans,now);
  }

  //T字
  for(int i=1;i<h;i++){
    ll a=i*w;
    ll b=(w/2)*(h-i);
    ll c=(w-w/2)*(h-i); 
    ll now=max({a,b,c})-min({a,b,c});
    chmin(ans,now);
  }

  //ト
  for(int i=1;i<w;i++){
    ll a=i*h;
    ll b=(h/2)*(w-i);
    ll c=(h-h/2)*(w-i);
    ll now=max({a,b,c})-min({a,b,c});
    chmin(ans,now);
  }
  cout<<ans<<endl;
}