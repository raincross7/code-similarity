#include <iostream>
#include <sstream>
#include <regex>
#include <cstdio>
#include <cmath>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>

using namespace std;
using ll = long long int;
#define rep(i,n) for(int i = 0; i < n; i++)
#define FOR(i, a, b)  for(int i = (a); i < (b) ; i++)
#define pb push_back
#define SORT(v,n) sort(v, v+n)
#define ALL(x) (x).begin(),(x).end()
#define debug(x) cerr << #x << ": " << x << '\n'
#define elif else if
#define itn ll
#define int ll
//const int INF = 100100100;
const int INF = (1LL<<32);
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
int dx[8] = { 1, 0, -1, 0, 1, -1, -1, 1 };
int dy[8] = { 0, 1, 0, -1, 1, 1, -1, -1 };
typedef vector<vector<int>> vvi;
typedef vector<vector<vector<int>>> vvvi;

static const int MAX = 100000;

int N;
list<int>  out;
bool bV[MAX];
vector<int> G[MAX];

void dfs(int u) {
	bV[u] = true;
	rep(i, G[u].size()) {
		int v = G[u][i];
		if (!bV[v])
			dfs(v);
	}
	out.push_front(u);
}

signed main() {
	ios::sync_with_stdio(false);
	int s, t, M;
	cin >> N >> M;
	rep(i, N) bV[i] = false;
	rep(i, M) {
		cin >> s >> t;
		G[s].pb(t);
	}
	rep(i, N) {
		if (!bV[i]) dfs(i);
	}
	for (list<int>::iterator it = out.begin(); it != out.end(); it++) {
		cout << *it << endl;
	}
	//cin >> V >> E;
	//rep(i, E) {
	//	int s, t;
	//	cin >> s >> t;
	//	G[s].pb(t);
	//}
	//rep(u, V) bV[u] = false;
	//rep(i, V) {
	//	if (!bV[i])
	//		dfs(i);
	//}
	//for (auto l : out)
	//	cout << l << '\n';
	return 0;
}


