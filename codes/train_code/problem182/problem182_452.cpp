#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b, c ,d;
  cin >> a >> b >> c >> d;
  
  if (a+b == c+d){
    cout << "Balanced";
  }
  else if (a+b<=c+d){
    cout << "Right";
  }
  else if (a+b>=c+d){
    cout << "Left";
  }
}
