#include <bits/stdc++.h>
using namespace std;

#define rep(i, N) for (int i = 0; i < N; i++)
const int INF = INT_MAX / 2;

int main() {
  int N;
  cin >> N;
  vector<int> t(N), v(N);
  rep(i, N) cin >> t[i];
  rep(i, N) cin >> v[i];
  int T = 0;
  rep(i, N) T += t[i];
  vector<int> ub(T * 2 + 1, INF);
  int x = 0;
  rep(i, N) rep(y, t[i]) {
    ub[x] = min(ub[x], v[i] * 2);
    ub[x + 1] = min(ub[x + 1], v[i] * 2);
    ub[x + 2] = min(ub[x + 2], v[i] * 2);
    x += 2;
  }
  ub[0] = ub[T * 2] = 0;
  rep(x, T * 2) ub[x + 1] = min(ub[x + 1], ub[x] + 1);
  for (int x = T * 2; x > 0; x--) ub[x - 1] = min(ub[x - 1], ub[x] + 1);
  double ans = 0;
  rep(x, T * 2) ans += (ub[x] + ub[x + 1]) / 2.0;
  cout << fixed << setprecision(12) << ans / 4 << endl;
}
