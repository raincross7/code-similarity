#include "bits/stdc++.h"
using namespace std;
#ifndef LOCAL
#define endl '\n'
#endif

#define fr(i, a, b) for(int i = a; i <= b; i++)
#define pf push_front
#define pb push_back
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)x.size()
#define rsz resize()
#define lb lower_bound
#define ub upper_bound

typedef long long ll;
typedef long double f80;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

int pct(int x) { return __builtin_popcount(x); }
int pct(ll x) { return __builtin_popcountll(x); } 
int bit(int x) { return 31 - __builtin_clz(x); } // floor(log2(x))
int bit(ll x) { return 63 - __builtin_clzll(x); } // floor(log2(x))
int cdiv(int a, int b) { return a / b + !(a < 0 || a % b == 0); }
ll cdiv(ll a, ll b) { return a / b + !(a < 0 || a % b == 0); }

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

ll rand(ll l, ll r){
	uniform_int_distribution<ll> uid(l, r);
	return uid(rng);
}

#ifdef LOCAL
#define debug(...) cerr << "[L:" << __LINE__ << "][" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 42
#endif

#ifndef LOCAL
string to_string(__int128 x) {
	string s = "";
	bool neg = 0;
	if(x < 0) { s += "-"; neg = 1; }
	if(!x) s += '0';
	while(x) {
		int rem = x % 10;
		s += to_string(rem);
		x /= 10;
	}
	reverse(s.begin() + neg, s.end());
	return s;
}
#endif

const int mod = 1e9 + 7; // 998244353;

int pwr(int a,int b) {
	int ans = 1;
	while(b) {
		if(b & 1) ans = (ans * 1LL * a) % mod;
		a = (a * 1LL * a) % mod;
		b >>= 1;
	}
	return ans;
}

/*
	Lookout for overflows!!
	Check array sizes!!
	Clear before test cases!!
	Use the correct modulo!!
	Check for corner cases!!
	Are you forgetting something?!
*/

const int N = 1e5 + 5;
int a[N];
int n, m, v, p;

int good(int idx) {
	vector<int> bad;
	fr(i, 1, n) {
		if(a[i] > a[idx]) bad.pb(a[i] - a[idx]);
	}
	sort(all(bad));
	int tot = max(0, (int)bad.size() - p + 1);
	int maxi = 0;
	ll s = 0;
	fr(i, 0, tot - 1) {
		s += bad[i];
		maxi = max(maxi, bad[i]);
	}
	debug(a[idx], bad);
	return (maxi <= m) && (s <= m * 1LL * v);
}

void solve() {
	cin >> n >> m >> v >> p;
	v = n - v;
	fr(i, 1, n) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	reverse(a + 1, a + n + 1);
	int l = 0, r = n + 1;
	while(r - l > 1) {
		int m = (l + r) >> 1;
		if(good(m))
			l = m;
		else
			r = m;
	}
	cout << l;
}

int main() {
	ios :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	// cin >> t;
	t = 1;
	for(int tt = 1; tt <= t; tt++) {
		solve();
	}
	return 0;
}