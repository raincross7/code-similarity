/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author rahdirigs
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


template <typename T> void add(T& a, T b, int mod) {
	a += b;
	if (a >= mod)
		a -= mod;
}

template <typename T> void mul(T& a, T b, int mod) {
	a = a * b % mod;
}

const int mod = 1e9 + 7, mxN = 1e5 + 5;

ll dp[mxN][2];

class TaskP {
public:
	int N;
	vector<int> adj[mxN];

	void solve(std::istream& in, std::ostream& out) {
		in >> N;
		for (int i = 0; i < N - 1; i++) {
			int u, v;
			in >> u >> v;
			u--, v--;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		memset(dp, -1, sizeof(dp));
		ll ans = rec(0, -1, 0);
		out << ans;
	}

	ll rec(int u, int p, int col) {
		if (dp[u][col] != -1) return dp[u][col];
		ll ways = 1, tot = 0;
		if (col == 0) {
			for (int v : adj[u]) {
				if (v == p) continue;
				mul(ways, rec(v, u, 1), mod);
			}
			add(tot, ways, mod);
		}
		ways = 1;
		for (int v : adj[u]) {
			if (v == p) continue;
			mul(ways, rec(v, u, 0), mod);
		}
		add(tot, ways, mod);
		return dp[u][col] = tot;
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	TaskP solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
