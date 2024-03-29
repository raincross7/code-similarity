#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <climits>
#include <bitset>
#include <cmath>
#include <queue>
#include <set>

using namespace std;
using ll = long long int;
const ll MOD = 1e9 + 5;

ll mod_pow(ll k, ll p)
{
    if (k == 0)
    {
        return 1 % p;
    }
    if (k == 1)
    {
        return 2 % p;
    }

    if (k % 2 == 0)
    {
        ll tmp = mod_pow(k / 2, p);
        return tmp * tmp % p;
    }
    else
    {
        ll tmp = mod_pow((k - 1) / 2, p);
        tmp *= tmp;
        tmp %= p;
        tmp *= 2;
        tmp %= p;
        return tmp;
    }
}

ll pow_fast(ll n, ll k)
{
    if (k == 0)
    {
        return 1;
    }
    if (k == 1)
    {
        return n;
    }

    if (k % 2 == 0)
    {
        ll tmp = pow_fast(n, k / 2) % MOD;
        return tmp * tmp % MOD;
    }
    else
    {
        ll tmp = pow_fast(n, (k - 1) / 2);
        return tmp * tmp * n;
    }
}
map<ll, ll> sosuu(ll n)
{
    map<ll, ll> mp;
    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            n /= i;
            mp[i] += 1;
        }
    }
    if (n != 1)
    {
        mp[n] += 1;
    }
    return mp;
}

int main()
{
    ll N;
    cin >> N;

    cout <<  (N) * (N - 1) /2  << endl;
}