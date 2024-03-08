#include <bits/stdc++.h>
#include <regex>
using namespace std;

//type
typedef long long int ll;
typedef pair<int, int> P;
//定数
#define INF 1000000000000 //10^12:∞
#define MOD 1000000007    //10^9+7:合同式の法
#define MAXR 100000       //10^5:配列の最大のrange
#define PI 3.1415926535897932384626
//略記
#define PB push_back //挿入
#define MP make_pair //pairのコンストラクタ
#define F first      //pairの一つ目の要素
#define S second     //pairの二つ目の要素
#define Z class

// input
#define INIT                          \
    std::ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define VAR(type, ...) \
    type __VA_ARGS__;  \
    MACRO_VAR_Scan(__VA_ARGS__);
template <typename T>
void MACRO_VAR_Scan(T &t)
{
    std::cin >> t;
}
template <typename First, typename... Rest>
void MACRO_VAR_Scan(First &first, Rest &... rest)
{
    std::cin >> first;
    MACRO_VAR_Scan(rest...);
}
#define VEC_ROW(type, n, ...)                \
    std::vector<type> __VA_ARGS__;           \
    MACRO_VEC_ROW_Init(n, __VA_ARGS__);      \
    for (int w_ = 0; w_ < n; ++w_)           \
    {                                        \
        MACRO_VEC_ROW_Scan(w_, __VA_ARGS__); \
    }
template <typename T>
void MACRO_VEC_ROW_Init(int n, T &t)
{
    t.resize(n);
}
template <typename First, typename... Rest>
void MACRO_VEC_ROW_Init(int n, First &first, Rest &... rest)
{
    first.resize(n);
    MACRO_VEC_ROW_Init(n, rest...);
}
template <typename T>
void MACRO_VEC_ROW_Scan(int p, T &t) { std::cin >> t[p]; }
template <typename First, typename... Rest>
void MACRO_VEC_ROW_Scan(int p, First &first, Rest &... rest)
{
    std::cin >> first[p];
    MACRO_VEC_ROW_Scan(p, rest...);
}
#define VEC(type, c, n)     \
    std::vector<type> c(n); \
    for (auto &i : c)       \
        std::cin >> i;
// 2d vector:  MAT(type, v, size, size);
#define MAT(type, c, m, n)                                     \
    std::vector<std::vector<type>> c(m, std::vector<type>(n)); \
    for (auto &R : c)                                          \
        for (auto &w : R)                                      \
            std::cin >> w;

// output
template <typename T>
void MACRO_OUT(const T t) { std::cout << t; }

#define OUT(...) MACRO_OUT(__VA_ARGS__);
#define SP std::cout << " ";
#define TAB std::cout << "\t";
#define BR std::cout << "\n";
#define ENDL std::cout << std::endl;

#define YES() printf("YES\n")
#define NO() printf("NO\n")
#define isYES(x) printf("%s\n", (x) ? "YES" : "NO")
#define Yes() printf("Yes\n")
#define No() printf("No\n")
#define yes() printf("yes\n")
#define no() printf("no\n")
#define ln cout << '\n'
template <Z A>
void pr(A a)
{
    cout << a;
    ln;
}
template <Z A, Z B>
void pr(A a, B b)
{
    cout << a << ' ' << b << endl;
}

// OTHER
// xの二乗を返す (関数テンプレート版)
template <typename T>
T square(T x) { return x * x; }
template <class T>
T GCD(T a, T b)
{
    T r;
    while (a)
        r = b, b = a, a = r % a;
    return b;
}
template <class T>
T LCM(T a, T b) { return a / GCD(a, b) * b; }

#define chmax(x, y) (x = max(x, y))
#define chmin(x, y) (x = min(x, y))
// loop
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define repe(i, n) for (ll i = 0; i <= (n); i++)
#define repd(i, n) for (ll i = n; i > 0; i--)
#define repde(i, n) for (ll i = n; i >= 0; i--)
#define FOR(i, a, b) for (ll i = a; i < (b); i++)
#define FORE(i, a, b) for (ll i = a; i <= (b); i++)
#define FORD(i, a, b) for (ll i = a; i >= (b); i--)
#define FORA(i, I) for (const auto &i : I)

// vector
#define ALL(x) x.begin(), x.end()
#define ALLR(x) x.end(), x.begin()
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<ll> vl;
#define ERASE(x) x.erase(unique(ALL(x)), x.end()); // erase same elements
#define sz(x) (int)(x).size()
bool yes = 0;
bool boo = 0;
int mx = -100000;
int mnn = 100000;
int sum = 0;
int ans = 0;
int co = 0;
int abc[26];
bool OK = false;

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
// cout << (conditon ? (result:  == 1 ): (==0)) << endl; <- output result of if
// long long 型が表せる値の上限はおよそ 9 × 10＾18 です．

// vector
// sum: accumulate(ALl(x),0)
// return last element: v.back();
//  i & 1 は偶数なら 0に 奇数なら1に

// sort (descending order) :  sort(arr, arr+n, greater<int>());
// sort indescending order: sort(ALL())-> reverse(ALL())
// (string): sort(all(t),greater<char>()); (string t )

// string
// strncmp: ompare characters of two string *長さ指定 strcmp(s1,s2,length)
// <0:s1<s2  （s１が辞書早い） | 0:s1==s2 | >0:s1>s2

int main()
{
    bool m[100][100];

    VAR(int, w, h, n);
    rep(i, h)
        rep(j, w)
            m[i][j] = true;

    rep(i, n)
    {
        VAR(int, x, y, a);
        x--;
        y--;
        rep(j, h)
        {
            rep(k, w)
            {
                if (a == 1 && k <= x)
                    m[j][k] = false;
                if (a == 2 && k > x)
                    m[j][k] = false;
                if (a == 3 && j <= y)
                    m[j][k] = false;
                if (a == 4 && j > y)
                    m[j][k] = false;
            }
        }
    }

    rep(i, h)
        rep(j, w) if (m[i][j])
            ans++;

    cout << ans << endl;
}