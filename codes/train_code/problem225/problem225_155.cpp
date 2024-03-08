#include <bits/stdc++.h>
using namespace std;
//#define cerr if (false) cerr
#define db(x) cerr << #x << "=" << x << endl
#define db2(x, y) cerr << #x << "=" << x << "," << #y << "=" << y << endl
#define db3(x, y, z) cerr << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << endl
#define dbv(v) cerr << #v << "="; for (auto _x : v) cerr << _x << ", "; cerr << endl
#define dba(a, n) cerr << #a << "="; for (int _i = 0; _i < (n); ++_i) cerr << a[_i] << ", "; cerr << endl
template <typename A, typename B>
ostream& operator<<(ostream& os, const pair<A, B>& x) {
	return os << "(" << x.first << "," << x.second << ")";
}
typedef long long ll;
typedef long double ld;
int main() {
	int n;
	scanf("%d", &n);
	vector<ll> a(n);
	for (int i = 0; i < n; ++i) scanf("%lld", &a[i]);
	ll ans = 0;
	for (;;) {
		ll tot = 0;
		vector<ll> b(n);
		for (int i = 0; i < n; ++i) {
			b[i] = a[i] / n;
			tot += b[i];
			a[i] %= n;
		}
		ans += tot;
		if (!tot) break;
		for (int i = 0; i < n; ++i) {
			a[i] += tot - b[i];
		}
	}
	printf("%lld\n", ans);
}
