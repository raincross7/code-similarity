#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
#define ll long long int
#define oo 1000000000000000000
#define forr(i,n) for(ll i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0);
#define all(x) x.begin(),x.end()
#define eb emplace_back
#define pb push_back
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
 
using namespace __gnu_pbds; 
using namespace std;

const ll MOD = 1e9 + 7;

ll valueOfIndex(ordered_set&s , ll i){ return *(s.find_by_order(i)); }
ll indexOfValue(ordered_set&s , ll x){ return s.order_of_key(x); }

ll add(ll a, ll b,ll p=MOD) { a%=p; b%=p; return (a+b + p)%p;}
ll mul(ll a, ll b,ll p=MOD) { a%=p; b%=p; return (a*b + p)%p;} // __int128

ll power(ll x,ll n,ll p=MOD){ if(x==0) return 0; if(n==0 || x==1) return 1LL;
    ll r = (power(x,n/2,p))%p; if(n&1) return mul(mul(r,r,p) , x,p); else return mul(r,r,p);
}



void __sol(){
    int n,k; cin >> n >> k;
    vector<int> v(n);
    forr(i,n) cin >> v[i];
    sort(all(v));
    ll sum = 0;
    forr(i,k) sum=sum+v[i];
    cout << sum;
}


int main(){
    fastio
    ll tc=1;// cin >> tc;
    while(tc--) __sol();
    return 0;
}
