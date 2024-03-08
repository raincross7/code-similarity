#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#include <cmath>
#include <bitset>
#include <complex>
#include <functional>
#include <numeric>
#include <iomanip>

#define SPBR(w, n) std::cout<<(w + 1 == n ? '\n' : ' ');
#define YES cout << "YES" << endl
#define Yes cout << "Yes" << endl
#define NO cout << "NO" << endl
#define No cout << "No" << endl
#define ALL(i) (i).begin(), (i).end()
#define FOR(i, a, n) for(int i=(a);i<(n);++i)
#define RFOR(i, a, n) for(int i=(n)-1;i>=(a);--i)
#define REP(i, n) for(int i=0;i<int(n);++i)
#define RREP(i, n) for(int i=int(n)-1;i>=0;--i)
#define IN(a, x, b) (a<=x && x<b)
#define OUT(a, x, b) (x<a || b<=x)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

#define int ll
using ll = long long;
using ull = unsigned long long;
using ld = long double;
const int MOD = 1000000007;
/* const int MOD = 998244353; */
const int INF = 1e18;
const double PI = acos(-1);

using namespace std;
struct INIT { INIT(){
  cin.tie(0); ios::sync_with_stdio(false);
  cout << fixed << setprecision(10);
}}INIT;

int lcm(int x, int y){
  return x/__gcd(x, y)*y;
}


signed main() {
  int N, M; 
  cin >> N >> M;

  vector<int> A(N);
  REP(i, N) cin >> A[i];

  int l = 1;
  vector<int> v(N);
  REP(i, N){
    l = lcm(l, A[i]/2);

    if(l > M){
      cout << 0 << "\n";
      return 0;
    }
    while(A[i]%2 == 0){
      A[i] /= 2;
      v[i]++;
    }
  }

  sort(ALL(v));
  if(v[0] != v[N-1]){
    cout << 0 << "\n";
    return 0;
  }

  cout << M/l-M/(l*2) << "\n";

  return 0;
}