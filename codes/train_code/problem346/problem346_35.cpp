
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define fo(i,n)         for(i=0;i<n;i++)
#define Fo(i,k,n)       for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x)          cout << #x << "=" << x << endl
#define deb2(x, y)      cout << #x << "=" << x << "," << #y << "=" << y << endl
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            int x; cin>>x; while(x--)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

const int N = 3e5, M = N;
//=======================

vi g[N];

void solve() {
	int i, j, n, m;
	cin >> n >> m;
	int b; cin >> b;
	int row[n ], col[m ];
	fo(i, n) {
		row[i] = 0;
		// deb(row[i]);
	}
	fo(i, m) col[i] = 0;
	set<pii> points;
	int u, v;
	fo(i, b) {
		cin >> u >> v;
		u--;
		v--;
		row[u]++; col[v]++;
		points.insert({u, v});
	}
	vi max_rows;
	vi max_cols;
	int mx = INT_MIN;
	fo(i, n) {
		// deb2(i, row[i]);
		if (row[i] > mx) {
			max_rows.clear();
			max_rows.pb(i);
			mx = row[i];
		}
		else if (row[i] == mx) {
			max_rows.pb(i);
		}
	}
	int ans = mx;
	mx = INT_MIN;
	fo(i, m) {
		// deb2(i, col[i]);
		if (col[i] > mx) {
			max_cols.clear();
			max_cols.pb(i);
			mx = col[i];
		}
		else if (col[i] == mx) {
			max_cols.pb(i);
		}
	}
	ans += mx;
	// deb2(max_rows.size(), max_cols.size());
	for (int r : max_rows) {
		for (int c : max_cols) {
			if (points.find({r, c}) == points.end()) {
				cout << ans << "\n";
				return;
			}
		}
	}
	cout << ans - 1 << "\n";
}

int32_t main()
{
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solve();
	return 0;
}

void ipgraph(int n, int m) {
	int i, u, v;
	while (m--) {
		cin >> u >> v;
		u--, v--;
		g[u].pb(v);
		g[v].pb(u);
	}
}

void dfs(int u, int par) {
	for (int v : g[u]) {
		if (v == par) continue;
		dfs(v, u);
	}
}