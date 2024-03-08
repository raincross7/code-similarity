#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
#define endl "\n"
#define pb push_back
#define sq(a) (a)*(a)
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr<<#x<<'='<<(x)<<endl;
#define debugv(v) cerr<<#v<<" : ";for (auto x:v) cerr<<x<<' ';cerr<<endl;
#define MOD 1000000007
#define PI 3.141592653589793238
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll exp(ll x,ll n,ll mod)
{
    ll result=1;
    while(n)
    {
        if(n & 1)
            result=(result * x)%mod;
        x=(x*x)%mod;
        n>>=1;
    }
    return result;
}

int32_t main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	IOS
	
	ll n;
	cin>>n ;
	ll ans=0;
	for(ll i=0;i<n;i++)
		ans+=(i+1)*(n-i);

	for(ll i=0;i<n-1;i++)
	{
		ll x ,y;
		cin>>x>>y;
		x--;y--;
		if(x>y)
			swap(x,y);
		ans-=((x+1)*(n-y));
	}

	cout<<ans<<endl;
 
	
	return 0;
}