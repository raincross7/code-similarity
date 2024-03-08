#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <iomanip>
#include <utility>
#include <tuple>
#include <functional>
#include <bitset>
#include <cassert>
#include <complex>
#include <stdio.h>
#include <time.h>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
# define ll int64_t
# define str string
# define rep(i,n) for(ll i=0;i<n;i++)
# define rrep(i,n) for(ll i=1;i<=n;i++)
# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size())
# define pb push_back
# define mod 1000000007
# define PI 3.141592653589793
# define vec vector
#define dump(x) cerr<<#x<<"="<<x<<endl
using namespace std;



#define INF 2000000000
#define MAX_V 10



bool compare_by_b(pair<string,ll> a,pair<string,ll> b){
    if(a.second != b.second) return a.second<b.second;
    else return a.first<b.first;
}

bool my_compare(pair<ll,ll> a,pair<ll,ll> b){
    if(a.first != b.first) return a.first<b.first;
    if(a.second != b.second) return a.second>b.second;
    else return true;
}

ll modpow(ll a,ll n,ll mod1) {
    ll res=1;
    while(n>0){
        if(n&1) res=res*a%mod1;
        a = a*a%mod1;
        n >>= 1;
    }
    return res;
}

ll factorial(ll n){
    ll x=1;
    rrep(i,n) (x*=i)%=mod;
    return x;
}

ll gcd(ll a,ll b) { return b ? gcd(b, a%b) : a; }

ll lcm(ll a,ll b){
   return a/gcd(a,b)*b;
}
const ll MAX = 5100000;
const ll MOD = 1000000007;
 
ll fac[MAX], finv[MAX], inv[MAX];
 
// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (ll i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
ll COM(ll n, ll k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

using graph = vector<vector<ll>>;
pair<pair<ll,ll>,ll> p[100010];

vec<ll> dp;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    
    if(s[0]=='0') dp.pb(0);
    ll count=1;
    rrep(i,s.size()-1){
        if(s[i]==s[i-1]) count++;
        else{
            dp.pb(count);
            count=1;
        }
    }
    dp.pb(count);
    if(s.back()=='0') dp.pb(0);
    
    vec<ll> sum(dp.size()+1,0);
    rep(i,dp.size()) sum[i+1]=sum[i]+dp[i];
    
    ll res = 0;
    for (ll left=0; left<sum.size(); left+=2) {
        ll right = left + 2*k+1;
        if (right >= sum.size()) right=(ll)sum.size()-1;
        res = max(res, sum[right]-sum[left]);
    }
    cout<<res<<endl;
    return 0;
}