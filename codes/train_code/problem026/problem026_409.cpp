#include <iostream>

using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  if(a == 1 && b == 1){
    cout << "Draw" << endl;
  }else if(a == 1){
    cout << "Alice" << endl;
  }else if(b == 1){
    cout << "Bob" << endl;
  }else if(a > b){
    cout << "Alice" << endl;
  }else if(b > a){
    cout << "Bob" << endl;
  }else{
    cout << "Draw" << endl;
  }
  return 0;
}