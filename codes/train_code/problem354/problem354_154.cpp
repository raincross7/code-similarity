#include <bits/stdc++.h>
#define rep(i,n) for (ll i = 0; i < n; ++i)
#define sz(x) int(x.size())
#define ALL(c) (c).begin(), (c).end()
#define SUM(x) std::accumulate(ALL(x), 0LL)
#define MIN(v) *std::min_element(v.begin(), v.end())
#define MAX(v) *std::max_element(v.begin(), v.end())
#define EXIST(v, x) (std::find(v.begin(), v.end(), x) != v.end())
#define FORV(i, v) for (auto i = v.begin(); i != v.end(); i++)
using namespace std;

using ll = int64_t;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
const int INF = 1001001001;
const long long INFL = (1LL<<60);
const double eps = (1e-9);


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll r, g, b, n;
  cin >> r >> g >> b >> n;
  ll ans = 0;
  for (int i = 0; i <= n / r; i++) {
    ll rr = r * i;
    for (int j = 0; j <= (n - rr) / g; j++) {
      ll gg = g * j;
      ll rem = n - rr - gg;
      if (rem % b == 0) ans++;
    }
  }

  cout << ans << endl;

  return 0;
}
