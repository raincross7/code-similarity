#include <iostream>
#include <fstream>
#include <iomanip>
#include <climits>
#include <limits>
#include <algorithm>
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

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> P;
typedef pair<ll, ll> Pll;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;

const int INFL = (int)1e9;
const ll INFLL = (ll)1e18;
const double INFD = numeric_limits<double>::infinity();
const double PI = 3.14159265358979323846;
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loopll(i, n) for(ll i = 0; i < (ll)n; i++)
#define Loop1(i, n) for(int i = 1; i <= (int)n; i++)
#define Loopll1(i, n) for(ll i = 1; i <= (ll)n; i++)
#define Loopr(i, n) for(int i = (int)n - 1; i >= 0; i--)
#define Looprll(i, n) for(ll i = (ll)n - 1; i >= 0; i--)
#define Loopr1(i, n) for(int i = (int)n; i >= 1; i--)
#define Looprll1(i, n) for(ll i = (ll)n; i >= 1; i--)
#define Loopitr(itr, container) for(auto itr = container.begin(); itr != container.end(); itr++)
#define printv(vector) Loop(i, vector.size()) { cout << vector[i] << " "; } cout << endl;
#define printmx(matrix) Loop(i, matrix.size()) { Loop(j, matrix[i].size()) { cout << matrix[i][j] << " "; } cout << endl; }
#define rndf(d) (ll)((double)(d) + (d >= 0 ? 0.5 : -0.5))
#define floorsqrt(x) ((ll)sqrt((double)x) + ((ll)sqrt((double)x) * (ll)sqrt((double)x) <= (ll)(x) ? 0 : -1))
#define ceilsqrt(x) ((ll)sqrt((double)x) + ((ll)x <= (ll)sqrt((double)x) * (ll)sqrt((double)x) ? 0 : 1))
#define rnddiv(a, b) ((ll)(a) / (ll)(b) + ((ll)(a) % (ll)(b) * 2 >= (ll)(b) ? 1 : 0))
#define ceildiv(a, b) ((ll)(a) / (ll)(b) + ((ll)(a) % (ll)(b) == 0 ? 0 : 1))
#define bitmanip(m,val) static_cast<bitset<(int)m>>(val)

/*******************************************************/

int main() {
	int n; cin >> n;
	vll a(n); Loop(i, n) cin >> a[i];
	sort(a.begin(), a.end());
	ll m = a.back();
	auto k = lower_bound(a.begin(), a.end() - 1, m / 2);
	if (k == a.begin()) {
		cout << m << " " << *k << endl;
	}
	else {
		auto j = k;
		j--;
		if (abs(m - *k * 2) < abs(m - *j * 2)) cout << m << " " << *k << endl;
		else cout << m << " " << *j << endl;
	}
	return 0;
}