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



int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << fixed << setprecision(25);

  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  sort(a.begin(), a.end());
  if (count(a.begin(), a.end(), a[0]) > 2) {
    cout << "Impossible\n";
    return 0;
  }
  map<int, int> m;
  rep(i, n) m[a[i]]++;
  if (count(a.begin(), a.end(), a[0]) == 1) {
    if (a[n - 1] != 2 * a[0]) {
      cout << "Impossible\n";
      return 0;
    }
    FOR(i, a[0] + 1, 2 * a[0] + 1) {
      if (m[i] < 2) {
        cout << "Impossible\n";
        return 0;
      }
    }
    cout << "Possible\n";
  }
  else {
    if (a[n - 1] != 2 * a[0] - 1) {
      cout << "Impossible\n";
      return 0;
    }
    FOR(i, a[0] + 1, 2 * a[0]) {
      if (m[i] < 2) {
        cout << "Impossible\n";
        return 0;
      }
    }
    cout << "Possible\n";
  }




  
  return 0;
}