#include <iostream>
#include <stdio.h>


using namespace std;



int main(){
  int a,b;
  std::cin >> a>>b;
  if(a>b){
    std::cout << "a > b" << '\n';
  }else if(a<b){
    std::cout << "a < b" << '\n';
  }else {
    std::cout << "a == b" << '\n';
  }

}