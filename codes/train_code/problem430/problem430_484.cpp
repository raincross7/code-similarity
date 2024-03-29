/**
 * ?????????

???????????´??° a ??¨ b ?????????????????§?????\?????????????¨??????????????????°?????????????????????????????????

a ?? b ??? d (??´??°)
a ?? b ????????? ??? r (??´??°)
a ?? b ??? f (???????°???°?????°)
Input
1?????????????????´??° a, b ????????????????????????

Output
d, r, f
????????????????????§????????£????????????????????????????????????f??????????????????0.00001??\????????????????????£????????????????????¨????????????

Constraints
1 ??? a, b ??? 10^9
Sample Input
3 2
Sample Output
1 1 1.50000

 */

#include <iomanip>
#include <iostream>
#include <sstream>

int main(int argc, char const *argv[]) {
  unsigned int a, b, d, r;
  a = b = 1;
  d = r = 0;
  double f = 0;

  while (true) {
    std::string param;

    getline(std::cin, param);
    std::istringstream iss(param);
    iss >> a >> b;

    if ((a < 1 || a > 1000000000) || (b < 1 || b > 1000000000)) {
      std::cout << "Error: 1 <= a, b <= 1000000000" << std::endl;
    } else {
      break;
    }
  }

  d = a / b;
  r = a % b;
  f = (double)a / (double)b;

  std::cout << std::fixed << std::setprecision(5);
  std::cout << d << " " << r << " " << f << std::endl;

  return 0;
}