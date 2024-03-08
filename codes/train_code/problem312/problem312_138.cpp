#include <iostream>
#include<queue>
#include<stack>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
#include<string>
#include<cassert>
#include<cmath>
#include<climits>
#include<iomanip>
#include<bitset>
#include<unordered_map>

using namespace std;

#define REP(i,n) for(ll (i)=0;(i)<(n);(i)++)
#define rep(i,j,n) for(ll (i)=(j);(i)<(n);(i)++)
#define FOR(i,c) for(decltype((c).begin())i=(c).begin();i!=(c).end();++i)
#define ll long long
#define ull unsigned long long
#define all(hoge) (hoge).begin(),(hoge).end()
#define en '\n'
typedef pair<ll, ll> P;
const long long INF = 1LL << 60;
const int INF_INT = 1 << 25;
const long long MOD = 1e9 + 7;
typedef vector<ll> Array;
typedef vector<Array> Matrix;
template <class T> using vec = vector<T>;
template <class T> using vvec = vector<vec<T>>;
const int loose = 0;
const int tight = 1;

template<class T> inline bool chmin(T& a, T b) {
	if (a > b) {
		a = b;
		return true;
	}
	return false;
}
template<class T> inline bool chmax(T& a, T b) {
	if (a < b) {
		a = b;
		return true;
	}
	return false;
}

//グラフ関連
struct Edge {//グラフ
	ll to, cap, rev;
	Edge(ll _to, ll _cap, ll _rev) {
		to = _to; cap = _cap; rev = _rev;
	}
};
typedef vector<Edge> Edges;
typedef vector<Edges> Graph;

void add_edge(Graph& G, ll from, ll to, ll cap, bool revFlag, ll revCap) {
	G[from].push_back(Edge(to, cap, (ll)G[to].size()));
	if (revFlag)G[to].push_back(Edge(from, revCap, (ll)G[from].size() - 1));
}


void solve() {
	ll n, m;
	cin >> n >> m;
	Array s(n), t(m);
	REP(i, n) cin >> s[i];
	REP(i, m) cin >> t[i];
	
	Matrix dp(n + 1, Array(m + 1, 0));
	Matrix sum(n + 1, Array(m + 1, 0));

	REP(i, n) {
		REP(j, m) {
			if (s[i] == t[j]) (dp[i + 1][j + 1] = sum[i][j] + 1) %= MOD;
			(sum[i + 1][j + 1] = sum[i + 1][j] + sum[i][j + 1] + MOD - sum[i][j] + dp[i + 1][j + 1]) %= MOD;
		}
	}
	cout << (sum[n][m] + 1) % MOD << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	solve();

	return 0;
}