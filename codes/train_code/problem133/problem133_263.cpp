#include <bits/stdc++.h>
using namespace std;

int main() {
  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  printf("%.5f\n", sqrt(pow(abs(x2-x1), 2) + pow(abs(y2-y1), 2)));

  return 0;
}

