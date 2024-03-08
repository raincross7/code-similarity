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

  int a, b, k;
  cin >> a >> b >> k;
  int maxv = min(a, b);

  int c = 0;
  repr(i, 0, maxv + 1) {
    if (a % i == 0 && b % i == 0)
      c++;
    if (c == k) {
      cout << i << endl;
      break;
    }
  }
}