#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; i++)
#define repr(i, a, n) for (int i = n - 1; i >= a; i--)
using namespace std;
using ll = long long;
using P = pair<int, int>;
template <typename T> void chmin(T &a, T b) { a = min(a, b); }
template <typename T> void chmax(T &a, T b) { a = max(a, b); }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, k, gcdv, maxv = 0, minv = 1e9 + 7;
  cin >> n >> k;
  rep(i, 0, n) {
    int a;
    cin >> a;
    chmax(maxv, a);
    chmin(minv, a);
    if (i == 0)
      gcdv = a;
    else
      gcdv = __gcd(gcdv, a);
  }

  if (k % gcdv == 0 && k >= minv && k <= maxv)
    cout << "POSSIBLE" << endl;
  else
    cout << "IMPOSSIBLE" << endl;
}