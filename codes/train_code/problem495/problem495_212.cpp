#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pa pair<int, int>
#define pal pair<long long, long long>
#define pali pair<long long, int>
#define pad pair<double, double>
#define pb push_back
#define mp make_pair
#define COUT(v)                              \
    for (int64_t i = 0; i < (v).size(); ++i) \
    {                                        \
        cout << v.at(i) << endl;             \
    }
#define REP(i, n) for (int64_t i = 0; i < n; ++i)
#define FOR(i, r, n) for (int64_t i = (r); i < n; ++i)
#define VIN(v)                               \
    for (int64_t i = 0; i < (v).size(); ++i) \
    {                                        \
        cin >> (v).at(i);                    \
    }

typedef vector<bool> bvec;
typedef vector<int> ivec;
typedef vector<long long> lvec;
typedef vector<double> dvec;
typedef vector<pa> pavec;
typedef vector<pali> palivec;
typedef vector<pal> palvec;

typedef vector<vector<bool>> bmat;
typedef vector<vector<int>> imat;
typedef vector<vector<long long>> lmat;

typedef vector<string> svec;
typedef vector<vector<string>> smat;
const ll infll = (1LL << 60) - 1;
const int inf = (1 << 30) - 1;
const ll MOD = 1000000007;

ll gcd(ll x, ll y)
{
    ll r = x % y;
    if (r == 0)
        return y;
    else
        return gcd(y, r);
}

ll lcm(ll x, ll y)
{
    return x * y / gcd(x, y);
}

lvec mfactor(ll n)
{
    bvec ip(n, true);
    lvec mf(n, -1);
    ip[0] = false;
    ip[1] = false;
    mf[0] = 0;
    mf[1] = 1;
    REP(i, n)
    {
        if (ip[i])
        {
            mf[i] = i;
            for (ll j = i * i; j < n; j += i)
            {
                ip[j] = false;
                if (mf[j] == -1)
                    mf[j] = i;
            }
        }
    }
    return mf;
}

palivec get_prime(ll n, const lvec &mf)
{
    palivec plist;
    while (n != 1)
    {
        int cnt = 0;
        ll m = mf[n];
        while (mf[n] == m)
        {
            cnt++;
            n /= m;
        }
        plist.pb(pali(m, cnt));
    }
    return plist;
}

void COMinit(int m, lvec &fac, lvec &finv)
{
    lvec inv(m);
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < m; i++)
    {
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

ll pow_mod(ll a, ll n)
{
    ll x = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            x = x * a % MOD;
        }
        a = a * a % MOD;
        n >>= 1;
    }
    return x;
}

ll pow_mod2(ll a, ll n)
{
    ll x = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            x = x * a;
        }
        a = a * a;
        n >>= 1;
    }
    return x;
}

ll COM(int n, int k, const lvec &fac, const lvec &finv)
{
    if (n < k)
        return 0;
    if (n < 0 || k < 0)
        return 0;
    return (fac[n] * (finv[k] * finv[n - k] % MOD)) % MOD;
}

ll modinv(ll a, ll m)
{
    ll b = m, u = 1, v = 0;
    while (b)
    {
        ll t = a / b;
        a -= t * b;
        swap(a, b);
        u -= t * v;
        swap(u, v);
    }
    u %= m;
    if (u < 0)
        u += m;
    return u;
}

// union by size + path having
class UnionFind
{
public:
    vector<ll> par;
    vector<ll> siz;

    // Constructor
    UnionFind(ll sz_) : par(sz_), siz(sz_, 1LL)
    {
        for (ll i = 0; i < sz_; ++i)
            par[i] = i;
    }
    void init(ll sz_)
    {
        par.resize(sz_);
        siz.assign(sz_, 1LL);
        for (ll i = 0; i < sz_; ++i)
            par[i] = i;
    }

    // Member Function
    // Find
    ll root(ll x)
    {
        while (par[x] != x)
        {
            x = par[x] = par[par[x]];
        }
        return x;
    }

    // Union(Unite, Merge)
    bool merge(ll x, ll y)
    {
        x = root(x);
        y = root(y);
        if (x == y)
            return false;
        if (siz[x] < siz[y])
            swap(x, y);
        siz[x] += siz[y];
        par[y] = x;
        return true;
    }

    bool issame(ll x, ll y)
    {
        return root(x) == root(y);
    }

    ll size(ll x)
    {
        return siz[root(x)];
    }
};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n;
    lvec abc(3);
    cin >> n >> abc[0] >> abc[1] >> abc[2];
    lvec l(n), div(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    function<ll(lvec &, ll)> calc = [&](lvec &m, ll s) {
        ll len = m.size();
        ll res = 1000;
        for (int i = 1; i < (1 << len); i++)
        {
            ll sum = 0;
            ll cnt = 0;
            for (int j = 0; j < len; j++)
            {
                if ((i >> j) & 1)
                {
                    sum += l[m[j]];
                    ++cnt;
                }
            }
            if (cnt)
            {
                res = min(res, abs(s - sum) + 10 * (cnt - 1));
            }
        }
        return res;
    };

    ll ans = 10000;
    function<void(ll)>
        dfs = [&](int d) {
            if (d == n)
            {
                lvec a, b, c;
                ll ca = 0, cb = 0, cc = 0;
                for (int i = 0; i < n; i++)
                {

                    if (div[i] == 0)
                    {
                        a.pb(i);
                        ++ca;
                    }
                    else if (div[i] == 1)
                    {
                        b.pb(i);
                        ++cb;
                    }
                    else if (div[i] == 2)
                    {
                        c.pb(i);
                        ++cc;
                    }
                }

                if (!ca || !cb || !cc)
                {
                    return;
                }
                ll res = 0;
                res += calc(a, abc[0]);
                res += calc(b, abc[1]);
                res += calc(c, abc[2]);
                ans = min(ans, res);
                return;
            }
            for (int i = 0; i < 4; i++)
            {
                div[d] = i;
                dfs(d + 1);
            }
        };
    dfs(0);
    cout << ans << endl;
}