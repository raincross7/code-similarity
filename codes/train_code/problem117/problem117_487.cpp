#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c;
  string result;
  cin >> a >> b >> c;
  if (a < b && b < c) {
    result = "Yes";
  } else {
    result = "No";
  }

  cout << result << endl;
}
