#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
using namespace __gnu_pbds;
using namespace std;
typedef tree<
    pair<int, int>,
    null_type,
    less_equal<pair<int, int>>,
    rb_tree_tag,
    tree_order_statistics_node_update>
    ordered_set;
#define int long long
#define double long double
#define all(a) (a).begin(), (a).end()
#define x first
#define y second
#define lb(v, z) lower_bound(all(v), z)
#define ub(v, z) upper_bound(all(v), z)
#define rep(i, a, b) for (int i = (a); i <= (b); i++)
#define rdp(i, a, b) for (int i = (a); i >= (b); i--)
#define rlt(i, a, b) for (int i = (a); i < (b); i++)
#define cns(z) cout << (z) << ' '
#define cnl(z) cout << (z) << '\n'
#define M1 1000000007
#define M2 998244353
#define MAXN 300005
#define INF (1ll << 60)
#define endl "\n"
#define garr(ip)       \
    for (auto &x : ip) \
        cin >> x;
#define parr(ip)          \
    for (auto &x : ip)    \
        cout << x << " "; \
    cout << endl;
#define nl cout << endl
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> vp;

void solve(int testCaseNumber = 1)
{
    int X, Y, A, B, C;
    cin >> X >> Y >> A >> B >> C;
    vi r(A), g(B), c(C);
    garr(r);
    garr(g);
    garr(c);
    sort(all(r), greater<int>());
    sort(all(g), greater<int>());
    rlt(i, 0, X) c.push_back(r[i]);
    rlt(i, 0, Y) c.push_back(g[i]);
    sort(all(c), greater<int>());
    int ans = 0;
    rlt(i, 0, X + Y) ans += c[i];
    cnl(ans);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}