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
#include <assert.h>
#include <cstdio>
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

template <typename T>
T seinomi(T a)
{
    if (a > 0)
    {
        return a;
    }
    else
    {
        return 0;
    }
}

//連想配列[素因数f.first][個数f.second]
template <typename T>
map<T, T> soinsuubunkai(T n)
{
    map<T, T> ret;
    for (T i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            ret[i]++;
            n /= i;
        }
    }
    if (n != 1)
        ret[n] = 1;
    return ret;
}

//桁数取得
template <typename T>
T ketasuu(T num)
{
    return std::to_string(num).length();
}

//階乗
ll kaizyou(ll k)
{
    ll sum = 1;
    for (ll i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

//階乗を(10^9)+7で割った余り
ll modkaizyou(ll k)
{
    ll sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
        sum = sum % mod;
    }
    return sum;
}

template <class ForwardIt, class T>
void iota(ForwardIt first, ForwardIt last, T value)
{
    while (first != last)
    {
        *first++ = value;
        ++value;
    }
}

//整数乗
int llpow(ll a, ll n)
{ //aのn乗を計算します。
    ll x = 1;
    while (n > 0)
    { //全てのbitが捨てられるまで。
        if (n & 1)
        { //1番右のbitが1のとき。
            x = x * a;
        }
        a = a * a;
        n >>= 1; //bit全体を右に1つシフトして一番右を捨てる。
    }
    return x;
}

long long modpow(long long a, long long n, long long mod)
{
    long long res = 1;
    while (n > 0)
    {
        if (n & 1)
            res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

template <typename T>
T amarinasi(T a, T b)
{
    if (a % b == 0)
    {
        return a / b;
    }
    else if (a % b > 0)
    {
        return a / b + 1;
    }
    else
    {
        return a / b - 1;
    }
}

//組み合わせ nCr
vector<vector<ll>> nCr_v(5010, vector<ll>(5010, 0));
bool nCr_maekeisan = false;
void nCr_Calculater()
{
    for (int i = 0; i < nCr_v.size(); i++)
    {
        nCr_v[i][0] = 1;
        nCr_v[i][i] = 1;
    }
    for (int k = 1; k < nCr_v.size(); k++)
    {
        for (int j = 1; j < k; j++)
        {
            nCr_v[k][j] = (nCr_v[k - 1][j - 1] + nCr_v[k - 1][j]);
        }
    }
}
ll nCr(ll n, ll r)
{
    if (n > 5010 || n < 0 || r > 5010 || r < 0)
    {
        cout << "Error!! n or r is over 5010 or under 0" << endl;
        return 1;
    }
    else
    {
        if (nCr_maekeisan == false)
        {
            nCr_Calculater();
            nCr_maekeisan = true;
        }
        return nCr_v[n][r];
    }
}

// 組み合わせnCrを1000000007で割った余り
vector<ll> modnCr_fac(1000010), modnCr_finv(1000010), modnCr_inv(1000010);
bool modnCr_maekeisan = false;
void COMinit()
{
    modnCr_fac[0] = modnCr_fac[1] = 1;
    modnCr_finv[0] = modnCr_finv[1] = 1;
    modnCr_inv[1] = 1;
    for (int i = 2; i < 1000010; i++)
    {
        modnCr_fac[i] = modnCr_fac[i - 1] * i % mod;
        modnCr_inv[i] = mod - modnCr_inv[mod % i] * (mod / i) % mod;
        modnCr_finv[i] = modnCr_finv[i - 1] * modnCr_inv[i] % mod;
    }
}
ll COM(ll n, ll k)
{
    if (n < k)
        return 0;
    if (n < 0 || k < 0)
        return 0;
    return modnCr_fac[n] * (modnCr_finv[k] * modnCr_finv[n - k] % mod) % mod;
}
ll modnCr(ll n, ll r)
{
    if (modnCr_maekeisan == false)
    {
        COMinit();
        modnCr_maekeisan = true;
    }
    return COM(n, r);
}

//順列　nPr
ll nPr(ll n, ll r)
{
    r = n - r;
    ll sum = 1;
    ll i;
    for (i = n; i >= r + 1; i--)
        sum *= i;
    return sum;
}

//重複組み合わせ　nHr = (r+n-1)Cr
ll nHr(ll n, ll r)
{
    return modnCr(r + n - 1, r);
}

//弧度法から度数法に変換
double to_deg(double r)
{
    return r * 180.0 / (atan(1.0) * 4.0);
}

//座標から度数法の角度に変換
double kakudo(double dx, double dy)
{
    return atan2(dx, dy) * 180.0 / (atan(1.0) * 4.0);
}

//約数列挙配列(1を必ず含むことに注意)
vector<ll> yakusuu(ll n)
{
    vector<ll> ret;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ret.push_back(i);
            if (i * i != n)
                ret.push_back(n / i);
        }
    }
    sort(begin(ret), end(ret));
    return (ret);
}

//素数判定bool型配列
std::vector<bool> sosuuhantei(ll max)
{
    vector<bool> ret;
    if (max + 1 > ret.size())
    {                              // resizeで要素数が減らないように
        ret.resize(max + 1, true); // IsPrimeに必要な要素数を確保
    }
    ret[0] = false; // 0は素数ではない
    ret[1] = false; // 1は素数ではない

    for (ll i = 2; i * i <= max; ++i)
    { // 0からsqrt(max)まで調べる
        if (ret[i])
        { // iが素数ならば
            for (ll j = 2; i * j <= max; ++j)
            {                       // (max以下の)iの倍数は
                ret[i * j] = false; // 素数ではない
            }
        }
    }
    return (ret);
}

//素数列挙longlong型配列
std::vector<ll> sosuurekkyo(ll max)
{
    vector<bool> tmp;
    vector<ll> ret;
    if (max + 1 > tmp.size())
    {                              // resizeで要素数が減らないように
        tmp.resize(max + 1, true); // IsPrimeに必要な要素数を確保
    }
    tmp[0] = false; // 0は素数ではない
    tmp[1] = false; // 1は素数ではない

    for (ll i = 2; i * i <= max; ++i)
    { // 0からsqrt(max)まで調べる
        if (tmp[i])
        { // iが素数ならば
            for (ll j = 2; i * j <= max; ++j)
            {                       // (max以下の)iの倍数は
                tmp[i * j] = false; // 素数ではない
            }
        }
    }
    for (ll i = 0; i <= max; i++)
    {
        if (tmp[i])
        {
            ret.push_back(i);
        }
    }
    return (ret);
}

//小数点以下10桁テンプレート（main関数内の最初に貼付け）
//std::cout << std::fixed << std::setprecision(10);

//----------------------------------------------------------------

int main()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> a;
    if (s[0] == '0')
    {
        a.push_back(0);
    }
    ll tmp0 = 0;
    ll tmp1 = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == '0' && s[i + 1] == '0')
        {
            tmp0++;
        }
        if (s[i] == '0' && s[i + 1] == '1')
        {
            tmp0++;
            a.push_back(tmp0);
            tmp0 = 0;
        }
        if (s[i] == '1' && s[i + 1] == '1')
        {
            tmp1++;
        }
        if (s[i] == '1' && s[i + 1] == '0')
        {
            tmp1++;
            a.push_back(tmp1);
            tmp1 = 0;
        }
        if (i == s.size() - 1)
        {
            if (s[s.size() - 1] == '0')
            {
                a.push_back(tmp0 + 1);
            }
            if (s[s.size() - 1] == '1')
            {
                a.push_back(tmp1 + 1);
            }
        }
    }
    if (s[s.size() - 1] == '0')
    {
        a.push_back(0);
    }

    ll ruiseki[a.size() + 1];
    ruiseki[0] = 0;
    for (ll i = 0; i < a.size(); i++)
    {
        ruiseki[i + 1] = ruiseki[i] + a[i];
    }
    ll ans = 0;
    if (2 * k + 1 >= a.size() + 1)
    {
        ans = ruiseki[a.size()];
    }
    for (ll i = 0; i < a.size(); i++)
    {
        if (2 * i + 2 * k + 1 < a.size() + 1)
        {
            chmax(ans, ruiseki[2 * i + 2 * k + 1] - ruiseki[2 * i]);
        }
    }
    if (a.size() == 1)
    {
        cout << s.size() << endl;
    }
    else
    {
        cout << ans << endl;
    }
}