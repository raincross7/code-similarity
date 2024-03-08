//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define INF 100000000
#define rep(i,s,n) for (int i = (int)(s); i < (int)(n); i++)
#define repp(i,n,s) for (int i= (int)(n); i >= (int)(s); i--)
#define mp make_pair
ll mod = 1000000007;
ll mod2 = 998244353;

ll modpow(ll a, ll b){
    ll r = 1;
    while(b){
        r = r*((b%2)?a:1)%mod;
        a = a*a%mod;
        b>>=1;
    }
    return r;
}

ll comb(ll N_, ll C_) {
	const int NUM_=1000201;
	static ll fact[NUM_+1],factr[NUM_+1],inv[NUM_+1];
	if (fact[0]==0) {
		inv[1]=fact[0]=factr[0]=1;
		for (int i=2;i<=NUM_;++i) inv[i] = inv[mod % i] * (mod - mod / i) % mod;
		for (int i=1;i<=NUM_;++i) fact[i]=fact[i-1]*i%mod, factr[i]=factr[i-1]*inv[i]%mod;
	}
	if(C_<0 || C_>N_) return 0;
	return factr[C_]*fact[N_]%mod*factr[N_-C_]%mod;
}


int main(){
	cin.tie(0);
    ios::sync_with_stdio(false);
    ll x,y;cin>>x>>y;
    ll ans = 0;
    if ((2*y-x)%3!=0 || (2*x-y)%3!=0){
        cout<<0<<endl;
        return 0;
    }
    ll x1 = (2*y-x)/3;
    ll x2 = (2*x-y)/3;
    ans = comb(x1+x2,x1);
    cout<<ans<<endl;
}