/*input
a
aa
*/

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s, t;
  cin >> s >> t;
  t = t.substr(0, (int)t.size()-1);
  if (s == t) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}