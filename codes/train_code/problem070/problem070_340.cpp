#include <iostream>
using namespace std;
int main(){
  int a, b, x;
  cin >> x >> a >> b;
  if(b<=a){
    cout << "delicious\n";
  }
  else if(b-a <= x){
    cout << "safe\n";
  }
  else{
    cout << "dangerous\n";
  }
}