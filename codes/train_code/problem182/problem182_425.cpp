#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  
  a += b, c += d;
  
  if(a > c) cout << "Left" << endl;
  else if(a == c) cout << "Balanced" << endl;
  else cout << "Right" << endl;
}