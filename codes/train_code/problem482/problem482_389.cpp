#include <iostream>

int main(int argc, char const *argv[]) {
  while(1){
    int H=0,W=0;
    std::cin >> H >> W;
    if((H==0)&&(W==0))break;
    for(int i=0;i<H;i++){
      for(int j=0;j<W;j++){
        if(i==0 || i==(H-1)){
          std::cout << "#";
        }else if(j==0 || j==(W-1)){
          std::cout << "#";
        }else std::cout << ".";
      }
      std::cout << std::endl;
    }
    std::cout << std::endl;
  }
  return 0;
}