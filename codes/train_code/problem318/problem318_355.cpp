#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  cout << min(a+b, min(b+c, c+a)) << endl;
}
