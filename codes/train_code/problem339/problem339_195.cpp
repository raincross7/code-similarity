#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
 
#define endl '\n'
#define loop(i, m, n) for (ll i = m; i < n; i++)
#define loope(i, m, n) for (ll i = m; i <= n; i++)
#define epool(i, m, n) for (ll i = m; i >= n; i--)
#define mod 1000000007
#define mod2 998244353
#define vi vector<ll>
#define fi first
#define se second
#define pb push_back
#define MP make_pair
#define empf emplace_front
#define empb emplace_back
#define ret(x) return cout << x,0;
#define all(v) v.begin(),v.end()
const ll INF=1e18;
const double PI=4*atan(1);

#define SpeedForce                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

ll mpow(ll base,ll exp);
void solve();
ll POW(ll base,ll exp);
ll gcd(ll a,ll b);

ll modInverse(ll n) { 
    return mpow(n, mod-2); 
}
 
ll nCr(ll n, ll r){ 
   if (r==0) 
      return 1; 
    ll fac[n+1]; 
    fac[0] = 1; 
    for (int i=1 ; i<=n; i++) 
        fac[i] = (fac[i-1]*i)%mod; 
    return ((fac[n]* modInverse(fac[r]) % mod * 
            modInverse(fac[n-r]) % mod)%mod)%mod; 
}

int32_t main(){
    SpeedForce
    ll i = 0,j = 0;

    int t;
    t=1;
    //cin >> t;
    while (t--){
        //cout << fixed << setprecision(10);
        solve();
    }
}



void solve(){
    ll r;
    cin >> r;
    cout << r*r << endl;

}

ll POW(ll base,ll exp){
    ll result = 1;
    while (exp > 0){
        if (exp & 1)
            result = ((ll)result * base);
        base = ((ll)base * base);
        exp >>= 1;
    }
    return result;
}

ll mpow(ll base, ll exp){
    base %= mod;
    ll result = 1;
    while (exp > 0){
        if (exp & 1)
            result = ((ll)result * base) % mod;
        base = ((ll)base * base) % mod;
        exp >>= 1;
    }
    return result;
}

ll gcd(ll a, ll b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}