//#define _GRIBCXX_DEBUG
#include <algorithm>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iostream>
#include <iomanip>
#include <list>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;


// ?????¬???????????¬??????
#pragma region MACRO
#define P(x) cout << (x) << endl
#define p(x) cout << (x)
#define PED cout << "\n"
#define rep(i,n) for(int i=0; i<(int)n; ++i)
#define REP(i,x,n) for(int i=x; i<(int)n; ++i)
#define repi(i,n) for(int i=0; i<=(int)n; ++i)
#define REPI(i,x,n) for(int i=x; i<=(int)n; ++i)
#define ILP while(true)
#define FOR(i,c) for(__typeof((c).begin())!=(c).begin(); i!=(c).end(); ++i)
#define ALL(c) (c).begin(), (c).end()
#define mp make_pair
#pragma endregion

// ???
#pragma region TYPE_DEF
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, string> pss;
typedef pair<string, int> psi;
typedef pair<int, string> pis;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector<string> vs;
#pragma endregion

// Effective std
#pragma region ESTD
template<typename C, typename T>
constexpr int count(C& c, T t) { return count(ALL(c), t); }
template<typename C, typename F>
constexpr int count_if(C& c, F f) { return count_if(ALL(c), f); }
template<typename C, typename T>
void erase(C& c, T t) { remove(ALL(c), t), c.end(); }
template<typename C>
void remove(vector<C>& c, unsigned int index) { c.erase(c.begin()+index); }
template<typename C, typename T, typename U>
constexpr void replace(C& c, T t, U u) { replace(ALL(c), t, u); }
template<typename C, typename F, typename U>
constexpr void replace_if(C& c, F f, U u) { (ALL(c), f, u); }
template<typename C>
constexpr void reverse(C& c) { reverse(ALL(c)); }
template<typename C>
constexpr void sort(C& c) { sort(ALL(c)); }
template<typename C, typename Pred>
constexpr void sort(C& c, Pred p) { sort(ALL(c), p); }
#pragma endregion

// ?????°
#pragma region CONST_VAL
#define PI (2*acos(0.0))
#define EPS (1e-9)
#define MOD (int)(1e9+7)
#pragma endregion

bool func(vector<long double> x, vector<long double> y) {
    if ((y[1] - y[0]) * (x[3] - x[2]) == (y[3] - y[2]) * (x[1] - x[0])) return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<long double> x(4);
    vector<long double> y(4);

    while(n--) {
        rep(i,4) cin >> x[i] >> y[i];
        P(func(x,y) ? "YES" : "NO");
    }
    return 0;
}