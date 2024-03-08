#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

int main(void) {
  int n;
  cin >> n;
  vector<int> d(n);
  rep(i, n) cin >> d[i];
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      ans += d[i] * d[j];
    }
  }
  cout << ans << '\n';
  return 0;
}