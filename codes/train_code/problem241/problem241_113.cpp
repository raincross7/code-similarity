#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <random>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;

typedef
tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> orderedSet;

#define pb push_back
#define F first
#define S second
#define all(a) (a).begin(), (a).end()

#define for1(i0, l0, r0) for (int i0 = l0; i0 < r0; ++i0)
#define for2(i0, l0, r0) for (int i0 = l0; i0 <= r0; ++i0)
#define forn(i0, n0) for (int i0 = 0; i0 < n0; ++i0)
#define forn1(i0, n0) for (int i0 = 1; i0 < n0; ++i0)
#define forr(i0, n0) for (int i0 = n0; i0 >= 0; --i0)
#define forr1(i0, r0, l0) for (int i0 = r0; i0 > l0; --i0)
#define forr2(i0, r0, l0) for (int i0 = r0; i0 >= l0; --i0)

#define Sort(a) sort(all(a))
#define Reverse(a) reverse(all(a))

typedef long double ld;
#define ui unsigned int
#define ull unsigned long long

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef pair<string, string> pss;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<double> vd;
typedef vector<ld> vld;
typedef vector<bool> vb;
typedef vector<string> vs;

typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<pdd> vpdd;

typedef vector<vi> vvi;
typedef vector<vd> vvd;
typedef vector<vll> vvll;
typedef vector<vb> vvb;

#define vpss vector<pss>
#define vvs vector<vs>
#define vvpii vector<vpii>
#define vvpll vector<vpll>
#define vpt vector<pt>
#define vvvi vector<vvi>
#define vsi vector<set<int>>
#define ss second
#define ff first

#define printvi(arr) for (int x0 : arr) cout << x0 << ' '; cout << '\n';
#define printvll(arr) for (ll x0 : arr) cout << x0 << ' '; cout << '\n';
#define printpair(pair0) cout << pair0.F << ' ' << pair0.S << '\n';
#define printvp(arr) for (auto pair0 : arr) printpair(pair0);
#define initArray(arr, N0, X0) memset(arr, X0, N0 * sizeof(int))
//mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void init() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout.precision(16);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
}

void solve() {
    int n;
    cin >> n;
    vi l(n), r(n);
    vi a(n), b(n);
    forn(i, n) cin >> a[i];
    forn(i, n) cin >> b[i];
    l[0] = r[0] = a[0];
    forn1(i, n){
        if (a[i] > a[i - 1]){
            l[i] = r[i] = a[i];
        } else {
            l[i] = 1;
            r[i] = a[i];
        }
    }
    l[n - 1] = max(l[n - 1], b[n - 1]);
    r[n - 1] = min(r[n - 1], b[n - 1]);
    forr(i, n - 2){
        if (b[i] > b[i + 1]){
            l[i] = max(l[i], b[i]);
            r[i] = min(r[i], b[i]);
        } else {
            r[i] = min(r[i], b[i]);
        }
    }
    ll ans = 1;
    ll mod = 1e9 + 7;
    forn(i, n){
        ll x = max(0, r[i] - l[i] + 1);
        ans = (ans * x) % mod;
    }
    cout << ans << '\n';
}

bool multitest = false;

int main() {
    init();
    int t = 1;
    if (multitest) cin >> t;
    forn(i, t) solve();
}