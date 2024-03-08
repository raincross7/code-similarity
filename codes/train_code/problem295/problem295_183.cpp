#include <bits/stdc++.h>
using namespace std;
#define ll long long int
//#define f(i,a,n) for(ll i=a;i<n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
ll isPrime(int n) 
{ 
	// Corner cases 
	if (n <= 1) 
		return 1; 
	if (n <= 3) 
		return 2; 

	// This is checked so that we can skip 
	// middle five numbers in below loop 
	if (n % 2 == 0 || n % 3 == 0) 
		return 1; 

	for (int i = 5; i * i <= n; i = i + 6) 
		if (n % i == 0 || n % (i + 2) == 0) 
			return 1; 

	return 2; 
} 

ll fact(ll n){ll res = 1;for (ll i = 2; i <= n; i++)res = res * i,res%=1000000007; 
    return res; } 
 
 int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
  
 
ll findlcm(ll arr[], int n) 
{ 
   
    ll ans = arr[0]; 
  
    
    for (int i = 1; i < n; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
  
    return ans; 
} 
 
 
int main() 
{
    fast;
    ll t=1;
    //cin>>t;
    while(t--)
    {
       ll n,d,b=0,sum=0;
       cin>>n>>d;
       ll A[n][d];
       for(ll i=0;i<n;i++)
       {
           for(ll j=0;j<d;j++)
           {
               cin>>A[i][j];
           }
       }
       for(ll i=0;i<n-1;i++)
       {
           for(ll j=i+1;j<n;j++)
           {
               sum=0;
               for(ll k=0;k<d;k++)
               {
                   sum=sum+(A[i][k]-A[j][k])*(A[i][k]-A[j][k]);
               }
               if(floor(sqrt(sum)) == ceil(sqrt(sum)))
               {
                   b++;
               }
           }
       }
       cout<<b;
    } 
    return 0;
}
