#include <bits/stdc++.h>
using namespace std;
//A - Libra
int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int left  = a + b;
  int right = c + d;
  
  if(left == right)
    cout << "Balanced" << endl;
  else if(left > right)
    cout << "Left" << endl;
  else if(left < right)
    cout << "Right" << endl;
  else
    cout << "error" << endl;
  
}
