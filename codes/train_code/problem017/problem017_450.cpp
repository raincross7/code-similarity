#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  long long x, y;
  cin >> x >> y;

  int ans = 0;
  while (x <= y) {
    ans++;
    x *= 2;
  }
  cout << ans << "\n";

  return 0;
}
