// By Hacheylight

#include <map>
#include <set>
#include <ctime>
#include <queue>
#include <stack>
#include <cmath>
#include <vector>
#include <bitset>
#include <cstdio>
#include <cctype>
#include <string>
#include <numeric>
#include <cstring>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std ;
//#define int long long
#define rep(i, a, b) for (int i = (a); i <= (b); i++)
#define per(i, a, b) for (int i = (a); i >= (b); i--)
#define loop(it, v) for (auto it = v.begin(); it != v.end(); it++)
#define cont(i, x) for (int i = head[x]; i; i = e[i].nxt)
#define clr(a) memset(a, 0, sizeof(a))
#define ass(a, sum) memset(a, sum, sizeof(a))
#define lowbit(x) (x & -x)
#define all(x) x.begin(), x.end()
#define SC(t, x) static_cast <t> (x)
#define ub upper_bound
#define lb lower_bound
#define pqueue priority_queue
#define mp make_pair
#define pb push_back
#define pof pop_front
#define pob pop_back
#define fi first
#define se second
#define y1 y1_
#define Pi acos(-1.0)
#define iv inline void
#define enter cout << endl
#define siz(x) ((int)x.size())
#define file(x) freopen(x".in", "r", stdin),freopen(x".out", "w", stdout)
typedef long double ld ;
typedef long long ll ;
typedef unsigned long long ull ;
typedef pair <int, int> pii ;
typedef pair <ll, int> pli ;
typedef vector <int> vi ;
typedef vector <pii> vii ;
typedef vector <vi> vvi ;
typedef queue <int> qi ;
typedef queue <pii> qii ;
typedef set <int> si ;
typedef map <int, int> mii ;
typedef map <string, int> msi ;
typedef map <ll, int> mli ;
const int N = 100010 ;
const int INF = 0x3f3f3f3f ;
const int iinf = 1 << 30 ;
const ll linf = 2e18 ;
const int mod = 1000000007 ;
const double eps = 1e-7 ;
void douout(double x){ printf("%lf\n", x + 0.0000000001) ; }
template <class T> void print(T a) { cout << a << endl ; exit(0) ; }
template <class T> void chmin(T &a, T b) { if (a > b) a = b ; }
template <class T> void chmax(T &a, T b) { if (a < b) a = b ; }
void add(int &a, int b) { a = a + b < mod ? a + b : a + b - mod ; }
void sub(int &a, int b) { a = (a - b + mod) % mod ; }
void mul(int &a, int b) { a = (ll) a * b % mod ; }
int addv(int a, int b) { return (a += b) >= mod ? a -= mod : a ; }
int subv(int a, int b) { return (a -= b) < 0 ? a += mod : a ; }
int mulv(int a, int b) { return (ll) a * b % mod ; }
int read() {
    int f = 1, x = 0 ;
    char ch = getchar() ;
    while (!isdigit(ch)) { if (ch == '-') f = -1 ; ch = getchar() ; }
    while (isdigit(ch)) { x = x * 10 + ch -'0' ; ch = getchar() ; }
    return x * f ;
}
int pw(int a, int b) {
	int s = 1 ;
	for (; b; b >>= 1, a = (ll) a * a % mod)
    if (b & 1) s = (ll) s * a % mod ;
    return s ;
}

int n ;
vector <ll> d ;
vi v[N] ;
vii ed ;
mli hsh ;
int sz[N], vis[N], cnt[N] ;
ll dp[N] ;

void dfs(int b, int prv = -1) {
	cnt[b]++ ;
	vis[b] = true ;
	for (int go : v[b]) {
		if (go == prv) continue ;
		if (vis[go]) print(-1) ;
		dfs(go, b) ;
		dp[b] += dp[go] + cnt[go] ;
		cnt[b] += cnt[go] ;
	}
}

ll ans[N] ;

void dfs2(int b, int prv = -1, ll weight = 0) {
	ans[b] = dp[b] + weight ;
	weight += dp[b] ;
	for (int go : v[b]) {
		if (go == prv) continue ;
		dfs2(go, b, weight - dp[go] - cnt[go] + (n - cnt[go])) ;
	}
}

signed main() {
	cin >> n ;
	rep(i, 0, n - 1) {
		ll a ; cin >> a ;
		d.pb(a) ; hsh[a] = i ;
	}
	for (auto it = hsh.rbegin(); it != hsh.rend(); it++) {
		int node = it->se ; ll val = it->fi ;
		sz[node]++ ;
		ll op = n - sz[node] ;
		if (op == 0) continue ;
		ll nxt = val + sz[node] - op ;
		if (hsh.count(nxt)) {
			int ne = hsh[nxt] ;
			sz[ne] += sz[node] ;
			v[ne].pb(node) ;
			v[node].pb(ne) ;
			if (ne > node) swap(ne, node) ;
			ed.pb(mp(ne + 1, node + 1)) ;
		}
	}
	dfs(0) ;
	dfs2(0) ;
	rep(i, 0, n - 1) if (ans[i] != d[i] || vis[i] == false) print(-1) ;
	loop(it, ed) printf("%d %d\n", it->fi, it->se) ;

	return 0 ;
}

