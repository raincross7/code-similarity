#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
#define pb push_back
typedef pair<ll,ll> ipair;
#define F first
#define S second
 
/*
//functions from gfg
 
long long int power(long long int x,long long int y,long long  int p)
{
    long long int res = 1;     // Initialize result
 
    x = x % p;  // Update x if it is more than or 
                // equal to p
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            {//d=(long double)x/p;
            res = (res*x) % p;
            }
 
        // y must be even now
        y = y>>1; // y = y/2
        x=(x*x)%p;
        
    }
    return res%p;
}
 
long long int gcd(long long int a,long long int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}
 
long long int binomialCoeff(long long int n, ll k) 
{ 
    ll res = 1; 
  
    // Since C(n, k) = C(n, n-k) 
    if (k > n - k) 
        k = n - k; 
  
    // Calculate value of [n*(n-1)*---*(n-k+1)] / [k*(k-1)*---*1] 
    for (ll i = 0; i < k; ++i) 
    { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
  
    return res; 
} 
 

void sieve(int n, vector<ll> &primes) 
{ 
    vector<int> prime(n,1);
    ll p;
    for ( p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == 1) 
        { 
            
            for (int i=p*p; i<=n; i += p) 
                prime[i] = 0; 
        } 
    } 
  
    for(p=2;p<=n;p++)
    {
        if(prime[p])
        primes.pb(p);
    }
   
} 


void dfs(vector<ll> adj[] ,ll src,vector<ll> &vis)
{
    vis[src]=1;
    for(ll i=0;i<adj[src].size();i++)
    {
        if(vis[adj[src][i]]==0)
        dfs(adj,adj[src][i],vis)
    }
}
 
*/

int main() {
	ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    
	ll n,i,j,p,k,m,ans=0;
    cin>>n;
    vector<string> a(n);
    map<string,ll> mp;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sort(a[i].begin(),a[i].end());
        ans+=mp[a[i]];
        mp[a[i]]++;
    }
    cout<<ans<<endl;
    
    
    
    
    
    
    // for(i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    
	return 0;
}