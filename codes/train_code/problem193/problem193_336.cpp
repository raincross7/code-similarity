#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, s, n) for (int i = (s); i < (n); i++)
#ifdef LOCAL
#define INPUT_FILE                              \
  ifstream in("atcoder-problems/abc079_c.txt"); \
  cin.rdbuf(in.rdbuf());
#define print_vec(v)                        \
  rep(l, v.size()) { cout << v[l] << " "; } \
  cout << endl;
#else
#define INPUT_FILE
#define print_vec(v)
#endif
#define CIN_OPTIMIZE \
  cin.tie(0);        \
  ios::sync_with_stdio(false);
typedef pair<int, int> P;
typedef long long ll;
typedef pair<ll, ll> pl;
const int INF = 100100100;
const ll LINF = 1e18 + 100;
const int MOD = 1e9 + 7;

int main() {
  INPUT_FILE CIN_OPTIMIZE;

  int N = 4;
  vector<int> c(N, 0);
  string S;
  cin >> S;
  rep(i, N) { c[i] = S[i] - '0'; }

  rep(i, pow(3, 2)) {
    int ans = c[0];
    rep(j, 3) {
      if (i & 1 << j) {
        ans += c[j + 1];
      } else {
        ans -= c[j + 1];
      }
    }
    if (ans == 7) {
      cout << c[0];
      rep(j, 3) { cout << ((i & 1 << j) ? "+" : "-") << c[j + 1]; }
      cout << "=7";
      return 0;
    }
  }
}