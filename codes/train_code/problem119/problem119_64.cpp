#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
typedef long double ld;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mod 1000000007
#define pii pair<ll,ll>
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
mt19937_64 mt(chrono::steady_clock::now().time_since_epoch().count());

ll get(string a, string b)
{
    ll ans = 0;
    rep(a.length())
        if(a[i]!=b[i])
            ans++;
    return ans;        
}

int main()
{
  FAST/**/
   
   string s,t;
   cin>>s>>t;
   
   ll l1 = s.length();
   ll l2 = t.length();
   
   ll ans = l2;
   
   for(ll i=0;i+l2-1<l1;i++)
   {
       string s1 = s.substr(i,l2);
       ans = min(ans, get(s1,t));
   }
   
   cout<<ans;
   
   
   return 0;        
}  

  
          
   