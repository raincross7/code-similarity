#include <algorithm>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;
using LLONG = long long;
const LLONG MOD = 1000000007;

class ModCalc
{
    LLONG m_mod = MOD;
    vector<LLONG> m_fac;
    vector<LLONG> m_ifac;

public:
    ModCalc(const LLONG mod)
    {
        m_mod = mod;
    }

    // Combinationを計算したいときの前処理：O(max)
    ModCalc(const int max, const LLONG mod)
    {
        m_mod = mod;
        m_fac = vector<LLONG>(max + 1);
        m_ifac = vector<LLONG>(max + 1);
        m_fac[0] = m_ifac[0] = 1;
        for (int i = 0; i < max; ++i)
        {
            m_fac[i + 1] = m_fac[i] * (i + 1) % mod;    // n! (mod M)
            m_ifac[i + 1] = m_ifac[i] * ModPow(i + 1, mod - 2) % mod;   // k!^(M-2) (mod M)
        }
    }

    const LLONG ModAdd(LLONG a, LLONG b) const
    {
        return (a + b) % m_mod;
    }

    const LLONG ModSubtract(LLONG a, LLONG b) const
    {
        LLONG diff = a - b;
        return diff >= 0 ? diff : diff + m_mod;
    }

    const LLONG ModMulti(LLONG a, LLONG b) const
    {
        LLONG prod = a * b % m_mod;
        return prod >= 0 ? prod : prod + m_mod;
    }

    const LLONG ModDiv(LLONG a, LLONG b) const
    {
        LLONG c = m_mod, u = 1, v = 0;
        while (c)
        {
            LLONG t = b / c;
            b -= t * c; swap(b, c);
            u -= t * v; swap(u, v);
        }
        u %= m_mod;
        if (u < 0) u += m_mod;
        return (a % m_mod) * u % m_mod;
    }

    const LLONG ModPow(LLONG x, LLONG n) const
    {
        LLONG ret = 1;
        while (n != 0)
        {
            if (n & 1) ret = ret * x % m_mod;
            x = x * x % m_mod;
            n = n >> 1;
        }
        return ret;
    }

    const LLONG ModComb(LLONG n, LLONG r) const
    {
        if (n == 0 && r == 0) return 1;
        if (n < r || n < 0) return 0;
        LLONG tmp = m_ifac[n - r] * m_ifac[r] % m_mod;
        return tmp * m_fac[n] % m_mod;
    }
};

int main()
{
    int N; string S; cin >> N >> S;
    map<char, LLONG> char2NumMap;
    for (int i = 0; i < N; ++i)
    {
        ++char2NumMap[S[i]];
    }
    LLONG ans = 1;
    ModCalc mod(MOD);
    for (const auto &kvp : char2NumMap)
    {
        LLONG tmp = kvp.second + 1;
        ans = mod.ModMulti(ans, tmp);
    }
    ans = mod.ModSubtract(ans, 1);
    cout << ans << endl;
}
