#include <bits/stdc++.h>
#define fi first
#define se second
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(), a.end()
#define rrng(a) a.rbegin(), a.rend()
#define maxs(x, y) (x = max(x, y))
#define mins(x, y) (x = min(x, y))
#define limit(x, l, r) max(l, min(x, r))
#define lims(x, l, r) (x = max(l, min(x, r)))
#define isin(x, l, r) ((l) <= (x) && (x) < (r))
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
#define pcnt __builtin_popcountll
#define uni(x) x.erase(unique(rng(x)), x.end())
#define show(x) cout << #x << " = " << x << endl;
#define print(x) cout << x << endl;
#define PQ(T) priority_queue<T, v(T), greater<T> >
#define bn(x) ((1 << x) - 1)
#define dup(x, y) (((x) + (y)-1) / (y))
#define newline puts("")
#define v(T) vector<T>
#define vv(T) v(v(T))
using namespace std;
typedef long long int ll;
typedef unsigned uint;
typedef unsigned long long ull;
typedef pair<int, int> P;
typedef tuple<int, int, int> T;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<P> vp;
typedef vector<T> vt;

template <typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val) {
  std::fill((T *)array, (T *)(array + N), val);
}
ll dp[1010][20010];
const ll inf = 1e9;
int main() {
  Fill(dp, inf);
  int h, n;
  cin >> h >> n;
  vl a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  rep(i, n+1) dp[i][0] = 0;
  rep(i, n) {
    rep(j, h + 1) {
      if (j < a[i]){
        dp[i + 1][j] = min(dp[i][j], b[i]);
        dp[i + 1][j] = min(dp[i + 1][j], b[i]);
      }
      else{
        dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
        dp[i + 1][j] = min(dp[i + 1][j], dp[i][j - a[i]] + b[i]);
        dp[i + 1][j] = min(dp[i + 1][j], dp[i + 1][j - a[i]] + b[i]);
      }
    }
  }
  // rep(i, n + 1) {
  //   rep(j, h + 1) cout << dp[i][j] << " ";
  //   cout << endl;
  // }
  ll ans = inf;
  rep(i, n+1) mins(ans, dp[i][h]);
  cout << ans << endl;
  return 0;
}