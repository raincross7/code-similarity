#include <iostream>
using namespace std;

int main() {
  int n, k, x, y;
  cin >> n >> k >> x >> y;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    if (i <= k) {
      ans += x;
    } else {
      ans += y;
    }
  }
  cout << ans << endl;
}