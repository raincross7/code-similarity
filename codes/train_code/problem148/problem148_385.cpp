#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, s, n) for (int i = (s); i < (n); i++)
#ifdef LOCAL
#define INPUT_FILE                              \
  ifstream in("atcoder-problems/agc011_b.txt"); \
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

  vector<ll> c(N);
  rep(i, N) { cin >> c[i]; }
  sort(c.begin(), c.end());

  vector<ll> sum(N);

  sum[0] = c[0];
  repi(i, 1, N) { sum[i] = sum[i - 1] + c[i]; }

  int j = -1;
  rep(i, N - 1) {
    ll a = sum[i] * 2;
    if (a < c[i + 1]) {
      j = i;
    }
  }

  ll ans = N - (j + 1);
  cout << ans << endl;
}