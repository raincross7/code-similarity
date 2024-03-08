#include <bits/stdc++.h>
#define rep(i, to) for (int i = 0; i < (to); i++)
#define rrep(i, to) for (int i = (to) - 1; i >= 0; i--)
#define repf(i, from, to) for (int i = (from); i < (to); i++)
#define all(v) v.begin(), v.end()
#define unless(cond) if (!(cond))
using namespace std;
using ll = long long;
template <typename T>
using V = vector<T>;
template <typename T, typename U>
using P = pair<T, U>;

int main() {
  int n, l;

  cin >> n >> l;
  V<string> s(n);

  rep(i, n) {
    cin >> s[i];
  }
  sort(s.begin(), s.end());

  string ans = "";
  rep(i, n) {
    ans = ans + s[i];
  }

  cout << ans << endl;
}