#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  int a;
  cin >> A >> B >> C;
  if (C - (A - B) < 0)
  {
    cout << 0 << endl;
  }
  else
  {
    cout << C - (A - B) << endl;
  }
}