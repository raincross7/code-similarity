//↓template↓

#include "bits/stdc++.h"
using namespace std;
#define Would
#define you
#define all(n)  n.begin(),n.end()
const long long INF = 1e18;
const long long MOD = 1e9 + 7;
const double pi = acos(-1);
const int SIZE = 1 << 17;
int dx[] = { 1,0,-1,0 }, dy[] = { 0,1,0,-1 }, alp[30];
long long fac[200005], finv[200005], inv[200005];
vector<long long>dij;
struct edge { long long to, cost; };
vector<vector<edge> >G;

long long mod_pow(long long a, long long b) {
	long long res = 1;
	while (b) {
		if (b & 1) { res = res * a%MOD; }
		a = a * a%MOD;
		b >>= 1;
	}
	return res;
}

void addedge(int from, int to, int cost) {
	G[from].push_back({ to,cost });
	G[to].push_back({ from,cost });
}

//↑template↑

long long n, a, b, c;
int main() {
	cin >> n;
	while (b < n) {
		++a;
		b += a;
	}
	c = b - n;

	for (int i = 1; i <= a; ++i) {
		if (i != c) { cout << i << endl; }
	}
}