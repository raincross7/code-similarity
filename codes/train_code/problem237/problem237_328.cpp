#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<functional>
#include<algorithm>
#include<stdlib.h>
#include<string>
#include<string.h>
#define _USE_MATH_DEFINES
#include<math.h>
#include<deque>
#include<set>
#include<map>
#include<queue>
#include<list>
#include<iostream>
#include <bitset>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(auto i=a;i<b;i++)
#define rep2(i, a)for(auto i : a)
#define all(_x) _x.begin(), _x.end()
#define r_sort(_x) sort(_x, std::greater<int>())
#define vec_cnt(_a, _n) (upper_bound(all(_a), _n) - lower_bound(all(_a), _n))
#define vec_unique(_a) _a.erase(std::unique(all(_a)), _a.end());
#define vvec vector<vector<ll>>
ll gcd(ll a, ll b) { return a % b == 0 ? b : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
#define INF 1 << 30
const int mod = 1000000007;
ll power(ll x, ll p) { ll a = 1; while (p > 0) { if (p % 2 == 0) { x *= x; p /= 2; } else { a *= x; p--; } }return a; }
ll mpower(ll x, ll p) { ll a = 1; while (p > 0) { if (p % 2 == 0) { x = x * x % mod; p /= 2; } else { a = a * x % mod; p--; } }return a; }
ll co(ll n, ll k) { ll a = 1; rep(i, 1, k) { a *= n - i + 1; a /= i; }return a; }
ll mc(ll n, ll m) { ll k = 1, l = 1; rep(i, n - m + 1, n + 1) k = k * i % mod; rep(i, 1, m + 1) l = l * i % mod; l = mpower(l, mod - 2); return k * l % mod; }

int main() {
	int n, m;
	cin >> n >> m;
	ll ans = 0ll, temp;
	vector<ll> x(n), y(n), z(n);
	rep(i, 0, n)cin >> x[i] >> y[i] >> z[i];
	rep(_i, 0, 8) {
		vector<ll> t(n);
		rep(i, 0, n) {
			t[i] += ((_i & 1) ? 1ll : -1ll) * x[i];
			t[i] += ((_i >> 1 & 1) ? 1ll : -1ll) * y[i];
			t[i] += ((_i >> 2 & 1) ? 1ll : -1ll) * z[i];
		}
		sort(all(t));
		reverse(all(t));
		temp = 0ll;
		rep(i, 0, m) {
			temp += t[i];
		}
		ans = max(ans, temp);
	}
	printf("%lld", ans);
	return 0;
}
