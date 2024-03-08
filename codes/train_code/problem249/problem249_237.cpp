#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define vlli vector<ll>
#define vi vector<int>
#define vs vector<string>
#define vplli vector< pair< ll,ll> >
#define plli pair< ll,ll >
#define vps vector< pair< string, string> >
#define vpi vector< pair< int, int> >
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define forn(i,a,n) for(ll i=a;i<n;i++)
#define forr(i,n,a) for(ll i=n-1;i>=a;i--)
#define scan(arr,a,n) for(int i=(a);i<(n);i++)cin>>(arr)[i];
#define print(arr,a,n) for(int i=(a);i<(n);i++)cout<<(arr)[i]<<' ';

const ll inf = 1e18;

ll add(ll x, ll y) {ll res = x + y; return (res >= mod ? res - mod : res);}
ll mul(ll x, ll y) {ll res = x * y; return (res >= mod ? res % mod : res);}
ll sub(ll x, ll y) {ll res = x - y; return (res < 0 ? res + mod : res);}
ll power(ll x, ll y) {ll res = 1; x %= mod; while (y) {if (y & 1)res = mul(res, x); y >>= 1; x = mul(x, x);} return res;}
ll mod_inv(ll x) {return power(x, mod - 2);}

int main(){
	fast;
	ll n;
	cin>>n;
	ll a[n];
	scan(a, 0, n);
	sort(a, a+n);
	ld ans = a[0];
	forn(i, 1, n){
		ans+=a[i];
		ans/=2;
	}
	cout<<ans<<endl;
}