#include <iostream>
#include <cstdio>
#include <cmath>

int main() {
  double x1, x2;
  double y1, y2;
  std::cin >> x1 >> y1 >> x2 >> y2;

  double distance;
  distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
  printf("%.4f\n", distance);

  return 0;
}