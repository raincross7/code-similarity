#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
  int n, k;
  cin >> n >> k;
  vector<int> p(n), c(n);
  for (int &i : p) {
    cin >> i;
    i--;
  }
  for (int &i : c) cin >> i;
  ll ans = -1001001001;
  for (int i = 0; i < n; i++) {
    int now = i;
    vector<ll> vs;
    ll res = 0;
    do {
      now = p[now];
      res += c[now];
      vs.push_back(res);
    } while (now != i);
    int sz = vs.size();
    for (int j = 0; j < min(sz, k); j++) ans = max(ans, vs[j] + ((k - j - 1) / sz) * max(0ll, res));
  }
  cout << ans << endl;
  return 0;
}