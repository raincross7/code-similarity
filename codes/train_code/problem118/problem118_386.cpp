#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int ans = 1;
  for (int i = 1; i < n; ++i) {
    if (s[i] != s[i-1]) ans++;
  }
  cout << ans << endl;
  return 0;
}