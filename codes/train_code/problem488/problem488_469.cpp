#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll power(ll x, ll y, ll p) 
{ 
    ll res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or 
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p; 
    } 
    return res; 
} 
  
// Returns n^(-1) mod p 
ll modInverse(ll n, ll p) 
{ 
    return power(n, p-2, p); 
} 
  
// Returns nCr % p using Fermat's little 
// theorem. 
ll nCrModPFermat(ll n, ll r, ll p) 
{ 
   // Base case 
   if (r==0) 
      return 1; 
  
    // Fill factorial array so that we 
    // can find all factorial of r, n 
    // and n-r 
    ll fac[n+1]; 
    fac[0] = 1; 
    for (ll i=1 ; i<=n; i++) 
        fac[i] = fac[i-1]*i%p; 
  
    return (fac[n]* modInverse(fac[r], p) % p * 
            modInverse(fac[n-r], p) % p) % p; 
}

void solve()
{
	ll mod = 1e9 + 7;
	ll n,k;
	cin>>n>>k;
	// ll dp[n+2] = {};
	// dp[0] = 1;
	ll ans = 0;
	ll c = n+1-k;
	for (ll i = k; i < n+2; ++i)
	{
		ll l = i*(i-1)/2;
		ll r = (n+1)*(n)/2 - (n+1-i)*(n-i)/2;
		ans = (ans + r-l+1)%mod;
	}
	cout<<ans<<endl;
}

int main()
{
	ll t = 1;
	// cin>>t;
	while(t--)
	{
		solve();
	}
}