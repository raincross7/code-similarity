/*
 _____ _             _              _           _ 
|_   _| |__   ___   / \   _ __  ___| |__  _   _| |
  | | | '_ \ / _ \ / _ \ | '_ \/ __| '_ \| | | | |
  | | | | | |  __// ___ \| | | \__ \ | | | |_| | |
  |_| |_| |_|\___/_/   \_\_| |_|___/_| |_|\__,_|_|                                                

*/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
#define ll          long long
#define pb          push_back
#define ppb         pop_back
#define	endl		'\n'
#define mii         map<ll,ll>
#define msi         map<string,ll>
#define mis         map<ll, string>
#define rep(i,a,b)    for(ll i=a;i<b;i++)
#define repr(i,a,b) for(ll i=b-1;i>=a;i--)
#define trav(a, x) 	for(auto& a : x)
#define pii         pair<ll,ll>
#define vi          vector<ll>
#define vii         vector<pair<ll, ll>>
#define vs          vector<string>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define max(a,b)	(a>b?a:b)
#define min(a,b)	(a<b?a:b)

/*	For Debugging	*/
#define DEBUG 		cerr<<"\n>>>I'm Here<<<\n"<<endl;
#define display(x) trav(a,x) cout<<a<<" ";cout<<endl;
#define what_is(x)  cerr << #x << " is " << x << endl;

std::mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update> 
#define TIME        cerr << "\nTime elapsed: " << setprecision(5) <<1000.0 * clock() / CLOCKS_PER_SEC << "ms\n";
#define DECIMAL(n)  cout << fixed ; cout << setprecision(n);
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace __gnu_pbds;
using namespace std;
#define PI 3.141592653589793
#define N  100005
ll t[N];
ll expo(ll base, ll exponent, ll mod) {								//return base^exponent modulo modulus
    ll ans = 1;
    while(exponent !=0 ) {
        if((exponent&1) == 1) {
            ans = ans*base ;
            ans = ans%mod;
        }
        base = base*base;
        base %= mod;
        exponent>>= 1;
    }
    return ans%mod;
}
void solve()
{
	ll n,k;
	cin>>k>>n;
	t[1]=1;
	ll sum=0;
	rep(j,2,n+1)
	{
		sum=0;
		for (int i = 1, la; i <= j; i = la + 1) {
			la = j / (j / i);
			//n / x yields the same value for i <= x <= la.
			sum=(sum+t[j/i]*(la-i+1))%hell;
		}
		t[j]=(expo(j,k,hell)-sum+hell)%hell;
	}
	// rep(i,1,n+1)
	// {
	// 	cout<<t[i]<<" ";
	// }
	// cout<<endl;
	ll ans=0;
	rep(i,1,n+1)
	{
		ans=(ans+i*t[n/i])%hell;
	}
	cout<<ans<<endl;
	return;
}
int main()
{
	FAST
	int TESTS=1;
//	cin>>TESTS;
	while(TESTS--)
	{
		solve();
	}
	TIME
	return 0;
}