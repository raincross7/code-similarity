#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
#define db long double
#define all(a) a.begin(),a.end()
#define pb push_back
#define f(i,l,u) for(ll i=l;i<u;i++)
#define lb lower_bound
#define ub upper_bound
#define pii pair<ll,ll> 
ll fac[1000001];
void powe(ll p)
{
     fac[0] = 1; 

     
    for (ll i = 1; i <= 1000000; i++) 
        fac[i] = (fac[i - 1] *i) % p; 
  
}
 
 
        
      long long power( long long x, 
                         ll y, ll p) 
{ 
   long long res = 1; // Initialize result 
  
    x = x % p; 
    while (y > 0) { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res * x) % p; 
  
        // y must be even now 
        y = y >> 1; // y = y/2 
        x = (x * x) % p; 
    } 
    return res; 
} 
  
// Returns n^(-1) mod p 
 long long modInverse( long long n, ll p) 
{ 
    return power(n, p - 2, p); 
} 
  
// Returns nCr % p using Fermat's little 
// theorem. 
 long long nCrModPFermat( long long n, 
                                 ll r, ll p) 
{ 
    // Base case 
    if (r == 0) 
        return 1; 
  
       return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p; 
} 
 ll gcd(ll a,ll b)
 {
     if(b==0)
     return a;
     return gcd(b,a%b);
 }
  
int main() {
   ll t=1;

  // cin>>t;
  powe(1000000007);
  
   //ll vis[10]={0};
   while(t--)
   {
   
    ll n;
    cin>>n;
    ll ggg=360;
  cout<<ggg/gcd(n,ggg);
   }
  
   

      

return 0;    
}
