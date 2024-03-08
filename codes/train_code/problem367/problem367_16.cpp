#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, s, n) for (int i = (s); i < (n); i++)
#ifdef LOCAL
#define INPUT_FILE                                   \
  ifstream in("atcoder-problems/diverta2019_c.txt"); \
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

  int N;
  cin >> N;

  ll ans = 0;
  ll ea = 0;
  ll sb = 0;
  ll both = 0;

  rep(i, N) {
    string s;
    cin >> s;
    rep(j, s.size() - 1) {
      if (s[j] == 'A' && s[j + 1] == 'B') ans++;
    }
    if (s[0] == 'B' && s[s.size() - 1] == 'A')
      both++;
    else if (s[0] == 'B')
      sb++;
    else if (s[s.size() - 1] == 'A')
      ea++;
  }

  if (both == 0) {
    ans += min(ea, sb);
  } else {
    if (ea + sb > 0)
      ans += both + min(ea, sb);
    else
      ans += both - 1;
  }
  cout << ans << endl;
}