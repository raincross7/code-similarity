#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  string s;
  cin >> s;
  bool ok = false;
  if (s[0] == s[1] && s[2] == s[3] && s[0] != s[2]) ok = true;
  if (s[0] == s[2] && s[1] == s[3] && s[0] != s[1]) ok = true;
  if (s[0] == s[3] && s[1] == s[2] && s[0] != s[1]) ok = true;
  if (ok) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}