/*
"اله السماء يعطينا النجاح ونحن عبيده نقوم ونبني" 
"تكفيك نعمتي لان قوتي في الضعف تكمل"
created by shady rafet 
my face book : https://www.facebook.com/profile.php?id=100019579575853
never give up
one day i will do it ':(

*/
#include <bits/stdc++.h>
using namespace std;
#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ul;
const ll oo = 1e18;
const ll N = 1e6;
const ll mod = 1e9 + 7;
#define point complex<double>
const double pi = acos(-1);
double dot(point a, point b)
{
    return (conj(a) * b).real();
}
double cross(point a, point b)
{
    return (conj(a) * b).imag();
}
ll inv[N],fact[N];
ll fb(ll x, ll y)
{
    if(y == 0)
    return 1;
   ll ans = fb(x,y/2);
   ans = (ans * ans)%mod;
   if(y % 2 !=0)
   {
       ans = (ans*(x%mod))%mod;
   }
   return ans ;
}
void pre(ll n)
{
    fact[0] = 1;
    inv[0] = 1;
    for ( int i = 1;i<=n;i++)
    {
        fact[i] = (i * fact[i-1])% mod;
        inv[i] = fb(fact[i], mod-2);
    }
}
ll ncr (ll n , ll r)
{
      return (((fact[n] * inv[n - r]) % mod) * inv[r]) % mod;
}
ll npr (ll n,ll r)
{
    return (fact[n] * inv[n - r]) % mod;
}
vector<int> adj[N];
bool visted[N];
int main()
{
   int cnt = 0;
   string a,b;
   cin>>a>>b;
   for(int i = 0;i<a.size();i++)
   {
       if(a[i]!=b[i])
       cnt++;
   }
   cout<<cnt;
    return 0;
}