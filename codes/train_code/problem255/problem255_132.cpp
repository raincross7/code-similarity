#include <bits/stdc++.h>
using namespace std;

int main() {
  char a, b, c;
  cin >> a >> b >> c;
  
  if (a == b || b == c || a == c) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}