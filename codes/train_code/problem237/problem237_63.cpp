#include "bits/stdc++.h"
using namespace std;

#define ASC(vec) vec.begin(), vec.end()		// 昇順ソート 例：sort(ASC(vec));
#define DESC(vec) vec.rbegin(), vec.rend()	// 降順ソート 例:sort(DESC(vec));
#define rep(i, n) for(int i = 0; i < n; i++)
#define Rep(i, n) for(int i = 1; i < n; i++)

const int mod = 1000000007;
const int inf = (int)1e9 + 7;
const long long INF = 1LL << 60;

using ii = pair<int, int>;
using ll = long long;
using vi = vector<int>;
using vd = vector<double>;
using vb = vector<bool>;
using vl = vector<ll>;
using vs = vector<string>;
using vvi = vector<vector<int>>;
using vvl = vector<vector<ll>>;
using vii = vector<pair<int, int>>;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

ll GCD(ll a, ll b) { return b ? GCD(b, a % b) : a; }
ll LCM(ll a, ll b) { return (a * b) / GCD(a, b); }
int round_int(int a, int b) { return (a + (b - 1)) / b; }

// 素因数分解; 返り値は(素数, 乗数)のvector配列
vector<pair<ll, int>> factorize(ll n) {
	vector<pair<ll, int>> res;
	for (ll i = 2; i * i <= n; ++i) {
		if (n % i) continue;
		res.emplace_back(i, 0);
		while (n % i == 0) {
			n /= i;
			res.back().second++;
		}
	}
	if (n != 1) res.emplace_back(n, 1);
	return res;
}

constexpr array<int, 9> dx = { 0, 1, 0, -1, -1, 1, 1, -1, 0 };
constexpr array<int, 9> dy = { 1, 0, -1, 0, 1, 1, -1, -1, 0 };
constexpr auto MAX = 100010;

// ──────────────────────────────────────────────────────────────────────────────

int main() {
	int n, m;
	cin >> n >> m;

	vvl info(3);
	ll res = 0;
	rep(i, n) {
		rep(j, 3) {
			ll num; cin >> num;
			info[j].push_back(num);
		}
	}

	for (int bit = 0; bit < (1 << 3); ++bit) {
		vl all(n);
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < 3; ++j) {
				if ((bit >> j) & 1) all[i] += info[j][i];
				else all[i] -= info[j][i];
			}
		}
		sort(DESC(all));
		ll ans = 0;
		rep(i, m) ans += all[i];
		res = max(res, ans);
	}
	cout << res << endl;
}