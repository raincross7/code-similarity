#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<ll,ll> pll;
typedef vector<bool> vb;
const ll oo = 0x3f3f3f3f3f3f3f3f;
const double eps = 1e-9;
#define sz(c) ll((c).size())
#define all(c) begin(c), end(c)
#define FOR(i,a,b) for (ll i = (a); i < (b); i++)
#define FORD(i,a,b) for (ll i = (b)-1; i >= (a); i--)
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define eb emplace_back
#define xx first
#define yy second
#define has(c,i) ((c).find(i) != end(c))
#define TR(X) ({ if(1) cerr << "TR: " << (#X) << " = " << (X) << endl; })

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll n; cin >> n;
	FOR(k,2,1e5) if (k*(k-1)/2 == n) {
		cout << "Yes" << endl;
		cout << k << endl;
		
		vvl res(k);
		FOR(i,0,k) FOR(j,i+1,k) {
			res[i].pb(n);
			res[j].pb(n);
			n--;
		}
		
		for (vl v: res) {
			cout << sz(v);
			for (ll x: v) cout << " " << x;
			cout << endl;
		}

		return 0;
	}
	cout << "No" << endl;
}

