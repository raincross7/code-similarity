#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  a = a % 500;
  if (a > b)
  {
    cout << "No";
  }
  else
  {
    cout << "Yes";
  }
}
