#include <iostream>
#include <string>

int main(void){
  std::string str;
  std::cin >> str;
  if((str[0]==str[1] && str[1]==str[2]) || (str[1]==str[2] && str[2]==str[3]))
    std::cout << "Yes" << std::endl;
  else std::cout << "No\n" << std::endl;
  return 0;
}