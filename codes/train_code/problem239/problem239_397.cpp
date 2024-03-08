#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repr(i, n) for (int i = (n); i >= 0; --i)
#define FOR(i, m, n) for (int i = (m); i < (n); ++i)
#define FORR(i, m, n) for (int i = (m); i >= (n); --i)
#define equals(a, b) (fabs((a) - (b)) < EPS)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll mod = 1000000007;
//const ll mod = 998244353;
const int inf = 1e9 + 10;
const ll INF = 1e18;
const ld EPS = 1e-10;
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }

const string a = "keyence";

int main() {
  string s;
  cin >> s;

  int n = s.length();
  rep(i, n - 6) {
    if (s.substr(i, 7) == a) {
      cout << "YES" << endl;
      return 0;
    }
  }
  FOR(i, 1, 7) {
    if (s.substr(0, i) + s.substr(n - 7 + i) == a) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;


  
  return 0;
}