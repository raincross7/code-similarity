#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
    string s, ope, p, tmp;
    int i, j, h, num, start, end;
    double x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    cout << fixed <<setprecision(10) << sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)) << endl;

    return 0;
}

