#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using vec = vector<ll>;
using vect = vector<double>;
using Graph = vector<vector<ll>>;
#define loop(i, n) for (ll i = 0; i < n; i++)
#define Loop(i, m, n) for (ll i = m; i < n; i++)
#define pool(i, n) for (ll i = n; i >= 0; i--)
#define Pool(i, m, n) for (ll i = n; i >= m; i--)
#define mod 1000000007ll
#define setbit bitset<8>
#define flagcount __builtin_popcount
#define flag(x) (1 << x)
#define flagadd(bit, x) bit |= flag(x)
#define flagpop(bit, x) bit &= ~flag(x)
#define flagon(bit, i) bit &flag(i)
#define flagoff(bit, i) !(bit & (1 << i))
#define all(v) v.begin(), v.end()
#define low2way(v, x) lower_bound(all(v), x)
#define high2way(v, x) upper_bound(all(v), x)
#define count2way(v, x) high2way(v, x) - low2way(v, x)
#define lower(v, x) low2way(v, x) - v.begin()       //1番左が0、もし見つから無いならｎを出力
#define higher(v, x) high2way(v, x) - v.begin() - 1 //1番左が0、もし見つからないならn-1を出力（注意）
#define putout(a) cout << a << endl
#define putout2(a, b) \
    putout(a);        \
    putout(b)
#define putout3(a, b, c) \
    putout(a);           \
    putout(b);           \
    putout(c)
#define putout4(a, b, c, d) \
    putout(a);              \
    putout(b);              \
    putout(c);              \
    putout(d)
#define putout5(a, b, c, d, e) \
    putout(a);                 \
    putout(b);                 \
    putout(c);                 \
    putout(d);                 \
    putout(e)
#define Gput(a, b) G[a].push_back(b)
#define cin1(a) cin >> a
#define cin2(a, b) cin >> a >> b
#define cin3(a, b, c) cin >> a >> b >> c
#define cin4(a, b, c, d) cin >> a >> b >> c >> d
#define cin5(a, b, c, d, e) cin >> a >> b >> c >> d >> e
#define Sum(v) accumulate(all(v), 0ll)
#define gcd(x, y) __gcd(x, y)
ll ctoi(char c)
{
    if (c >= '0' && c <= '9')
    {
        return c - '0';
    }
    return 0;
}
template <typename T>
T lcm(T x, T y)
{
    T z = gcd(x, y);
    return x * y / z;
}
template <typename T>
bool primejudge(T n)
{
    if (n < 2)
        return false;
    else if (n == 2)
        return true;
    else if (n % 2 == 0)
        return false;
    double sqrtn = sqrt(n);
    for (T i = 3; i < sqrtn + 1; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}
template <typename T>
T modinv(T a, T m)
{
    T b = m, u = 1, v = 0;
    while (b)
    {
        T t = a / b;
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
//場合によって使い分ける
//const ll dx[4]={1,0,-1,0};
//const ll dy[4]={0,1,0,-1};
const ll dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
const ll dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
//多次元配列の宣言法
//vector<vector<ll>> field(h, vector<ll>(w));
template <class T>
inline void chmax(T &a, T b)
{
    if (a < b)
        a = b;
}
template <class T>
inline void chmin(T &a, T b)
{
    if (a > b)
        a = b;
}
/*
ライブラリをここに置いてコメントを削除
*/

int main()
{
    cout << fixed << setprecision(30);
    ll n;
    cin >> n;
    vec a(n), b(n);
    loop(i, n) cin >> a[i];
    loop(i, n) cin >> b[i];
    ll check = Sum(b) - Sum(a);
    ll count1 = 0, count2 = 0;
    loop(i, n)
    {
        if (a[i] < b[i])
            count2 += (b[i] - a[i] + 1) / 2;
        else
            count1 += a[i] - b[i];
    }
    if (max(count1, count2) <= check)
        putout("Yes");
    else
        putout("No");
    return 0;
}
