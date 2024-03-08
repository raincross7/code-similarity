#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <numeric>
#include <string>
#include <complex>
#include <algorithm>
#include <iostream>
#include <vector>
#include <bitset>
#include <deque>
#include <queue>
#include <map>
#include <utility>
#include <functional>
#include <iomanip>
#include <chrono>
#include <unordered_map>
#include <set>
using namespace std;
using ull = unsigned long long;
using  ll =long long ;
using  prll =pair<ll, ll>;
constexpr ll MOD = 1000000007;           //10億　= 10^9になってる
constexpr ll mINF = -922337200085470000; //llのmax-1桁の小さい方
constexpr ll pINF = 1LL << 60;
constexpr ull uINF=  1844674407399900000; //ullのmax-1桁してる
constexpr long double  pi = 3.1415926535897932384;
constexpr ll juu = 100000;             //10万 10e5
constexpr ll hyaku = 1000000;         //100万　10e6
constexpr int dx[4] = {0,0,1,-1}; //上下左右のベクトル
constexpr int dy[4] = {1,-1,0,0}; //上下左右のベクトル
constexpr int ddx[8] = {0,0,1,-1,1,1,-1,-1};
constexpr int ddy[8] = {1,-1,0,0,-1,1,1,-1};
#define all(v) v.begin(), v.end()
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define Debug(xx) cerr << " DEBUG:"<< xx << endl ;
#define Debug2(xx,yy) cerr << " DEBUG:"<< xx << ":" << yy<< endl ;
ll factor[300];
ll memory[300];
/*素朴法で計算
factorは必ずmemset(factor,0,sizeof(factor));
グローバルであるmemoryに個数を書き込む
memory配列の走査にはfactorの要素を使う*/
void primefac(ll num)
{
    int i = 0, kosuu = 0;
    while (*(factor + i) != 0)
    {
        while (num % *(factor + i) == 0)
        {
            num /= *(factor + i);
            memory[*(factor + i)] += 1;
        }
        if (num == 1)
            break;
        i++;
    }
}
/*グローバルにあるfactorに素数書き込む.個数を返すので配列は-1しろforは<*/
int elast(ll number)
{
    ll tmp = 0;
    int flag = 0;
    *factor = 2;
    for (int i = 3; i <= number; i++)
    {
        flag = 0;
        for (int j = 0; j <= tmp; j++)
        {
            if (i % (*(factor + j)) == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            continue;
        tmp += 1;
        *(factor + tmp) = i;
    }
    return tmp + 2;
}
//繰り返し二乗。掛けられる数、回数、mod
ll powpow(ll n, ll p)
{
    if (p == 1)
        return n % MOD;
    if (p % 2 == 1)
    {
        return (n * powpow(n, p - 1)) % MOD;
    }
    ll dob = powpow(n, p / 2);
    return (dob * dob) % MOD;
}
//MODとn、rが互いに素である事が確定していないとこれは出来ない。小定理、またchild,parentでおかしくなる。 mod取った後にそれら同士で割り算するとおかしくなるから逆元使う。（合同式の性質考えろ）
ll nCrMod(ll n, ll r)
{
    ll child = 1;
    ll parent = 1;
    if (r == 0)
        return 1;
    for (ll i = 0; i < r; ++i)
    {
        child = child * (n - i) % MOD;
        parent = parent * (r - i) % MOD;
    }
    ll ans = child * powpow(parent, MOD - 2);
    return ans % MOD;
}
ll to_digit(ll num){
    return (ll)(to_string(num).size());
}
ll nCr(ll n, ll r)
{
    ll val = 1,val2 = 1;
    if (r == 0)
        return 1;
    if(n < r)
        return 0;
    for (ll i = 0; i < r; ++i)
    {
        val *= (n - i);
        val2 *= (r - i);
    }
    return val/val2;
}
ll nPr(ll n, ll r)
{
    ll val = 1;
    for (ll i = 0; i < r; ++i)
    {
        val *= (n - i);
    }
    return val;
}
template <typename T>
bool chmin(T &a, const T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
template <typename T>
bool chmax(T &a, const T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}

/*ソートして被りを無くす*/
template <typename T>
void eraseSame(T &a)
{
    sort(all(a));
    a.erase(unique(all(a)), a.end());
}

/*aとbで大きい方を後ろにする。変更なしならtrue、ありならfalse */
template <typename T>
bool swapmax(T &a, T &b)
{
    T temp;
    temp = a;
    if (a > b)
    {
        swap(a,b);
        return false;
    }
    return true;
}
ll gcd(ll x, ll y) { return (x % y) ? gcd(y, x % y) : y; }
ll lcm(ll x, ll y) { return x / gcd(x, y) * y; }

/*一行に入力が何個あるかを1,ぶち込むvectorを2*/
template <typename T>
void splitIn(ll N, vector<T> &array)
{
    T temp;
    int i = 0;
    if (N == 0)
    {
        return;
    }
    array.resize(N);
    while (cin >> temp)
    {
        array[i] = temp;
        ++i;
        if (i >= N)
        {
            break;
        }
    }
    return;
}
/*時間計測
chrono::system_clock::time_point  start, end;
start = chrono::system_clock::now();

end = std::chrono::system_clock::now();
double elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();
*/
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    //cout << fixed << setprecision(20);
    ll n, k, m,l;
    ll ans = 0;
    ll sum = 0;
    string s;
    vector<ll> v;
    cin >> k >> n >> m;
    if(n+2 < m && k + 1 >= n + 2){
        ll kremain;
        kremain = (k) -  (n - 1) - 2;
        ans += m;
        ll rp;
        rp = kremain / 2;
        ans += rp*(m-n) + (kremain % 2);
    }
    else{
        ans = k +1;
    }
    cout << ans << "\n";
    return 0;
}