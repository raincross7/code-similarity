#include <iostream>
#include <fstream>
#include <iomanip>
#include <climits>
#include <limits>
#include <algorithm>
#include <array>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <functional>
#include <numeric>
#include <map>
#include <set>
#include <cstdlib>
#include <bitset>
#include <unordered_map>
#include <random>
#include <cmath>
#include <complex>
// #include "utiltime.hpp"

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> P;
typedef pair<ll, ll> Pll;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef complex<double> cdouble;

const int INFL = (int)1e9;
const ll INFLL = (ll)1e18;
const double INFD = numeric_limits<double>::infinity();
const double PI = 3.14159265358979323846;
#define Loop(i, n) for(int i = 0; i < (int)(n); i++)
#define Loopll(i, n) for(ll i = 0; i < (ll)(n); i++)
#define Loop1(i, n) for(int i = 1; i <= (int)(n); i++)
#define Loopll1(i, n) for(ll i = 1; i <= (ll)(n); i++)
#define Loopr(i, n) for(int i = (int)(n) - 1; i >= 0; i--)
#define Looprll(i, n) for(ll i = (ll)(n) - 1; i >= 0; i--)
#define Loopr1(i, n) for(int i = (int)(n); i >= 1; i--)
#define Looprll1(i, n) for(ll i = (ll)(n); i >= 1; i--)
#define Foreach(buf, container) for(auto buf : container)
#define Loopdiag(i, j, h, w, sum) for(int i = ((sum) >= (h) ? (h) - 1 : (sum)), j = (sum) - i; i >= 0 && j < (w); i--, j++)
#define Loopdiagr(i, j, h, w, sum) for(int j = ((sum) >= (w) ? (w) - 1 : (sum)), i = (sum) - j; j >= 0 && i < (h); j--, i++)
#define Loopdiagsym(i, j, h, w, gap) for (int i = ((gap) >= 0 ? (gap) : 0), j = i - (gap); i < (h) && j < (w); i++, j++)
#define Loopdiagsymr(i, j, h, w, gap) for (int i = ((gap) > (h) - (w) - 1 ? (h) - 1 : (w) - 1 + (gap)), j = i - (gap); i >= 0 && j >= 0; i--, j--)
#define Loopitr(itr, container) for(auto itr = container.begin(); itr != container.end(); itr++)
#define printv(vector) Loop(extra_i, vector.size()) { cout << vector[extra_i] << " "; } cout << endl;
#define printmx(matrix) Loop(extra_i, matrix.size()) { Loop(extra_j, matrix[extra_i].size()) { cout << matrix[extra_i][extra_j] << " "; } cout << endl; }
#define quickio() ios::sync_with_stdio(false); cin.tie(0);
#define readfile(filename) ifstream in(filename); cin.rdbuf(in.rdbuf());
#define bitmanip(m,val) static_cast<bitset<(int)m>>(val)
#define Comp(type_t) bool operator<(const type_t &another) const
#define fst first
#define snd second
bool nearlyeq(double x, double y) { return abs(x - y) < 1e-9; }
bool inrange(int x, int t) { return x >= 0 && x < t; }
ll rndf(double x) { return (ll)(x + (x >= 0 ? 0.5 : -0.5)); }
ll floorsqrt(ll x) { ll m = (ll)sqrt((double)x); return m + (m * m <= x ? 0 : -1); }
ll ceilsqrt(ll x) { ll m = (ll)sqrt((double)x); return m + (x <= m * m ? 0 : 1); }
ll rnddiv(ll a, ll b) { return (a / b + (a % b * 2 >= b ? 1 : 0)); }
ll ceildiv(ll a, ll b) { return (a / b + (a % b == 0 ? 0 : 1)); }
ll gcd(ll m, ll n) { if (n == 0) return m; else return gcd(n, m % n); }
ll lcm(ll m, ll n) { return m * n / gcd(m, n); }

/*******************************************************/

vvll Zeta_trans(vll f) {
	int n = f.size();
	int digit = int(rndf(log2(n)));
	vvll ret(n);
	Loop(i, n) ret[i].push_back(f[i]);
	Loop(i, digit) {
		int x = 1 << i;
		Loop(j, n) {
			if (j & x) {
				Foreach(a, ret[j ^ x]) {
					ret[j].push_back(a);
				}
				sort(ret[j].begin(), ret[j].end(), greater<ll>());
				while (ret[j].size() > 2) ret[j].pop_back();
			}
		}
	}
	return ret;
}

int main() {
	quickio();
	int n; cin >> n;
	vll a(1 << n); Loop(i, 1 << n) cin >> a[i];
	vvll b = Zeta_trans(a);
	ll ans = 0;
	Loop(i, 1 << n) {
		if (i == 0) continue;
		ans = max(ans, b[i][0] + b[i][1]);
		cout << ans << endl;
	}
}