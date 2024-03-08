#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> c(n - 1), s(n - 1), f(n - 1);
  rep(i, n - 1) cin >> c[i] >> s[i] >> f[i];

  vector<int> t(n);
  rep(i, n - 1) {
    for (int j = i; j < n - 1; j++) {
      if (t[i] < s[j]) {
        t[i] = s[j];
      } else if (t[i] % f[j] != 0) {
        t[i] += f[j] - t[i] % f[j];
      }
      t[i] += c[j];
    }
  }

  rep(i, n) cout << t[i] << endl;
  return 0;
}
