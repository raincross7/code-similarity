#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A, B, C;
  cin >> A >> B >> C;

  cout << max({A * 10 + B + C, A + B * 10 + C, A + B + C * 10}) << endl;
}
