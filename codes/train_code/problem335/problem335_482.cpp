#define _USE_MATH_DEFINES
#include <bits/stdc++.h>

using namespace std;

// repetition
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// container util
#define all(x) (x).begin(), (x).end()

// debug
#define dump(x) cerr << #x << " = " << (x) << endl;
#define debug(x)                                         \
  cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" \
       << " " << __FILE__ << endl;

// typedef
typedef long long lint;
typedef unsigned long long ull;
typedef complex<long double> Complex;
typedef pair<int, int> P;
typedef tuple<int, int, int> TP;
typedef vector<int> vec;
typedef vector<vec> mat;

// constant
const int MOD = (int)1e9 + 7;
const int INF = (int)1e18;
const int dx[] = {0, 1, 0, -1};
const int dy[] = {1, 0, -1, 0};
const int ddx[] = {0, 1, 1, 1, 0, -1, -1, -1};
const int ddy[] = {1, 1, 0, -1, -1, -1, 0, 1};

// conversion
inline int toInt(string s) {
  int v;
  istringstream sin(s);
  sin >> v;
  return v;
}
template <class T>
inline string toString(T x) {
  ostringstream sout;
  sout << x;
  return sout.str();
}

//
template <class T>
inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T>
inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  string s;
  cin >> n >> s;

  string d = "L";
  for (int i = 1; i < 2 * n; i++) {
    if (s[i - 1] == s[i]) {
      if (d[i - 1] == 'L')
        d += "R";
      else
        d += "L";
    } else {
      if (d[i - 1] == 'L')
        d += "L";
      else
        d += "R";
    }
  }

  lint Lc = 0, Rc = 0, res = 1;
  for (int i = 0; i < 2 * n; i++) {
    if (d[i] == 'L') {
      Lc++;
    } else {
      res = res * (Lc - Rc) % MOD;
      Rc++;
    }
  }

  if (s[0] == 'W' || s[2 * n - 1] == 'W') res = 0;
  if (Rc != Lc) res = 0;

  for (lint i = 1; i <= n; i++) res = (res * i) % MOD;
  cout << res << endl;

  return 0;
}