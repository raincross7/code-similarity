#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int r;
  cin >> r;

  if (r < 1200) cout << "ABC\n";
  else if (r < 2800) cout << "ARC\n";
  else cout << "AGC\n";

  return (0);
}
