#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int x4 = x1 - (y2 - y1);
  int y4 = x2 - x1 + y1;
  int x3 = x2 - (y2 - y1);
  int y3 = y2 + (x2 - x1);
  printf("%d %d %d %d\n", x3, y3, x4, y4);
}