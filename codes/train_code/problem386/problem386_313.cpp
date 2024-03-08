#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
typedef pair<ll, ll> P;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define REP(i, a, b) for(ll i = a; i <= b; i++)
#define out(x) std::cout << x << '\n'
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define pb push_back
#define sz(x) ((int)(x).size())
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { ll g = gcd(a, b); return a / g * b; }
const int dx[4] = { 1, 0, -1,  0 };
const int dy[4] = { 0, 1,  0, -1 };
const int INF = INT_MAX / 2;
const ll  inf = LLONG_MAX / 2;
const int mod = 1000000007;
const int MAX_N = 101010;
const double PI = acos(-1);

//dp[i][j] : 
//先頭i文字として考えられるのものうち,
//13で割った余りがjであるもの.
ll dp[MAX_N][13];

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cout << fixed << setprecision(10);
	/*------------------------------*/

	ll n, c, k;
	cin >> n >> c >> k;

	vector<ll> t(n);
	rep(i, n) cin >> t[i];

	sort(all(t));

	ll ans = 0;
	ll l = 0, r = 0;
	while (r < n) {
		while (r < n && r - l + 1 <= c && t[r] - t[l] <= k) {
			r++;
		}
		ans++;
		l = r;
	}

	out(ans);

	return 0;
}