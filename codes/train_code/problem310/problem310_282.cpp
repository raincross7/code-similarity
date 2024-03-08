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
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loopll(i, n) for(ll i = 0; i < (ll)n; i++)
#define Loop1(i, n) for(int i = 1; i <= (int)n; i++)
#define Loopll1(i, n) for(ll i = 1; i <= (ll)n; i++)
#define Loopr(i, n) for(int i = (int)n - 1; i >= 0; i--)
#define Looprll(i, n) for(ll i = (ll)n - 1; i >= 0; i--)
#define Loopr1(i, n) for(int i = (int)n; i >= 1; i--)
#define Looprll1(i, n) for(ll i = (ll)n; i >= 1; i--)
#define Loopitr(itr, container) for(auto itr = container.begin(); itr != container.end(); itr++)
#define printv(vector) Loop(extra_i, vector.size()) { cout << vector[extra_i] << " "; } cout << endl;
#define printmx(matrix) Loop(extra_i, matrix.size()) { Loop(extra_j, matrix[extra_i].size()) { cout << matrix[extra_i][extra_j] << " "; } cout << endl; }
#define quickio() ios::sync_with_stdio(false); cin.tie(0);
#define readfile(filename) ifstream in(filename); cin.rdbuf(in.rdbuf());
#define bitmanip(m,val) static_cast<bitset<(int)m>>(val)
bool nearlyeq(double x, double y) { return abs(x - y) < 1e-9; }
ll rndf(double x) { return (ll)(x + (x >= 0 ? 0.5 : -0.5)); }
ll floorsqrt(double x) { ll m = (ll)sqrt(x); return m + (m * m <= (ll)(x) ? 0 : -1); }
ll ceilsqrt(double x) { ll m = (ll)sqrt(x); return m + ((ll)x <= m * m ? 0 : 1); }
ll rnddiv(ll a, ll b) { return (a / b + (a % b * 2 >= b ? 1 : 0)); }
ll ceildiv(ll a, ll b) { return (a / b + (a % b == 0 ? 0 : 1)); }
ll gcd(ll m, ll n) { if (n == 0) return m; else return gcd(n, m % n); }

/*******************************************************/

int main() {
	quickio();
	int n; cin >> n;
	Loop1(i, 500) {
		if (i * (i - 1) / 2 == n) {
			cout << "Yes" << endl;
			cout << i << endl;
			vvi ans(i);
			int cnt = 1;
			Loop(j, i) {
				for (int k = j + 1; k < i; ++k) {
					ans[j].push_back(cnt);
					ans[k].push_back(cnt);
					cnt++;
				}
			}
			Loop(j, i) {
				cout << ans[j].size();
				Loop(k, ans[j].size()) {
					cout << " " << ans[j][k];
				}
				cout << endl;
			}
			return 0;
		}
	}
	cout << "No" << endl;
}