//CODING ME ACCHHA KARNEKA HAI TERKO TO BAS PRACTICE KARTE REH
#include <bits/stdc++.h>
#define pragma
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define aisort sort(a,a+n)
#define adsort sort(a,a+n,greater<ll>())
#define PI 2 * acos(0)

typedef pair<ll, ll> pii;
typedef pair<ll, pii> piii;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<piii> viii;
typedef set<ll> Set;

const ll maxs = 1e5+3;
const ll maxs1 = 1e3+4;
const ll mod = 1e9 + 7;

//MODULO OPEARTIONS
    inline ll add(ll a, ll b) { return (mod + a + b) % mod; }
    inline ll sub(ll a, ll b) { return (a - b + mod) % mod; }
    inline ll mul(ll a, ll b) { return (1ll * a * b) % mod; }

//POWER
    ll fastpow(ll x,ll y)
    {ll res = 1;x = x % mod;while (y > 0){ if (y & 1)res = (res * x) % mod; y = y >> 1 ; x = (x * x) % mod; } return res;}

//MODULAR INVERSE
    ll inv(ll x){ return fastpow(x , mod - 2);}
    
//PRIME
    bool isPrime(ll n) { if (n <= 1)  return false; if (n <= 3)  return true;if (n%2 == 0 || n%3 == 0) return false; for (int i=5; i*i<=n; i=i+6) if (n%i == 0 || n%(i+2) == 0) return false; return true; } 




int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   ll i,k,a,b,cnt=0,res=1;
   cin>>k>>a>>b;
   ll flg=0;
   while(res<=b)
   {
       cnt++;
       res=k*cnt;
       if(res>=a&&res<=b)
       flg=1;
   }
   if(flg==1)
   cout<<"OK";
   else
   cout<<"NG";
}

