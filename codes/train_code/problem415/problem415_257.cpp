#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#define _USE_MATH_DEFINES
#include <cmath>
#include <cstring>
#include <cstdlib>

#define rep(i, n)     for (int (i) = 0; (i) < (n); (i)++)
#define rep1(i, n)    for (int i = 1; i <= (int)(n); i++)

using namespace std;
typedef long long ll;

const double sixty = M_PI * 60.0 / 180.0;

struct Point {
   double x, y;
};

void koch(int n, Point a, Point b) {
   if (n == 0) return;

   Point s, t, u;
   s.x = (a.x * 2.0 + b.x * 1.0) / 3.0;
   s.y = (a.y * 2.0 + b.y * 1.0) / 3.0;
   t.x = (a.x * 1.0 + b.x * 2.0) / 3.0;
   t.y = (a.y * 1.0 + b.y * 2.0) / 3.0;
   u.x = (t.x - s.x) * cos(sixty) - (t.y - s.y) * sin(sixty) + s.x;
   u.y = (t.x - s.x) * sin(sixty) + (t.y - s.y) * cos(sixty) + s.y;

   koch(n - 1, a, s);
   printf("%.8f %.8f\n", s.x, s.y);
   koch(n - 1, s, u);
   printf("%.8f %.8f\n", u.x, u.y);
   koch(n - 1, u, t);
   printf("%.8f %.8f\n", t.x, t.y);
   koch(n - 1, t, b);
}

int main() {
   Point a, b;
   int n;

   cin >> n;
   a.x = 0.0;
   a.y = 0.0;
   b.x = 100.0;
   b.y = 0.0;

   printf("%.8f %.8f\n", a.x, a.y);
   koch(n, a, b);
   printf("%.8f %.8f\n", b.x, b.y);

   return(0);
}

