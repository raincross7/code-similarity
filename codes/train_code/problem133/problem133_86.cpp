#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  cout << fixed << setprecision(10) <<  pow(pow(x1 - x2, 2) + pow(y1 - y2, 2), 0.5) << endl;
}

