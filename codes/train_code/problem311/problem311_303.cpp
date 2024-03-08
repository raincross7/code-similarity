#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  vector<int> t(n);
  rep(i, n) cin >> s[i] >> t[i];
  string x;
  cin >> x;

  int ans = 0;
  bool slp = false;
  rep(i, n) {
    if (slp) ans += t[i];
    if (s[i] == x) slp = true;
  }
  cout << ans << endl;
  return 0;
}