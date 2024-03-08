#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize("unroll-loops")
//#pragma warning(disable : 4996)

#include"atcoder/all"


#ifdef _MSC_VER
#include <intrin.h>

#define __builtin_popcount __popcnt
#define __builtin_popcountll __popcnt64
#endif

#include <limits.h>
#include <math.h>
#include <time.h>

#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <complex>
#include <cstdio>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;
using namespace atcoder;

#define REP(i, n) for (int i = 0; i < (n); ++i)
#define REPR(i, n) for (int i = n - 1; i >= 0; --i)
#define FOR(i, m, n) for (int i = m; i < n; ++i)
#define FORR(i, m, n) for (int i = m - 1; i >= n; --i)
#define SORT(v, n) sort(v, v + n);
#define VSORT(v) sort(v.begin(), v.end());
#define REVERSE(v, n) reverse(v, v + n);
#define VREVERSE(v) reverse(v.begin(), v.end())
#define ll long long
#define print(x) cout << (x) << endl
#define pe(x) cout << (x) << " "
#define DEBUG(x) cout << #x << ": " << x << endl
#define lb(v, n) lower_bound(v.begin(), v.end(), (n))
#define ub(v, n) upper_bound(v.begin(), v.end(), (n))
#define int long long
//#define double long double
#define all(x) (x).begin(), (x).end()
#define print_space(v) REP(i, v.size()) cout << v[i] << " \n"[i==(int)v.size()-1]
template <typename T1, typename T2> inline void chmin(T1& a, T2 b) { if (a > b) a = b; }
template <typename T1, typename T2> inline void chmax(T1& a, T2 b) { if (a < b) a = b; }
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
std::random_device rd;
std::mt19937 mt(rd());
constexpr ll MOD = 1e9 + 7;
constexpr int MAX = 500050;
const double pi = acos(-1);
constexpr double EPS = 1e-8;
constexpr ll LINF = 1e18 + 1;
constexpr int INF = 1e9 + 1;


struct UnionFind {
	int N;
	vector<int> siz;
	vector<int> par;
	vector<int> Rank;
	UnionFind(int n) : siz(n, 1), par(n), Rank(n, 0) {
		N = n;
		for (int i = 0; i < N; i++) par[i] = i;
	}
	int find(int x) {
		if (par[x] == x) {
			return x;
		}
		else {
			return par[x] = find(par[x]);
		}
	}
	void unite(int x, int y) {
		x = find(x);
		y = find(y);
		if (x == y) return;
		if (Rank[x] < Rank[y]) {
			par[x] = y;
			siz[x] += siz[y];
			siz[y] = siz[x];
		}
		else {
			siz[y] += siz[x];
			siz[x] = siz[y];
			par[y] = x;
			if (Rank[x] == Rank[y]) Rank[x]++;
		}
	}
	bool same(int x, int y) { return find(x) == find(y); }
};
void solve() {
	int N, Q; cin >> N >> Q;
	UnionFind uf(N);
	REP(_, Q) {
		int t, u, v; cin >> t >> u >> v;
		if (t == 0)uf.unite(u, v);
		else {
			if (uf.same(u, v))print(1);
			else print(0);
		}
	}
}



signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	//int q;
	//cin >> q;
	//while (q--)
	solve();

}