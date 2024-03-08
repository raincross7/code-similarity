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

  ll k, a, b;
  cin >> k >> a >> b;
  ll t = ((k - (a - 1)) / 2) * (b - a);
  ll rem = k - (a - 1) % 2;
  if (rem & 1)
    t++;
  ll ans = t + a;
  cout << max(ans, k + 1) << endl;
}
