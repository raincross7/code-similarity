#include <bits/stdc++.h>

using namespace std;

#ifdef DEBUG_MODE
	#define DBG(n) n;
#else
	#define DBG(n) ;
#endif
#define REP(i,n) for(ll (i) = (0);(i) < (n);++i)
#define PB push_back
#define MP make_pair
#define FI first
#define SE second
#define SHOW1d(v,n) {for(int W = 0;W < (n);W++)cerr << v[W] << ' ';cerr << endl << endl;}
#define SHOW2d(v,i,j) {for(int aaa = 0;aaa < i;aaa++){for(int bbb = 0;bbb < j;bbb++)cerr << v[aaa][bbb] << ' ';cerr << endl;}cerr << endl;}
#define ALL(v) v.begin(),v.end()
#define Decimal fixed<<setprecision(20)
#define INF 1000000000
#define LLINF 1000000000000000000LL
#define MOD 1000000007

typedef long long ll;
typedef pair<ll,ll> P;

int main(){

	int n,m;cin >> n >> m;
	ll x = 0,y = 0;
	REP(i,n){
		ll tmp;cin >> tmp;
		x += i * tmp % MOD;
		x %= MOD;
		x += (n - i - 1) * ((MOD - tmp) % MOD) % MOD;
		x %= MOD;
	}

	REP(i,m){
		ll tmp;cin >> tmp;
		y += i * tmp % MOD;
		y %= MOD;
		y += (m - i - 1) * ((MOD - tmp) % MOD) % MOD;
		y %= MOD;
	}

	cout << x * y % MOD << endl;
	return 0;
}
