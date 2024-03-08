#include <bits/stdc++.h>
using namespace std;

// ----------- define --------------
#define int long long
#define vi vector<int>
#define ii pair<int,int>
#define fi first
#define sc second
#define stoi stoll
#define popcnt __builtin_popcount
#define getBit(x, k) ((x >> k) & 1)
#define all(x) (x).begin(),(x).end()
// ---------------------------------

const int mod = 998244353;

void Main() {
  int n; cin >> n;
  vector<int> m(n);
  int mx = 0;
  for (int i = 0; i < n; i++) {
    int t; cin >> t;
    if (i == 0 && t) {
      cout << 0 << '\n';
      return;
    }
    m[t]++;
    mx = max(mx, t);
  }
  if (m[0] != 1) {
    cout << 0 << '\n';
    return;
  }
  int ans = 1;
  for (int i = 1; i <= mx; i++) {
    if (m[i] == 0) {
      cout << 0 << '\n';
      return;
    }
    for (int j = 1; j <= m[i]; j++) {
      ans *= m[i - 1];
      ans %= mod;
    }
  }
  cout << ans << '\n';
}

signed main() {
#ifdef _DEBUG
  // freopen("in" , "r", stdin );
  cerr << "- ---- -- ----- <3\n";
#endif
  cin.tie(0)->sync_with_stdio(0);
  int T = 1;
  // cin >> T;
  while (T--) Main();
}
