/*
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_10_A
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int
main()
{
    ios::sync_with_stdio(false);

    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << setprecision(10) << sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) << endl;
    return 0;
}