#include <bits/stdc++.h>

#define rep2(x,fr,to) for(int x=(fr);x<(to);x++)
#define rep(x,to) for(int x=0;x<(to);x++)
#define repr(x,fr,to) for(int x=(fr);x>=(to);x--)
#define all(c) c.begin(),c.end()
#define sz(v) (int)v.size()

using namespace std;
typedef long long ll; typedef vector<int> VI; typedef pair<int,int> pii;
typedef vector<ll> VL; const int MD = 1e9 + 7;
void dbg(){ cerr << "\n"; } template <typename T,typename ...T2> void dbg(const T& fst, const T2&...rst){ cerr << fst << ": "; dbg(rst...); }

ll bpow(ll x,ll n,ll m=MD,ll r=1LL){for(;n>0;n>>=1,x=x*x%m) if(n&1) r=r*x%m; return r;}
ll nCk_mod(ll n, ll k, int mod =MD) {
	if(k > n || n <0 || k <0) return 0;
	ll ret = 1, rt2 = 1;
	for(ll i=n-k+1; i<n+1; i++) ret = ( ret * i) % mod;
	for(ll i=1; i<k+1; i++) rt2 = ( rt2 * i) % mod;
	return ( ret * bpow( rt2, mod-2, mod)) % mod;
}

int main()
{
	cin.tie(0); ios_base::sync_with_stdio(false);
	int x, y;
	cin >>x >>y;
	bool ok=1;
	if((x+y)%3) ok=0;
	int a = (2*y -x)/3;
	int b = y - 2*a;
	if(a<0 || b<0 || !ok){puts("0"); return 0;}
	
	ll ans = nCk_mod(a+b, a);
	cout << ans <<"\n";
	return 0;
}
