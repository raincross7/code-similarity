#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cstring>
#include <math.h>
#include <bitset>
#include <queue>
#include <set>
#include <iomanip>
#include <math.h>
#include <assert.h>
// #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
constexpr long long int INFLL = 1001001001001001LL;
constexpr long long int infll = 1001001001001001LL;
constexpr int INF = 1000000007;
constexpr int inf = 1000000007;
const int mod = 1000000007;

template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}

ll gcd(ll a, ll b)
{
    if (a % b == 0)
    {
        return (b);
    }
    else
    {
        return (gcd(b, a % b));
    }
}

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}

inline double nCr(const int n, int r)
{

    if (n == 0)
    {
        return 0;
    }
    if (r == 0)
    {
        return 1;
    }
    if (r == 1)
    {
        return n;
    }
    if (n == r)
    {
        return 1;
    }

    if (r > n / 2)
    {
        r = n / 2;
    }

    double result = 1;
    for (double i = 1; i <= r; i++)
    {
        result *= (n - i + 1) / i;
    }

    return (result);
}

//----------------------------------------------------------------

int main()
{
    ll n, m;
    cin >> n >> m;
    if (n >= 2 && m >= 2)
    {
        cout << (n - 2) * (m - 2) << endl;
    }
    else if (n == 1 && m == 1)
    {
        cout << "1" << endl;
    }
    else if (n == 1)
    {
        cout << m - 2 << endl;
    }
    else if (m == 1)
    {
        cout << n - 2 << endl;
    }
}
