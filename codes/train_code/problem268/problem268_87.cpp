#include <bits/stdc++.h>
using namespace std;
template <class T, class U>
ostream &operator<<(ostream &os, const pair<T, U> &p) {
  os << "(" << p.first << "," << p.second << ")";
  return os;
}
#ifdef __LOCAL
#define debug(x) cerr << __LINE__ << ": " << #x << " = " << x << endl
#define debugArray(x, n)                           \
  cerr << __LINE__ << ": " << #x << " = {";        \
  for (long long hoge = 0; (hoge) < (n); ++(hoge)) \
    cerr << ((hoge) ? "," : "") << x[hoge];        \
  cerr << "}" << endl
#else
#define debug(x) (void(0))
#define debugArray(x, n) (void(0))
#endif

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  auto f = [](int n) { return n & 1 ? 3 * n + 1 : n / 2; };
  const int N = 1123456;
  int a[N];
  cin >> a[1];
  bool used[N];
  fill(used, used + N, false);
  used[a[1]] = true;
  for (int i = 2; i < N; i++) {
    a[i] = f(a[i - 1]);
    if (used[a[i]]) {
      cout << i << '\n';
      break;
    }
    used[a[i]] = true;
  }
  return 0;
}
