#include <bits/stdc++.h>

int main() {

  double x1, y1;
  double x2, y2;

  std::cin >> x1 >> y1 >> x2 >> y2;
  printf("%.10lf\n", sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)));
  
  return 0;
}