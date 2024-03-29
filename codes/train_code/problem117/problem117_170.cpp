/**
 * ??????

???????????´??°a, b, c?????????????????????????????? a < b <
c????????¶????????????????????°"Yes"?????????????????????????????°"No"???????????????????????°?????????????????????????????????

Input
???????????´??°???????????§????????????????????????????????????

Output
Yes?????????No????????????????????????????????????

Constraints
0 ??? a, b, c ??? 100
Sample Input 1
1 3 8
Sample Output 1
Yes
Sample Input 2
3 8 1
Sample Output 2
No

 */

#include <iostream>
#include <sstream>

int main(int argc, char const *argv[]) {
  unsigned int a, b, c;
  a = b = c = 0;

  while (true) {
    std::string param;

    getline(std::cin, param);
    std::istringstream iss(param);
    iss >> a >> b >> c;

    if ((a > 100) || (b > 100) || (c > 100)) {
      std::cout << "Error: 0 <= a, b, c <= 100" << std::endl;
    } else {
      break;
    }
  }
  if ((a < b) && (b < c)) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }

  return 0;
}