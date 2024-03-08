#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <string.h>
#include <cstdio>
#include <tuple>
using namespace std; using ll = long long; using ld = long double;  using pll = pair<ll, ll>;
using vl = vector<ll>; using vll = vector<vl>; using vpll = vector<pll>;
const ld PI = 3.1415926535897932;
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#define rep1(n) for(ll i=0;i<n;++i)
#define rep2(i,n) for(ll i=0;i<n;++i)
#define rep3(i,a,b) for(ll i=a;i<b;++i)
#define rep4(i,a,b,c) for(ll i=a;i<b;i+=c)
#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)
#define mp make_pair
#define mt make_tuple
#define INT(...) int __VA_ARGS__;in(__VA_ARGS__)
#define LL(...) ll __VA_ARGS__;in(__VA_ARGS__)
#define ULL(...) ull __VA_ARGS__;in(__VA_ARGS__)
#define STR(...) string __VA_ARGS__;in(__VA_ARGS__)
#define CHR(...) char __VA_ARGS__;in(__VA_ARGS__)
#define DBL(...) double __VA_ARGS__;in(__VA_ARGS__)
#define LD(...) ld __VA_ARGS__;in(__VA_ARGS__)
void in() {}
void debug_out() { cerr << endl; }
template<typename Head, typename... Tail>
void debug_out(Head h, Tail... t) {
	cerr << " " << h;
	if (sizeof...(t) > 0) cerr << " :";
	debug_out(t...);
}
template <typename T>
ostream& operator<<(ostream& os, vector<T> vec) {
	for (size_t i = 0; i < vec.size(); i++)os << vec[i] << (i + 1 == vec.size() ? "" : " ");
	return os;
}
ll ctoi(char c) {
	switch (c) {
	case '0': return 0; case '1': return 1; case '2': return 2;
	case '3': return 3; case '4': return 4; case '5': return 5;
	case '6': return 6; case '7': return 7; case '8': return 8;
	case '9': return 9;  default: return 0;
	}
}
void vout(vl V) {
	for (ll i = 0; i < (ll)V.size(); i++) cout << V[i] << " ";
	cout << endl;
}
bool pairCompare(const pll firstElof, pll secondElof)
{
	return firstElof.first > secondElof.first;
}
//**Snippetリスト**//
//rep, vin, all, iteLoop//
//bitSearch, bitList, nod, gcdlcm, isPrime, primeFactorize, Npow, divisor, modinv, dfs, bfs, eratos//
//dijkstra, WarshallFloyd, BellmanFord, UnionFind, COM, digitDP ,RMQ//
ll i, j, k, l; ll N, M, K, H, W, L, X, Y, Z, R, Q;
ll MOD = 1000000007; ll INF = 1LL << 62; ll ans = 0; ll z = 0, o = 1;
vl flag, color,D; vector<vpll> path; vl A; vl dp; vl Ans;
//***********//
void dijkstra(ll s) {
	priority_queue<pll> PQ;
	vl color(N);
	for (ll i = 0; i < N; i++) {
		D[i] = INF;
		color[i] = 0;
	}
	D[s] = 0;
	PQ.push(make_pair(0, s));
	color[0] = 1;
	ll q = -1;
	while (!PQ.empty()) {
		pll f = PQ.top();
		PQ.pop();
		ll u = f.second;
		color[u] = 2;
		if (D[u] < f.first * q) {
			continue;
		}
		for (ll j = 0; j < path[u].size(); j++) {
			ll v = path[u][j].first;
			if (color[v] == 2) {
				continue;
			}
			if (D[v] > D[u] + path[u][j].second) {
				D[v] = D[u] + path[u][j].second;
				color[v] = 1;
				PQ.push(make_pair(D[v] * q, v));
			}
		}
	}
	//cout << (D[N - 1] == INF ? -1 : D[N - 1]);
}
int main() {
	cin >> N;
	path.resize(N);
	D.resize(N);
	for (i = 0; i < N-1; i++) {
		ll a, b, c;
		cin >> a >> b >> c;
		a--; b--;
		path[a].push_back(mp(b, c));
		path[b].push_back(mp(a, c));
	}
	cin >> Q >> K;
	K--;
	dijkstra(K);
	for (i = 0; i < Q; i++) {
		ll x, y;
		cin >> x >> y;
		x--; y--;
		cout << D[x] + D[y] << endl;
	}
}