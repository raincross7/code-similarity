// Template Headers {{{
#include <bits/stdc++.h>
using namespace std;

using pii = pair<int, int>; using vpii = vector<pii>;
using vi = vector<int>; using vvi = vector<vi>;
using ll = long long;
using pll = pair<ll, ll>; using vpll = vector<pll>;
using vll = vector<long long>; using vvll = vector<vll>;
template <class T> using min_queue = priority_queue<T, vector<T>, greater<T>>;
template <class T> istream &operator>>(istream &, vector<T> &);
template <class T> ostream &operator<<(ostream &, const vector<T> &);
template <class T, class U> istream &operator>>(istream &, pair<T, U> &);
template <class T, class U> ostream &operator<<(ostream &, const pair<T, U> &);
template <class T> struct Inf { static constexpr T inf() { return std::numeric_limits<T>::has_infinity ? std::numeric_limits<T>::infinity() : std::numeric_limits<T>::max(); } };
template <> struct Inf<int> { static constexpr int inf() { return 0x3f3f3f3f; } };
template <> struct Inf<long long> { static constexpr long long inf() { return 0x3f3f3f3f3f3f3f3fLL; } };
constexpr int INF = Inf<int>::inf(); constexpr ll BINF = Inf<ll>::inf();
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// }}}
// Preprocessing & "Global" variables {{{
struct Solver {
	Solver() {}
	int solve();
};
// }}}


int Solver::solve() {
	int n, m; cin >> n >> m;
	int lo = 1, hi = n;
	for (int i = 0; i < m; i++) {
		int l, r; cin >> l >> r;
		lo = max(lo, l);
		hi = min(hi, r);
	}
	int can = hi - lo + 1;
	cout << max(0, can) << endl;
	return 0;
}

// Template Main {{{
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	Solver solver;
	#ifdef JUDGE_MULTI_CASE
		int t; cin >> t; for (int i = 1; i <= t; i++)
	#endif
	solver.solve();
	// cout << "Case #" << i << ": ", solver.solve();
	return 0;
}

template <class T> istream &operator>>(istream &is, vector<T> &v) {
	for (auto it=v.begin();it!=v.end();++it) is >> *it;
	return is;
}

template <class T> ostream &operator<<(ostream &os, const vector<T> &v) {
	for (auto it=v.begin();it!=v.end();) os << *it, os << " \n"[++it==v.end()];
	return os;
}

template <class T, class U> istream &operator>>(istream &is, pair<T, U> &p) {
	return is >> p.first >> p.second;
}

template <class T, class U> ostream &operator<<(ostream &os, const pair<T, U> &p) {
	return os << p.first << ' ' << p.second;
}
// }}}

// vim: fdm=marker
