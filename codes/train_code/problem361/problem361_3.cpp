#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
using P = pair<int,int>;
using ll = long long;
static const int INF = 1000000000;
static const ll MOD = 1000000007;

ll gcd(ll a, ll b){return b!=0 ? gcd(b, a%b) : a;}
ll lcm(ll a, ll b){return a / gcd(a, b) * b;}



int main(){
	ll n, m;
	cin >> n >> m;
	
	ll ans = 0;
	if(0 <= m - 2*n){
		ans += n;
		m -= 2*n;
		ans += m / 4;
	}
	else{
		ans += m / 2;
	}
	cout << ans << endl;
	return 0;
}

