#include <iostream>
using namespace std;
int main() {
  char c;
  cin >> c;
  if (c >= 'A' && c <= 'Z') cout << 'A' << endl;
  else cout << 'a' << endl;
  return 0;
}