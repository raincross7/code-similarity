#include <bits/stdc++.h>
#include <queue>
#include <string.h> 
#include <stdint.h>
 
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
 
#define ll long long
#define ld long double
#define ull unsigned long long
#define ut uint64_t
 
#define pb push_back
#define ins insert
#define er erase
 
#define fi(i, b) for (int i=0;i<b;i++)
#define fll(i, b) for (ll i=0;i<b;i++)
#define fla(i,a,b) for (ll i=a;i<b;i++)
 
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vb vector<bool>
#define vst vector<string>
#define vpii vector<pii>
#define vpll vector<pll>
#define vv(n,m) vector<vector<ll> > vec( n , vector<ll> (m, 0))
 
 
#define all(v) v.begin(), v.end()
#define lb lower_bound
#define ub upper_bound
#define mxe max_element
#define mne min_element
 
#define srt(v) sort(all(v))
#define rsrt(v) sort(v.rbegin(), v.rend())
 
#define pii pair<int, int>
#define pll pair<ll, ll>
#define ff first
#define ss second
 
#define mii map<int, int>
#define mll map<ll, ll>
#define umii unordered_map<int, int>
#define umll unordered_map<ll, ll>
 
#define si set<int>
#define sll set<ll>
#define usi unordered_set<int>
#define usll unordered_set<ll>
#define spii set<pii>
#define spll set<pll>
 
#define pqi priority_queue<int>
#define pqll priority_queue<ll>
 
 #define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a)*1ll * (b)) / gcd(a, b)
 
#define nl "\n"
using namespace std;
 
 
ll md = 1000000007;
ll ma = 998244353;
 
ll pw(ll a, ll b)
{
    ll c = 1, m = a;
    while (b){
        if (b & 1)c = (c * m);
        m = (m * m);
        b /= 2;
    }
    return c;
}
 
ll pwmd(ll a, ll b){
    ll c = 1, m = a;
    while (b){
        if (b & 1)
            c = ((c * m)) % md;
        m = (m * m) % md;
        b /= 2;
    }
    return c;
}
 
ll modinv(ll n)
{
    return pwmd(n, md - 2);
}
ll min(ll a,ll b){
    if(a>=b)return b;
    return a;
}
bool prime(ll a){
    for(int i=2;i*i<=a;i++){
        if(a%i==0)return false;
    }return true;
}
int binomialCoeff(ll n, ll k)  
{  
    ll res = 1;  
    if ( k > n - k )  
        k = n - k;  
    for (ll i = 0; i < k; ++i)  
    {  
        res *= (n - i);  
        res /= (i + 1);  
    }  
  
    return res;  
}  

 
// Here we go...

void solve(){
      ll n,s;
      cin>>n>>s;
      if(n<=s)cout<<"unsafe\n";
      else cout<<"safe\n";
      
}


int main(){
    
    fast;
    ll t=1;
    //cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
    }
    
// KHATAM HO GAYA:)...





