#include <bits/stdc++.h>
using namespace std;

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  int x = x2 - x1, y = y2 - y1;
  int x3 = x2 - y, y3 = y2 + x;
  int x4 = x1 - y, y4 = y1 + x;

  cout << x3 << ' ' << y3 << ' ' << x4 << ' ' << y4 << endl;
}
