#include<iostream>
#include<iomanip>

using namespace std;

int main(void){
  int a, b;

  cin >> a >> b;

  cout << a / b << " " << a % b << " " << fixed << setprecision(6) << (double)a / b << endl;
  
  return 0;
}