#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
typedef long double ld;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mod 1000000007
#define inf 1000000000000000000
#define bpc(x) __builtin_popcountll(x)
#define autoit(x,it) for(auto it = x.begin(); it != x.end(); it++)
#define rep(n) for(ll i = 0; i < n; i++)
#define repi(i,n) for(ll i = 0; i < n; i++)

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 

#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update> 

using namespace std;

int main()
{
  FAST/**/
   
   ll n;
   cin>>n;
   
   ll arr[n];
   rep(n)
        cin>>arr[i];
   
   ll ans = 0;
   ll pmax = 0;
   for(ll i=0;i<n;i++)
   {
       ll req = max(0ll,pmax-arr[i]);
       pmax = max(pmax,arr[i]+req);
       ans+=req;
   }
   
   cout<<ans;
   
   return 0;        
}  

  
          
   