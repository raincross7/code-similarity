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
using vs = vector<string>; using tll = tuple<ll, ll, ll>; using vtll = vector<tll>;
const ld PI = 3.1415926535897932;
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#define rep1(n) for(ll i=0;i<n;++i)
#define rep2(i,n) for(ll i=0;i<n;++i)
#define rep3(i,a,b) for(ll i=a;i<b;++i)
#define rep4(i,a,b,c) for(ll i=a;i<b;i+=c)
#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)
#define mp make_pair
#define mt make_tuple
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
bool pairCompare(const pll firstElof, pll secondElof)
{
	return firstElof.first > secondElof.first;
}
//**Snippetリスト**//
//rep, vin, all, iteLoop, bitSearch, bitList, nod//
//gcdlcm, isPrime, eratos, primeFactorize, Npow, combination, divisor, modinv,  digitDP//
//dfs, bfs, dijkstra, WarshallFloyd, BellmanFord, UnionFind, Kruskal ,RMQ, LCA//
ll i, j, k, l; ll N, M, K, H, W, L, X, Y, Z, R, Q;
ll MOD = 1000000007; ll INF = 1LL << 60; ll ans = 0; ll z = 0, o = 1;
vl flag; vll path, D;
//***********//
int main() {
	cin >> H >> W;
	vs A(H);
	vll C(H, vl(W));
	for (i = 0; i < H; i++) {
		cin >> A[i];
		for (j = 0; j < W; j++) {
			if (A[i][j] == '#') C[i][j] = 0;
			else C[i][j] = INF;
		}
	}
	for (i = 0; i < H; i++) {
		for (j = 0; j < W-1; j++) {
			C[i][j + 1] = min(C[i][j + 1], C[i][j] + 1);
		}
		for (j = W-1; j > 0; j--) {
			C[i][j - 1] = min(C[i][j - 1], C[i][j] + 1);
		}
	}
	for (j = 0; j < W; j++) {
		for (i = 0; i < H - 1; i++) {
			C[i+1][j] = min(C[i+1][j], C[i][j] + 1);
		}
		for (i = H - 1; i > 0; i--) {
			C[i-1][j] = min(C[i-1][j], C[i][j] + 1);
		}
	}
	ans = 0;
	for (i = 0; i < H; i++) {
		//debug(C[i]);
		for (j = 0; j < W; j++) {
			ans = max(ans, C[i][j]);
		}
	}
	cout << ans;
}