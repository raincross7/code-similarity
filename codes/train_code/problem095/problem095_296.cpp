#include <iostream>
using namespace std;

int main() {
  string a, b, c;
  cin >> a >> b >> c;
  cout << char(toupper(a[0])) << char(toupper(b[0])) << char(toupper(c[0]));
}