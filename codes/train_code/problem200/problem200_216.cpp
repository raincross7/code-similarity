#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a;
  int b;
  cin >> a;
  cin >> b;
  if((a*b)%2 == 0){
    cout << "Even" << endl;
  }else{
    cout << "Odd" << endl;
  }
  return 0;
}