#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
  int a, b, x;
  cin >> a >> b >> x;
  cout << ((a <= x && x <= a + b) ? "YES" : "NO") << endl;
  return 0;
}