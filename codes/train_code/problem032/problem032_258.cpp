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
#include <numeric>
using namespace std; using ll = long long; using ld = long double;  using pll = pair<ll, ll>;
using vl = vector<ll>; using vll = vector<vl>; using vpll = vector<pll>;
using vs = vector<string>; using tll = tuple<ll, ll, ll>; using vtll = vector<tll>;
const ld PI = 3.1415926535897932;
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define co(i) cout << i << endl;
#define co2(i,j) cout << i << " " << j << endl;
#define co3(i) cout << i << " ";
#define po(i) cout << i.first << " " << i.second << endl;
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
//gcdlcm, isPrime, eratos, primeFactorize, Npow, combination, divisor, modinv, doubling, digitDP//
//dfs, bfs, dijkstra, WarshallFloyd, BellmanFord, UnionFind, Kruskal, RMQ, LCA//
ll i, j, k, l; ll N, M, K, H, W, L, X, Y, Z, R, Q;
ll MOD = 1000000007, INF = 1LL << 60, ans = 0, z = 0, o = 1;
vpll flag, D; vll path;
//***********//
vl bitList(ll n, ll k, ll f) {
	vl bitList(k);
	for (ll i = 0; i < k; i++) {
		bitList[i] = f % n;
		f /= n;
	}
	return bitList;
}
int main() {
	cin >> N >> K;
	vl A(N), B(N);
	vll P(N, vl(30));
	for (i = 0; i < N; i++) {
		cin >> A[i] >> B[i];
		P[i] = bitList(2, 30, A[i]);
		reverse(P[i].begin(), P[i].end());
	}
	vl L = bitList(2, 30, K);
	reverse(L.begin(), L.end());
	// 前から何桁目でsmaller確定するかで回す
	for (k = 0; k < 30; k++) {
		if (k!=29 && L[k] == 0) continue;
		vl F(N,1);
		for (i = 0; i < k; i++) {
			if (L[i] == 0) {
				for (j = 0; j < N; j++) {
					if (P[j][i] == 1) F[j] = 0;
				}
			}
		}
		if (!(k == 29 && L[i]==1)) {
			for (j = 0; j < N; j++) {
				if (P[j][k] == 1) F[j] = 0;
			}
		}
		ll pre = 0;
		for (i = 0; i < N; i++) {
			if (F[i]) pre += B[i];
		}
		//debug(pre);
		ans = max(ans, pre);
	}
	cout << ans;
}