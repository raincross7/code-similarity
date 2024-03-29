const int LG = 21;
const int FN = 400005;
const long long MOD = 1e9 + 7;
const long long INF = 1e9;
const long long INFLL = 1e18;

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<ll> vi;

#define forn(i, n) for (int (i) = 0; (i) != (n); (i)++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define popcount(x) __builtin_popcount(x)
#define popcountll(x) __builtin_popcountll(x)
#define fi first
#define se second
#define re return
#define uniq(x) sort(all(x)); (x).resize(unique(all(x)) - (x).begin())

#ifdef LOCAL
#define dbg(x) cerr << __LINE__ << " " << #x << " " << x << endl
#define ln cerr << __LINE__ << endl
#else
#define dbg(x) void(0)
#define ln void(0)
#endif // LOCAL

int cx[4] = {-1, 0, 1, 0};
int cy[4] = {0, -1, 0, 1};

ll inq(ll x, ll y)
{
    if (!y) re 1 % MOD;
    ll l = inq(x, y / 2);
    if (y % 2) re l * l % MOD * x % MOD;
    re l * l % MOD;
}

ll rev(ll x)
{
    return inq(x, MOD - 2);
}

bool __precomputed_combinatorics = 0;
vector<ll> __fact, __ufact, __rev;

void __precompute_combinatorics()
{
    __precomputed_combinatorics = 1;
    __fact.resize(FN);
    __ufact.resize(FN);
    __rev.resize(FN);
    __rev[1] = 1;
    for (int i = 2; i < FN; i++) __rev[i] = MOD - __rev[MOD % i] * (MOD / i) % MOD;
    __fact[0] = 1, __ufact[0] = 1;
    for (int i = 1; i < FN; i++) __fact[i] = __fact[i - 1] * i % MOD, __ufact[i] = __ufact[i - 1] * __rev[i] % MOD;
}

ll fact(int x)
{
    if (!__precomputed_combinatorics) __precompute_combinatorics();
    return __fact[x];
}

ll cnk(int n, int k)
{
    if (k < 0 || k > n) return 0;
    if (!__precomputed_combinatorics) __precompute_combinatorics();
    return __fact[n] * __ufact[n - k] % MOD * __ufact[k] % MOD;
}

pair<int, int> co(string s)
{
    int a = 0, b = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(') b++;
        else b--;
        a = min(a, b);
    }
    return {-a, b - a};
}

bool comp(pair<int, int> a, pair<int, int> b)
{
    int x = a.se - a.fi;
    int y = b.se - b.fi;
    if (x >= 0 && y < 0) return 1;
    if (x < 0 && y >= 0) return 0;
    if (x >= 0 && y >= 0) return a.fi < b.fi;
    return a.se < b.se;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<ll> a(n), b(n), c(n, -1), d(n, -1), e(n), f(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    c[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1]) c[i] = a[i];
    }
    d[n - 1] = b[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (b[i] > b[i + 1]) d[i] = b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (c[i] != -1 && d[i] != -1 && c[i] != d[i]) cout << 0, exit(0);
    }
    ll ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (c[i] == -1 && d[i] == -1) ans = (ans * min(a[i], b[i])) % MOD;
    }
    e[0] = max(c[0], d[0]);
    for (int i = 1; i < n; i++)
    {
        e[i] = max(e[i - 1], c[i]);
        e[i] = max(e[i], d[i]);
    }
    f[n - 1] = max(c[n - 1], d[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        f[i] = max(f[i + 1], c[i]);
        f[i] = max(f[i], d[i]);
    }
    if (a != e || b != f) cout << 0, exit(0);
    cout << ans;
}

/* Note:
Check constants at the beginning of the code.
    N is set to 4e5 but be careful in problems with large constant factor.
    Setting N in every problem is more effective.
Check corner cases.
    N = 1
No def int long long for now.
Add something here.
*/
