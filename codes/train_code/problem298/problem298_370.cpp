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
const int INF = (int)1e9;
const ll  inf = (ll)1e18;
const int mod = 1000000007;
const int MAX_N = 100010;
const double PI = acos(-1);

bool comb(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cout << fixed << setprecision(10);
	/*------------------------------*/

	ll n, k;
	cin >> n >> k;

	//最大でn-1C2
	int ma = (n - 1) * (n - 2) / 2;
	if (ma < k) out(-1);
	else {
		//nを中心とするスターグラフ
		vector<P> res;
		for (int i = 1; i <= n - 1; i++) {
			res.push_back(P(i, n));
		}

		//ペアを潰すための辺を入れる
		ll rem = ma - k;
		ll ci = 1, cj = 2;
		for (int j = 0; j < rem; j++) {
			res.push_back(P(ci, cj));

			cj++;
			//nに到達したら始点を変える
			if (cj == n) {
				ci++;
				cj = ci + 1;
			}
		}

		out(sz(res));
		for (auto p : res) {
			cout << p.first << " " << p.second << endl;
		}
	}

	return 0;
}