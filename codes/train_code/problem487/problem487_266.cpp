#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> n(3);
  cin >> n[0] >> n[1] >> n[2];

  sort(n.begin(), n.end());

  int a;
  a = n[0] + n[1] + n[2] * 10;

  cout << a << endl;

  return 0;
}
