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
const int MAXN = 1e5 + 5;
const double eps = 1e-9;
ll a[MAXN], ans[MAXN];
pll b[MAXN];

int main() {
	int n; ni(n); nal(a, n);
	for (int i = 0; i < n; i++)
		b[i] = mp(a[i], (ll)i);
	b[n] = mp(0, n);
	sort(b, b+n+1);
	ll cur = b[n].se;
	for (int i = n-1; ~i; i--) {
		ans[cur] += (b[i+1].fi - b[i].fi) * (ll)(n-i);
		cur = min(cur, b[i].se);
	}
	for (int i = 0; i < n; i++)
		prl(ans[i]);
    return 0;
}
