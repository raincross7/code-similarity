//----------BHAVIK DIWANI(PICT_COMP)---------------
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define test ll t; cin>>t; while(t--)
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define ll long long
#define int long long
#define ull unsigned long long
#define MAX 1000005
#define pb push_back
#define mkp make_pair
#define vi vector<int>
#define pii pair<int,int>
#define endl '\n'
#define vs vector<string>
#define mii map<int,int>
#define msi map<string,int>
#define vpii vector< pair<int, int > >
#define vpsi vector< pair< string ,int > >
#define forci(p,q) for(int i=p;i<q;i++)
ll gcd(ll a,ll b){ if(b==0) return a;    return gcd(b,a%b);}
ll lcm(ll a,ll b) { return (a/gcd(a,b)*b);}
ull power(ull a, ull b) {a %= mod;  ull res = 1;  while (b > 0) { if (b & 1) res = res * a % mod;  a = a * a % mod;  b >>= 1; }  return res%mod; }
ll modmul(ll x, ll y){return (x*y)%mod;}
ll modadd(ll x, ll y){return (x+y)%mod;}
ll modsub(ll x, ll y){return (x-y+mod)%mod;}
ll fact[1000007]={0};
void facto() {fact[0]=1;fact[1]=1;for(int i=2;i<1000007;i++)fact[i]=(fact[i-1]*i)%mod;}
ll ncr(ll n,ll r) {ll res=1; res=fact[n]; res=(res*(power(fact[r],mod-2)))%mod; res=(res*(power(fact[n-r],mod-2)))%mod; return res;}
ll npr(ll n,ll r) {ll res=1; res=fact[n]; res=(res*(power(fact[n-r],mod-2)))%mod; return res;}
inline long long toint(const std::string &s) {std::stringstream ss; ss << s; long long x; ss >> x; return x;}
inline std::string tostring(long long number) {std::stringstream ss; ss << number; return ss.str();}
inline std::string tobin(long long x) {return std::bitset<63>(x).to_string();}
/*bool prime[MAX];
ull sieve(){memset(prime,true,sizeof(prime));for(ull p=2;p*p<MAX;p++){if(prime[p]==true){for(ull i=2*p;i<MAX;i+=p){prime[i]=false;}}}prime[0]=0;prime[1]=0;
}*/
/*
int inv[1000001]={0};int invf[1000001]={0};
void findinverse(){
	inv[0]=1;
	inv[1] = 1;
	for(int i = 2; i <=1e6 ; ++i)
		inv[i] = (mod - (mod/i) * inv[mod%i] % mod) % mod;
	invf[0]=1;invf[1]=1;
	for(int i=2;i<=1e6;i++){
		invf[i]=invf[i-1]*inv[i]%mod;
	}
}*/
using namespace std;
int solve()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int> > g(m);
	priority_queue<int> q;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		if(x>m)
			continue;
		g[m-x].pb(y);
	}
	int sum=0;
	for(int i=m-1;i>=0;i--){
		for(auto it:g[i]){
			q.push(it);
		}
		if(!q.empty()){
			sum+=q.top();
			q.pop();
		}
	}
	cout<<sum<<endl;
	return 0;
}
signed main()
{
	fastio;
//	test
		solve();
}