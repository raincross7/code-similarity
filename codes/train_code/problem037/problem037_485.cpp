#include <bits/stdc++.h>
using namespace std;

// #define int ll
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using si = set<int>;
using ii = pair<int, int>;
using vii = vector<ii>;

#define rep(i, n) for (int i = 0; i < n; i++)
#define dotc()    int tcs; if (cin >> tcs) rep(tc, tcs)
#define sz(x)     (int)x.size()
#define eb        emplace_back
#define pb        push_back
#define mp        make_pair
#define all(x)    x.begin(), x.end()
#define rall(x)   x.rbegin(), x.rend()
#define fi        first
#define se        second

int inf(0x3fffffff);
int mod(1000000007);
double pi(acos(-1.0));

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
#ifdef LOCAL
  freopen("io\\in.txt", "r", stdin);
  freopen("io\\out.txt", "w", stdout);
#endif

  int h, n;
  cin >> h >> n;
  vii a(n);
  rep(i, n) cin >> a[i].fi >> a[i].se;

  vi dist(h, -1);
  dist[0] = 0;

  int mn = inf;
  rep(i, h) {
    if (dist[i] == -1) continue;

    for (auto& j : a) {
      int h1 = i + j.fi, m1 = dist[i] + j.se;
      if (h1 >= h) {
        mn = min(mn, m1);
        continue;
      }
      if (dist[h1] != -1 && dist[h1] <= m1) continue;

      dist[h1] = m1;
    }
  }

  cout << mn;

  return 0;
}
