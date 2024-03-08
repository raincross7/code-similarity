#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>
#include <sstream>
#include <stack>
#include <iomanip>
#include <numeric>
#include <queue>
#include <climits>
#include <bitset>
#include <set>
#include <complex>
#include <cmath>
#include <cstring>
#include <map>
using namespace std;
using ll = long long;
using ppp = pair<pair<int, int>, pair<int, int>>;
#define MOD 1000000007
#define INF 1LL << 59
const int MAX = 510000;
const long long mod = 917120411LL;

long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit()
{
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++)
    {
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
long long COM(int n, int k)
{
    if (n < k)
        return 0;
    if (n < 0 || k < 0)
        return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int sieve[1000010];
void make_sieve()
{
    for (int i = 0; i < 1000010; ++i)
        sieve[i] = true;
    sieve[0] = sieve[1] = false;
    for (int i = 0; i * i < 1000010; ++i)
    {
        if (sieve[i])
        {
            for (int j = 2; j * i < 1000010; ++j)
            {
                sieve[i * j] = false;
            }
        }
    }
}

ll GCD(ll a, ll b)
{
    if (a < b)
        swap(a, b);
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}
ll pow_mod(ll x, ll n)
{
    ll res = 1;
    while (n)
    {
        if (n & 1)
        {
            res = res * x;
        }
        x = x * x;
        n >>= 1;
    }
    return res;
}

int p[200010];
int a[20010] = {0};
int b[20010] = {0};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> p[i];
        p[i]--;
    }

    for (int i = 0; i < N; ++i)
    {
        a[i] = 1 + i * 30000;
        b[N - i - 1] = 1 + i * 30000;
    }

    for (int i = 0; i < N; ++i)
    {
        a[p[i]] += i;
    }

    for (int i = 0; i < N; ++i)
    {
        if (i)
            cout << " ";
        cout << a[i];
    }
    cout << endl;
    for (int i = 0; i < N; ++i)
    {
        if (i)
            cout << " ";
        cout << b[i];
    }
    return 0;
}
