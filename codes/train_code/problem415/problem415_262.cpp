#include <algorithm>
#include <cmath>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
using namespace std;

struct Point {
    double x, y;
};

void koch(int n, Point a, Point b) {
    if (n == 0) return;
    Point s, t, u;
    double th = M_PI * 60.0 / 180.0;

    s.x = (2.0 * a.x + 1.0 * b.x) / 3.0;
    s.y = (2.0 * a.y + 1.0 * b.y) / 3.0;
    t.x = (1.0 * a.x + 2.0 * b.x) / 3.0;
    t.y = (1.0 * a.y + 2.0 * b.y) / 3.0;
    u.x = (t.x - s.x) * cos(th) - (t.y - s.y) * sin(th) + s.x;
    u.y = (t.x - s.x) * sin(th) + (t.y - s.y) * cos(th) + s.y;

    koch(n - 1, a, s);
    cout << s.x << " " << s.y << endl;
    koch(n - 1, s, u);
    cout << u.x << " " << u.y << endl;
    koch(n - 1, u, t);
    cout << t.x << " " << t.y << endl;
    koch(n - 1, t, b);
}

int main() {
    Point a = {0, 0}, b = {100, 0};
    int n;
    cin >> n;
    cout << a.x << " " << a.y << endl;
    koch(n, a, b);
    cout << b.x << " " << b.y << endl;
}
