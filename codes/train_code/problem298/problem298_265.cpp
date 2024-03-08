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

using ll = long long;
using P = pair<int, int>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
const int INF = 1001001001;
const long long INFLL = LLONG_MAX / 3;
const double eps = (1e-9);


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  int mx = (n-1) * (n-2) / 2;
  if (k > mx) {
    puts("-1");
    return 0;
  }

  cout << n - 1 + mx - k << endl;

  // 頂点1とその他を全て繋ぐ
  for (int i = 2; i <= n; i++) {
    cout << 1 << " " << i << endl;
  }

  vector<P> edges;
  for (int i = 2; i < n; i++) {
    for (int j = i+1; j <= n; j++) {
      edges.push_back(P(i, j));
    }
  }

  rep(i, mx - k) {
    cout << edges[i].first << " " << edges[i].second << endl;
  }

  return 0;
}
