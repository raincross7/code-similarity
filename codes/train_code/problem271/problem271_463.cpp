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
template<typename C, typename T, typename U>
constexpr void replace(C& c, T t, U u) { replace(ALL(c), t, u); }
template<typename C, typename F, typename U>
constexpr void replace_if(C& c, F f, U u) { (ALL(c), f, u); }
template<typename C>
constexpr void sort(C& c) { sort(ALL(c)); }
template<typename C, typename Pred>
constexpr void sort(C& c, Pred p) { sort(ALL(c), p); }
template<typename C>
constexpr void reverse(C& c) { reverse(ALL(c)); }
#pragma endregion


// ?´???°
#pragma region PRIME
bool is_prime(unsigned n) {
  switch(n) {
    case 0:
    case 1: return false;
    case 2: return true;
  }
  if (n%2==0) return false;
  for (unsigned i=3; i*i<=n; i+=2)
    if (n%i==0) return false;
  return true;
}
#pragma endregion


// ??§??????/?°?????????????
#pragma region TRANSFORM
void mutal_tr(string &s) {
  for(int i=s.size(); i--;) {
    if(islower(s[i])) s[i] = toupper(s[i]);
    else if (isupper(s[i])) s[i] = tolower(s[i]);
  }
}
void to_upper(string &s) { for(int i=s.size(); i--;) s[i] = toupper(s[i]); }
void to_lower(string &s) { for(int i=s.size(); i--;) s[i] = tolower(s[i]); }
#pragma endregion


// ??????
#pragma region SET
template<class T>
set<T> intersection(const set<T>& sa, const set<T>& sb) {
  set<T> ret;
  for(T a : sa) if(sb.find(a) != sb.end()) ret.insert(a);
  return ret;
}
#pragma endregion

// Union Find
#pragma region UF
struct UnionFind {
  vector<int> data;
  UnionFind(int size) : data(size, -1) {}
  bool union_set(int x, int y) {
    x = root(x); y = root(y);
    if(x!=y) {
      if(data[y] < data[x]) swap(x, y);
      data[x] += data[y]; data[y] = x;
    }
    return x != y;
  }
  bool find_set(int x, int y) { return root(x) == root(y); }
  int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
  int size(int x) { return -data[root(x)]; }
};
#pragma endregion


// ?????°
#pragma region CONST_VAL
#define PI (2*acos(0.0))
#define EPS (1e-9)
#define MOD (int)(1e9+7)
#pragma endregion

double check(double x1, double y1, double x2, double y2, double x3, double y3){
    double ab = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double bc = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    double ca = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    double s = (ab + bc + ca) * 0.5;
    double S = sqrt(s * (s - ab) * (s - bc) * (s - ca));
    return S;
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    double x1, y1, x2, y2, x3, y3, xp, yp;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
        double abc = check(x1, y1, x2, y2, x3, y3);
        double abp = check(x1, y1, x2, y2, xp, yp);
        double bcp = check(x2, y2, x3, y3, xp, yp);
        double cap = check(x3, y3, x1, y1, xp, yp);
        double var = abc - (abp + bcp + cap);
        if(var <= 0.001 && var >= -0.001){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}