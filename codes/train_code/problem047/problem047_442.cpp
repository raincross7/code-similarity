#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, s, n) for (int i = (s); i < (n); i++)
#ifdef LOCAL
#define INPUT_FILE                   \
  ifstream in("atcoder-problems/abc084_c.txt"); \
  cin.rdbuf(in.rdbuf());
#define print_vec(v) \
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
const ll LINF = 1e18+100;
const int MOD = 1e9 + 7;

int main() {
  INPUT_FILE CIN_OPTIMIZE;

  int N;
  cin >> N;
  
  vector<int> c(N - 1);
  vector<int> s(N - 1);
  vector<int> f(N - 1);
  rep(i, N - 1) { cin >> c[i] >> s[i] >> f[i]; }

  vector<int> ans(N, 0);
  rep(i, N - 1) {
    int time = 0;
    repi(j, i, N - 1) {
      if (time < s[j]) {
        time += s[j] - time;
      } else {
        int rest = (time - s[j]) % f[j];
        time += rest  == 0 ? 0 : f[j] - rest;
      }
      time += c[j];
    }
    ans[i] = time;
  }

  rep(i, N) cout << ans[i] << endl;

}