#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main(){
  int X,Y = 0;
  cin >> X >> Y;
  //a + b = X, 2a + 4b = Y
  //b = (Y - 2X)/2,a = -(Y - 4X)/2
  if (Y % 2 == 1){
    cout << "No" << endl;
  }else	if(Y - 2*X >= 0 && Y - 4*X <= 0){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
  return 0;
}