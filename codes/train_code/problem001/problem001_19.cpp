#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int r, d, x;
  cin >> r >> d >> x;
  for (int i = 0; i < 10; i++) {
    x = r * x - d;
    cout << x << '\n';
  }

  return 0;
}
