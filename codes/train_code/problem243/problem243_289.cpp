#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  string s,t;
  cin >> s >> t;
  int ans = 0;
  rep(i, 3) {
    if (s.at(i) == t.at(i)) ans++;
  }
  cout << ans;
}