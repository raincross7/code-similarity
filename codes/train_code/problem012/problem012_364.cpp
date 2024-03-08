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

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
const int INF = 1001001001;
const long long INFLL = LLONG_MAX / 3;
const double eps = (1e-9);


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll n, h;
  cin >> n >> h;
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  ll a_max = MAX(a);
  sort(ALL(b));

  ll ans = 0;
  while (h > 0) {
    if (!b.empty() && b.back() > a_max) {
      h -= b.back();
      b.pop_back();
      ans++;
    } else {
      ans += (h + a_max - 1) / a_max;
      break;
    }
  }

  cout << ans << endl;

  return 0;
}
