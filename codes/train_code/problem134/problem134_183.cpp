// clang-format off
#include <bits/stdc++.h>
#define int long long
#define main signed main()
#define loop(i, a, n) for (int i = (a); i < (n); i++)
#define rep(i, n) loop(i, 0, n)
#define forever while (true)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define prec(n) fixed << setprecision(n)
template<typename A> using V = std::vector<A>;
template<typename A> using F = std::function<A>;
template<typename A, typename B> using P = std::pair<A, B>;
using pii = P<int, int>;
using vi = V<int>;
using vd = V<double>;
using vs = V<std::string>;
using vpii = V<pii>;
using vvi = V<vi>;
using vvpii = V<vpii>;
constexpr int INF = sizeof(int) == sizeof(long long) ? 1000000000000000000LL : 1000000000;
constexpr int MOD = 1000000007;
constexpr double PI = acos(-1);
template<typename A, typename B> bool cmin(A &a, const B &b) { return a > b ? (a = b, true) : false; }
template<typename A, typename B> bool cmax(A &a, const B &b) { return a < b ? (a = b, true) : false; }
template<typename T> std::istream &operator>>(std::istream &is, std::vector<T> &v) { for (T &x : v) is >> x; return is; }
using namespace std;
// clang-format on

main {
  int n;
  cin >> n;
  while (n--) {
    string x, y;
    cin >> x >> y;
    vvi dp(x.size() + 1, vi(y.size() + 1));
    dp[0][0] = 0;
    loop(i, 1, x.size() + 1) loop(j, 1, y.size() + 1) {
      if (x[i - 1] == y[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1] + 1;
        continue;
      }
      dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    }
    cout << dp.back().back() << endl;
  }
}