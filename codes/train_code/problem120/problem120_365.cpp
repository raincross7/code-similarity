//#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/rope>
#define mem(a,v) memset((a), (v), sizeof (a))
#define enl printf("\n")
#define case(t) printf("Case #%d: ", (t))
#define ni(n) scanf("%d", &(n))
#define nl(n) scanf("%lld", &(n))
#define nai(a, n) for (int i = 0; i < (n); i++) ni(a[i])
#define nal(a, n) for (int i = 0; i < (n); i++) nl(a[i])
#define pri(n) printf("%d\n", (n))
#define prl(n) printf("%lld\n", (n))
#define pii pair<int, int>
#define pil pair<int, long long>
#define pll pair<long long, long long>
#define vii vector<pii>
#define vil vector<pil>
#define vll vector<pll>
#define vi vector<int>
#define vl vector<long long>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef cc_hash_table<int,int,hash<int>> ht;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> oset;
const double pi = acos(-1);
const int MOD = 1e9 + 7;
const int INF = 1e9 + 7;
const int MAXN = 1e6 + 5;
const double eps = 1e-9;
vi adj[MAXN];
int mrk[MAXN];

void dfs(int u, int p) {
	for (int v: adj[u]) {
		if (v != p)
			dfs(v, u);
	}
	if (!mrk[p] && !mrk[u])
		mrk[u] = p, mrk[p] = u;
}

int main() {
	int n; ni(n);
	for (int i = 1; i < n; i++) {
		int u, v; scanf("%d %d", &u, &v);
		adj[u].pb(v);
		adj[v].pb(u);
	}
	dfs(1, 0);
	for (int i = 1; i <= n; i++)
		if (!mrk[i])
			return !printf("First\n");
	printf("Second\n");
    return 0;
}
