#include <iostream>

using namespace std;

int main() {
  long long h, w;
  cin >> h >> w;
  if (h == 1 || w == 1) cout << 1 << '\n';
  else cout << (h * w + 1) /2 << '\n';
  return 0;
}
