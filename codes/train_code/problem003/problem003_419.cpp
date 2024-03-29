#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;            typedef vector<vi> vii;
typedef vector<ll> vl;             typedef vector<vl> vll;
typedef pair<int,int> pi;          typedef pair<pi,int> pii;
typedef pair<ll,ll> pl;            typedef pair<pl,ll> pll;
typedef pair<int,bool> pib;        typedef pair<ll,bool> plb;

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define in insert
#define er erase
//user-defined hash table for pairs --------------------------------------------------------------------------------------------------
struct hash_pair { 
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    { 
        auto hash1 = hash<T1>{}(p.first); 
        auto hash2 = hash<T2>{}(p.second); 
        return hash1 ^ hash2; 
    } 
}; 

//returns (a^n mod p)---------------------------------------------------------------------------------------------------------------
ll power(ll a,ll n,ll p)
{
	if(n == 0)
	{
		return 1;
	}
	else if(n%2 == 0)
	{
		ll ans = power(a,n/2,p);
		return (ans*ans)%p;
	}
	else 
	{
		ll ans = power(a,n-1,p);
		return (ans*a)%p;
	}
}

//returns (a^-1 mod p)(if p is prime)----------------------------------------------------------------------------------------------
ll inverse(ll a,ll p)
{
   return power(a,p-2,p);
}
//----------------------------------------------------------------------------------------------------------------------------------


void solve()
{
   int x;
   cin>>x;
   cout<<1+(1999-x)/200<<endl;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifdef PAVANSAI006
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    freopen("err.txt", "w", stderr);
#endif
    ll t = 1;
    //cin>>t;
    while(t--)
    {
    	solve();
    }
    
}