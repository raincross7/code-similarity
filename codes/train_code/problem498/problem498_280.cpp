#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define debug(x) cerr << #x << ": " << x << endl;
#define debug2(x, y) debug(x) debug(y);
#define repn(i, a, b) for(int i = (int)(a); i < (int)(b); i++)
#define rep(i, a) for(int i = 0; i < (int)(a); i++)
#define all(v) v.begin(), v.end() 
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
#define sq(x) ((x) * (x))

template<class T> T gcd(T a, T b){ return ((b == 0) ? a : gcd(b, a % b)); }

int n;
pair<ll, ll> a[100005];

bool cmp(pair<ll, ll> b, pair<ll, ll> c){
	return ((b.fi - b.se) < (c.fi - c.se));
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//freopen("input.in", "r", stdin);
	//freopen("output.out", "w", stdout);
	cin >> n;
	ll sum = 0, sum1 = 0;
	rep(i, n) cin >> a[i].fi, sum += a[i].fi;
	rep(i, n) cin >> a[i].se, sum1 += a[i].se;
	if(sum < sum1){
		cout << -1 << endl;
		return 0;
	}
	ll tot = sum - sum1;
	int ans = 0;
	sort(a, a + n, cmp);
	rep(i, n){
		if(a[i].fi - a[i].se >= 0){
			if(tot < (a[i].fi - a[i].se)) break;
			else{
				ans++;
				tot -= a[i].fi - a[i].se;
			}
		}
	}
	cout << n - ans << endl;
	return 0;
}
/*
Things to look out for:
	- Integer overflows
	- Array bounds
	- Special cases
Be careful!
*/
