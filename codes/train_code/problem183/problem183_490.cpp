#include <bits/stdc++.h>
#define int long long
#define FLASH                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

const int MAX = 3000000;
const int P = 1000000007;
long long fac[MAX], finv[MAX], inv[MAX];

void COMBinit()
{
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++)
    {
        fac[i] = fac[i - 1] * i % P;
        inv[i] = P - inv[P % i] * (P / i) % P;
        finv[i] = finv[i - 1] * inv[i] % P;
    }
}

int COMB(int n, int k)
{
    if (n < k)
        return 0;
    if (n < 0 || k < 0)
        return 0;
    return fac[n] * (finv[k] * finv[n - k] % P) % P;
}

signed main()
{
    COMBinit();
    int X, Y;
    cin >> X >> Y;
    int K = X + Y;
    if (K % 3 != 0)
        return cout << 0, 0;
    int n = (2*Y - X) / 3;
    int m = (2*X - Y) / 3;
    if (n < 0 || m < 0)
        return cout << 0, 0;
    cout << COMB(n+m, n);
    return 0;
}