#include <bits/stdc++.h>
#include <type_traits>
using namespace std;

using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define ddrep(i, n) for (int i = n; i > 0; --i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
#define ssrep(i, s, t) for (int i = s; i <= t; ++i)

#define rng(a) a.begin(), a.end()
#define rrng(a) a.rbegin(), a.rend()
#define pb push_back
#define eb emplace_back
#define fi first
#define se second

#define chmax(x, y) (x = max(x, y))
#define chmin(x, y) (x = min(x, y))

using pi = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using ld = long double;

template <class T, class U>
ostream &operator<<(ostream &os, const pair<T, U> &p) {
  os << "(" << p.first << "," << p.second << ")";
  return os;
}

template <class T> ostream &operator<<(ostream &os, const vector<T> &v) {
  os << "{";
  rep(i, (int)v.size()) {
    if (i)
      os << ",";
    os << v[i];
  }
  os << "}";
  return os;
}

template <typename T, size_t S> void printArray(const T (&array)[S]) {
  for (auto val : array)
    std::cout << val << ", ";
  std::cout << "\n";
}

const int mod = 1e9 + 7;
const int inf = 1e9 + 5;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << std::setprecision(10);

  int n; std::cin >> n;
  map<int, int> cnt;
  srep(i, 2, n+1) {
    int x = i;
    for (int j = 2; x != 1; j++) {
      while (x % j == 0) x /= j, cnt[j]++;
    }
  }
  vi vec; for (auto &p : cnt) vec.pb(p.se);
  sort(rrng(vec));
  int ans = 0, len = vec.size();
  rep(i, len) srep(j, i+1, len) srep(k, j+1, len) {
    if (vec[i] >= 4 && vec[j] >= 4 && vec[k] >= 4)
      ans += 3;
    else if (vec[i] >= 4 && vec[j] >= 4 && vec[k] >= 2)
      ans++;
  }
  rep(i, len) srep(j, i+1, len) {
    if (vec[i] >= 24 && vec[j] >= 24) ans += 2;
    else if (vec[i] >= 24 && vec[j] >= 2) ans++;
    if (vec[i] >= 14 && vec[j] >= 14) ans += 2;
    else if (vec[i] >= 14 && vec[j] >= 4) ans++;
  }
  rep(i, len) {
    if (vec[i] >= 74) ans++;
  }
  std::cout << ans << "\n";
}
