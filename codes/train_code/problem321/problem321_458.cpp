#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<int>;

// 1 2 1  1 2 1  1 2 1

//     1 2 1
// l   0 1 0
// r   0 1 0

// 1 : r(i) * k + l(i) * (k - 1)
// 2 : r(i) * (k - 1) + l(i) * (k - 2)
// 3 : r(i) * (k - 2) + l(i) * (k - 3)

int const MOD = 1e9 + 7;

inline ll add(ll a, ll b) { return ((a % MOD) + (b % MOD)) % MOD; }
inline ll mult(ll a, ll b) { return ((a % MOD) * (b % MOD)) % MOD; }

int solve(int n, ll k, vi a)
{
    vi l(n, 0), r(n, 0);
    for (int i = 0; i < n; ++i)
    {
        for (int j = i - 1; j >= 0; --j)
        {
            l[i] += (a[j] < a[i]);
        }
        for (int j = i + 1; j < n; ++j)
        {
            r[i] += (a[j] < a[i]);
        }
    }

    ll ans   = 0;
    ll sumk  = (k * (k + 1)) / 2;
    ll sumk1 = sumk - k;
    for (int i = 0; i < n; ++i)
    {
        ans = add(ans, add(mult(r[i], sumk), mult(l[i], sumk1)));
    }

    return ans;
}

int main(void)
{
    int n, k;
    vi  a;
    cin >> n >> k;
    a.resize(n);

    for (auto &ai : a)
        cin >> ai;

    cout << solve(n, k, a) << endl;

    return 0;
}
