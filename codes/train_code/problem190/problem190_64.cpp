#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  string s;
  cin >> n >> s;
  if (n % 2) {
    cout << "No";
  } else {
    if (s.substr(0, n / 2) == s.substr(n / 2)) {
      cout << "Yes";
    } else {
      cout << "No";
    }
  }
  return 0;
}
