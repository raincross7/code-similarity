#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  if(a==b) cout << c << endl;
  else if(a==c) cout << b << endl;
  else cout << a << endl;
}