#include <bits/stdc++.h>

#ifdef LOCAL
#include <debug.hpp>
#else
#define debug(...) void()
#endif

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int h, w, a, b;
  cin >> h >> w >> a >> b;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if ((i - b + 0.1) * (j - a + 0.1) > 0) {
        cout << 0;
      } else {
        cout << 1;
      }
    }
    cout << '\n';
  }
  return 0;
}