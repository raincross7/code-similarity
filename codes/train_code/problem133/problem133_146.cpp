/**
 * ?????¢

?????? P1(x1, y1), P2(x2, y2) ????????¢????±???????????????°????????????????????????

Input
x1, y1, x2, y2 ????????°???????????????????????§?????????????????????

Output
P1??¨P2????????¢????????°??§?????????????????????????????????0.0001??\????????????????????£????????????????????¨????????????

Sample Input
0 0 1 1
Sample Output
1.41421356

 */

#include <iostream>
#include <sstream>
#include <complex>
#include <iomanip>

int main(int argc, char const *argv[]) {
  double x1, y1, x2, y2;
  std::string Param;
  std::istringstream iss;
  getline(std::cin, Param);
  iss.str(Param);
  iss >> x1 >> y1 >> x2 >> y2;

  std::cout << std::fixed << std::setprecision(8) << sqrt(pow(std::abs(x1 - x2), 2) + pow(std::abs(y1 - y2), 2)) << std::endl;

  return 0;
}