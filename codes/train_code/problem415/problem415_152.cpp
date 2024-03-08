#include <cstdio>
#include <cmath>

struct Point{double x, y;};

void koch(int n, Point p1, Point p2) {
  if (n == 0) return;

  Point s, t, u;
  double rad_60 = M_PI * 60 / 180;
  s.x = (2 * p1.x + 1 * p2.x) / 3;
  s.y = (2 * p1.y + 1 * p2.y) / 3;
  t.x = (1 * p1.x + 2 * p2.x) / 3;
  t.y = (1 * p1.y + 2 * p2.y) / 3;
  u.x = (t.x - s.x) * cos(rad_60) - (t.y - s.y) * sin(rad_60) + s.x;
  u.y = (t.x - s.x) * sin(rad_60) + (t.y - s.y) * cos(rad_60) + s.y;

  koch(n - 1, p1, s);
  printf("%.8f %.8f\n", s.x, s.y);
  koch(n - 1, s, u);
  printf("%.8f %.8f\n", u.x, u.y);
  koch(n - 1, u, t);
  printf("%.8f %.8f\n", t.x, t.y);
  koch(n - 1, t, p2);
}

int main() {
  Point p1, p2;
  int n;

  scanf("%d", &n);
  p1.x = 0;
  p1.y = 0;
  p2.x = 100;
  p2.y = 0;

  printf("%.8f %.8f\n", p1.x, p1.y);
  koch(n, p1, p2);
  printf("%.8f %.8f\n", p2.x, p2.y);

  return 0;
}