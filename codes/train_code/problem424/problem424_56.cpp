#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, h, w;
  cin >> n >> h >> w;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    ans += (h <= a && w <= b);
  }
  cout << ans << '\n';
  return 0;
}