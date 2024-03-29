#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <bitset>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <string>
#include <string.h>
#include <cmath>
#include <utility>
#include <functional>
#include <map>
#include <set>
#include <cctype>
#include <fstream>
#include <numeric>
#include <iomanip>
#include <cstring>
using namespace std;
using ll = long long;
#define ALL(a) (a).begin(), (a).end()

#define FOR(i, a, b) for (long long int i = (a); i <= (b); i++)
#define RFOR(i, a, b) for (long long int i = (a); i >= (b); i--)
#define MOD 1000000007
#define LLONG_MAXs 9223372036854775800 / 2

#define ALL(a) (a).begin(), (a).end()

#include <iostream>
#include <cmath>
using namespace std;

bool isPrimeNum(ll x)
{ // 素数である場合 true を返す
    if (x <= 1)
    { // 1以下である場合は素数でないことがすぐにわかる
        return false;
    }
    // sqrt( double型 ) は引数の平方根を double型で返すので、int型でキャスト
    int n = (int)sqrt((double)x);
    for (int i = 2; i <= n; i++)
    {
        if (x % i == 0)
        { // 割り切る整数がある場合、即判定終了
            return false;
        }
    }
    return true; // 割り切る整数がない場合、素数である
}

ll myPow(ll x, ll n, ll m)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return myPow(x * x % m, n / 2, m);
    else
        return x * myPow(x, n - 1, m) % m;
}

constexpr ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
constexpr ll lcm(ll a, ll b) { return a * b / gcd(a, b); }
constexpr ll abs(ll a, ll b)
{
    if (a >= b)
        return a - b;
    if (a < b)
        return b - a;
}
constexpr double dabs(double a, double b)
{
    if (a >= b)
        return a - b;
    if (a < b)
        return b - a;
}
constexpr ll min(ll a, ll b)
{
    if (a >= b)
        return b;
    if (a < b)
        return a;
}

constexpr ll max(ll a, ll b)
{
    if (a >= b)
        return a;
    if (a < b)
        return b;
}

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int dx8[8] = {1, 0, -1, 0, 1, -1, 1, -1};
int dy8[8] = {0, 1, 0, -1, 1, 1, -1, -1};

class UnionFind
{
public:
    //親の番号を格納する。親だった場合は-(その集合のサイズ)
    vector<int> Parent;

    //作るときはParentの値を全て-1にする
    //こうすると全てバラバラになる
    UnionFind(int N)
    {
        Parent = vector<int>(N, -1);
    }

    //Aがどのグループに属しているか調べる
    int root(int A)
    {
        if (Parent[A] < 0)
            return A;
        return Parent[A] = root(Parent[A]);
    }

    //自分のいるグループの頂点数を調べる
    int size(int A)
    {
        return -Parent[root(A)]; //親をとってきたい]
    }
    bool issame(int x, int y)
    {
        return root(x) == root(y);
    }
    //AとBをくっ付ける
    bool connect(int A, int B)
    {
        //AとBを直接つなぐのではなく、root(A)にroot(B)をくっつける
        A = root(A);
        B = root(B);
        if (A == B)
        {
            //すでにくっついてるからくっ付けない
            return false;
        }

        //大きい方(A)に小さいほう(B)をくっ付けたい
        //大小が逆だったらひっくり返しちゃう。
        if (size(A) < size(B))
            swap(A, B);

        //Aのサイズを更新する
        Parent[A] += Parent[B];
        //Bの親をAに変更する
        Parent[B] = A;

        return true;
    }
};

long long fac[510000], finv[510000], inv[510000];

// テーブルを作る前処理
void COMinit()
{
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < 510000; i++)
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

long long modinv(long long a, long long m)
{
    long long b = m, u = 1, v = 0;
    while (b)
    {
        long long t = a / b;
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
string replaceAll(string &replacedStr, string from, string to)
{
    unsigned int pos = replacedStr.find(from);
    int toLen = to.length();

    if (from.empty())
    {
        return replacedStr;
    }

    while ((pos = replacedStr.find(from, pos)) != std::string::npos)
    {
        replacedStr.replace(pos, from.length(), to);
        pos += toLen;
    }
    return replacedStr;
}

void yn(bool flag)
{
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return;
}
void YN(bool flag)
{
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return;
}

std::vector<ll> enum_div(ll n) //nの約数を列挙
{
    std::vector<ll> ret;
    for (ll i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            ret.push_back(i);
            if (i != 1 && i * i != n)
            {
                ret.push_back(n / i);
            }
        }
    }
    ret.push_back(n);
    return ret;
}

void Ssort(int no, char *month[])
{
    int i, j;
    char *temp;
    for (i = 0; i < no; i++)
    {
        for (j = i + 1; j < no; j++)
        {
            if (strcmp((month[i]), (month[j])) > 0)
            {
                temp = *(month + i);
                *(month + i) = *(month + j);
                *(month + j) = temp;
            }
        }
    }
}

// グラフセット
struct Edge
{
    ll to;     // 辺の行き先
    ll weight; // 辺の重み
    Edge(int t, int w) : to(t), weight(w) {}
};
//using Graph = vector<vector<Edge>>;
using Graph = vector<vector<int>>;

int main()
{
    ll N, x;
    cin >> N;
    ll A[N];
    ll B[N];
    pair<ll, ll> pa;
    priority_queue<pair<ll, ll>> p;
    FOR(i, 0, N - 1)
    {
        cin >> A[i];
        p.push(make_pair(-A[i], i));
    }

    ll ans = 0;
    ll ct = 0;
    while (!p.empty())
    {

        auto tp = p.top();

        //cout << tp.first << " " << tp.second << endl;

        if (tp.second % 2 != ct)
            ans++;

        ct = 1 - ct;
        p.pop();
    }

    cout << (ans + 1) / 2 << endl;

    return 0;
}