#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

vector<vector<int> > G(2e5 + 1);
vector<int> res(2e5 + 1);

void dfs(int i, int p) {
	for (int x : G[i]) {
		if (x == p) continue ;
		res[x] += res[i];
		dfs(x, i);
	}
}

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n, q; cin >> n >> q;
	REP(i, n - 1) {
		int a, b; cin >> a >> b;
		G[--a].push_back(--b);
		G[b].push_back(a);
	}
	REP(i, q) {
		int p, x; cin >> p >> x;
		res[--p] += x;
	}
	dfs(0, 0);
	REP(i, n) cout << res[i] << " ";
	return 0;
}