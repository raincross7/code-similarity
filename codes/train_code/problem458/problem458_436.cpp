#pragma GCC optimize("O3") //コンパイラ最適化用

#define _GLIBCXX_DEBUG //配列に[]でアクセス時のエラー表示
#include <algorithm>   //sort,二分探索,など
#include <bitset>      //固定長bit集合
#include <chrono>      //実行時間計測
#include <cmath>       //pow,logなど
#include <complex>     //複素数
#include <deque>       //両端アクセスのキュー
#include <functional>  //sortのgreater
#include <iomanip>     //setprecision(浮動小数点の出力の誤差)
#include <iostream>    //入出力
#include <iterator>    //集合演算(積集合,和集合,差集合など)
#include <map>         //map(辞書)
#include <numeric>     //iota(整数列の生成),gcdとlcm,accumulate
#include <queue>       //キュー
#include <set>         //集合（順序保持）
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility> //pair
#include <vector>  //可変長配列
using namespace std;
typedef long long ll;
typedef long double ld;

#define REP(i, n) for (int i = 0; i < ll(n); i++)
#define REPD(i, n) for (int i = n - 1; i >= 0; i--)
#define FOR(i, a, b) for (int i = a; i < ll(b); i++)
#define FORD(i, a, b) for (int i = a; i > ll(b); i--)
// xにはvectorなどのコンテナ
#define ALL(x) x.begin(), x.end()
#define SIZE(x) ll(x.size()) // sizeをsize_tからllに直しておく
const long long INF = 1e12;
const int MOD = 1e9 + 7;
#define MAXR 100000 // 10^5:配列の最大のrange(素数列挙などで使用)
//略記
#define Umap unordered_map
#define Uset unordered_set
#define int long long
const unsigned int BIT_FLAG_0 = (1 << 0); // 0000 0000 0000 0001
const unsigned int BIT_FLAG_1 = (1 << 1); // 0000 0000 0000 0010
const unsigned int BIT_FLAG_2 = (1 << 2); // 0000 0000 0000 0100
const unsigned int BIT_FLAG_3 = (1 << 3); // 0000 0000 0000 1000
const unsigned int BIT_FLAG_4 = (1 << 4); // 0000 0000 0001 0000
const unsigned int BIT_FLAG_5 = (1 << 5); // 0000 0000 0010 0000
const unsigned int BIT_FLAG_6 = (1 << 6); // 0000 0000 0100 0000
const unsigned int BIT_FLAG_7 = (1 << 7); // 0000 0000 1000 0000

// https://qiita.com/Lily0727K/items/06cb1d6da8a436369eed#c%E3%81%A7%E3%81%AE%E5%AE%9F%E8%A3%85
void print() { cout << endl; }

template <class Head, class... Tail> void print(Head &&head, Tail &&... tail) {
    cout << head;
    if (sizeof...(tail) != 0)
        cout << " ";
    print(forward<Tail>(tail)...);
}

template <class T> void print(vector<T> &vec) {
    for (auto &a : vec) {
        cout << a;
        if (&a != &vec.back())
            cout << " ";
    }
    cout << endl;
}

template <class T> void print(vector<vector<T>> &df) {
    for (auto &vec : df) {
        print(vec);
    }
}

void add(long long &a, long long b) {
    a += b;
    if (a >= MOD)
        a -= MOD;
}
template <class T> inline bool chmin(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T> inline bool chmax(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

signed main() {

    string s;
    cin >> s;

    int ls = s.length();

    int ret = 0;

    REPD(i, ls-1) {
        if (i % 2 == 0) {
            continue;
        }
        int subls = i / 2 + 1;
        if (s.substr(0, subls) == s.substr(subls, subls)) {
            ret = subls*2;
            break;
        }
    }

    print(ret);
}
