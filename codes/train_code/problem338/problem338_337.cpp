#include <iostream>
#include <iomanip>
#include <string>
#include <string.h>
#include <math.h>
#include <cmath>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <deque>
#include <queue>
#include <functional>
//#include <boost/multiprecision/cpp_int.hpp>

#define rep(i, n) for(int i = 0; i < n; ++i)
#define REP(i, m, n) for(int i = m; i < n; ++i)
#define rrep(i,n) for(int i = n; i >= 0; --i)
#define RREP(i, m, n) for(int i = n; i >= m; --i)
#define llrep(i, n) for(ll i = 0; i < n; ++i)
#define llREP(i, m, n) for(ll i = m; i < n; ++i)
#define llrrep(i,n) for(ll i = n; i >= 0; --i)
#define llRREP(i, m, n) for(ll i = n; i >= m; --i)

using ll = long long;
using ull = unsigned long long;
using pii = std::pair<int, int>;
using pll = std::pair<long long, long long>;
using pil = std::pair<int, long long>;
using pli = std::pair<long long, int>;
using plpii = std::pair<long long, std::pair<int, int>>;
using pdd = std::pair<double, double>;

const long long INF = 1000000000000000001;
const long long _MOD = 1000000007;
const long long MOD = 998244353;
const int ALPHABET = 27;
const double pi = 3.14159265358979;

using namespace std;
//namespace mp = boost::multiprecision;

template<typename T>
constexpr T _gcd(T m, T n) noexcept {
	T g = 1;

	while (m != 0) {
		if (m < n) std::swap(m, n);

		if (m & 1) {
			if (n & 1) m = (m - n) >> 1;
			else n = n >> 1;
		}
		else {
			if (n & 1) {
				m = m >> 1;
			}
			else {
				n = n >> 1;
				m = m >> 1;
				g = g << 1;
			}
		}
	}

	return g * n;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	ll* a = new ll[n];
	rep(i, n) cin >> a[i];

	ll ans = a[0];
	rep(i, n) {
		ans = _gcd(ans, a[i]);
	}

	cout << ans << "\n";

	return 0;
}