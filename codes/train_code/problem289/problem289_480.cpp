//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define pb push_back
#define F first
#define S second
#define ins insert
#define mp make_pair
#define fo(i, n1, n, x) for(int i = n1; i <= n; i += x)
#define foo(i, n, n1, x) for(int i = n; i >= n1; i -= x)
#define bit __builtin_popcount
#define md (l + ((r - l) / 2))
#define all(x) x.begin(),x.end()
#define eb emplace_back
#define ub upper_bound
#define lb lower_bound
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define file(s) if (fopen(s".in", "r")) freopen(s".in", "r", stdin), freopen(s".out", "w", stdout)

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef long double ld;

const int N = 2e5 + 11, mod = 1e9 + 7, mod2 = 998244353;
const ll MAX = 1e15 + 11;
const int INF1 = 2e9 + 11;
const ll INF2 = 2e18 + 11;
const double INF3 = 1e8 + 11;
const int base = 500;
const int P = 31;
const int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
const int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};
const double EPS = 1e-4;
const double PI = acos(-1.0);


template<typename T> using ordered_set = tree <T, null_type, less <T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T1, typename T2> inline void chmin(T1 &a, T2 b) { if (a > b) a = b; }
template<typename T1, typename T2> inline void chmax(T1 &a, T2 b) { if (a < b) a = b; }


#define int ll

typedef pair <int, int> pii;
typedef pair <ll, ll> pll;


mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int m, k;
main() {
    file("rmq");
    ios;
    cin >> m >> k;
    if ((1 << m) - 1 < k) return !(cout << -1);
    if (k == 0) {
        for (int mask = 0; mask < (1 << m); ++mask) {
            cout << mask << " " << mask << " ";
        }
        return 0;
    }
    vector <int> v;
    int x = 0;
    for (int mask = 0; mask < (1 << m); ++mask) {
        v.eb(mask);
        if (mask != k) x ^= mask;
    }
    if (x != k) return !(cout << -1);
    for (int it : v) if (it != k) cout << it << " ";
    cout << k << " ";
    reverse(all(v));
    for (int it : v) if (it != k) cout << it << " ";
    cout << k;
    return 0;
}
/**

*/
