#include <iostream>

signed main() {
  std::string s;
  std::cin >> s;

  std::cout << s.substr(0, 4) + " " + s.substr(4,8) << std::endl;
}
