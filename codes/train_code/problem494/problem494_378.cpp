#include <bits/stdc++.h>
using namespace std;

#define fs first
#define sc second
#define pb emplace_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

const int32_t inf = 1001001001;
const int64_t infll = 1001001001001001001ll;
const int dx[] = {0, -1, 1, 0, -1, 1, -1, 1}, dy[] = {-1, 0, 0, 1, -1, -1, 1, 1};
const string YES = "YES", NO = "NO", Yes = "Yes", No = "No", yes = "yes", no = "no";

// clang-format off
// ostream &operator<<(ostream &os, __int128_t value) { if (ostream::sentry(os)) { __uint128_t tmp = value < 0 ? -value : value; char buffer[64]; char *d = end(buffer); do { --d; *d = "0123456789"[tmp % 10]; tmp /= 10; } while (tmp != 0); if (value < 0) { --d; *d = '-'; } int len = end(buffer) - d; if (os.rdbuf()->sputn(d, len) != len) { os.setstate(ios_base::badbit); }} return os; }
// istream &operator>>(istream &is, __int128_t &value) { string in; is >> in; value = 0; for (const char &c : in) { if ('0' <= c && c <= '9') value = 10 * value + (c - '0'); } if (in[0] == '-') value *= -1; return is; }
// ostream &operator<<(ostream &os, __uint128_t value) { if (ostream::sentry(os)) { char buffer[64]; char *d = end(buffer); do { --d; *d = "0123456789"[value % 10]; value /= 10; } while (value != 0); int len = end(buffer) - d; if (os.rdbuf()->sputn(d, len) != len) { os.setstate(ios_base::badbit); }} return os; }
// istream &operator>>(istream &is, __uint128_t &value) { string in; is >> in; value = 0; for (const char &c : in) { if ('0' <= c && c <= '9') value = 10 * value + (c - '0'); } return is; }
template <typename T> ostream &operator<<(ostream &os, vector<T> &v) { os << v[0]; for (int i = 1; i < v.size(); ++i) os << " " << v[i]; return os; }
template <typename T> istream &operator>>(istream &is, vector<T> &v) { for (T &in : v) is >> in; return is; }
template <typename T1, typename T2> ostream &operator<<(ostream &os, pair<T1, T2> p) { os << p.fs << " " << p.sc; return os; }
template <typename T1, typename T2> istream &operator>>(istream &is, pair<T1, T2> &p) { is >> p.fs >> p.sc; return is; }

struct IoSetup { IoSetup(){ cin.tie(0); ios::sync_with_stdio(0); cout << fixed << setprecision(10); cerr << fixed << setprecision(10); } } iosetup;

inline int64_t in() { int64_t x = 0; cin >> x; return x; }

template <typename T> void sort(vector<T> &v) { sort(all(v)); }
template <typename T> vector<T> make_v(size_t a, T b) { return vector<T>(a, b); }
template <typename... Ts> auto make_v(size_t a, Ts... ts) { return vector<decltype(make_v(ts...))>(a, make_v(ts...)); }
template <typename T1, typename T2> inline bool chmax(T1 &a, T2 b) { return a < b && (a = b, true); }
template <typename T1, typename T2> inline bool chmin(T1 &a, T2 b) { return a > b && (a = b, true); }
// clang-format on

signed main(int argc, char *argv[]) {
  int64_t n = in(), a = in(), b = in();

  // debug
  // cout << n << endl;

  if (a + b - 1 > n || a * b < n) {
    cout << -1 << endl;
    return 0;
  }

  vector<int64_t> ans(n);
  for (int i = 0; i < n; ++i) {
    ans[i] = n - i;
  }

  if (a == 1) {
    sort(rall(ans));
  } else {
    int cnt = 0;
    for (int i = 0; i < n; i += a) {
      sort(ans.begin() + i, ans.begin() + min(i + a, n));
      cnt++;
    }

    int idx = 0;
    reverse(all(ans));
    for (idx = 0; cnt != b; ++idx) {
      if (ans[idx] > ans[idx + 1]) cnt++;
    }
    sort(ans.begin(), ans.begin() + idx + 1);
    reverse(all(ans));
  }

  cout << ans << endl;
}
