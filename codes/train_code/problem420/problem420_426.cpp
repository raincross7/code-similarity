#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s, t;
  cin >> s >> t;

  reverse(t.begin(), t.end());
  if (s == t) cout << "YES\n";
  else cout << "NO\n";

  return (0);
}
