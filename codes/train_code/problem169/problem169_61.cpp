#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define P pair<ll, ll>

#define FORm(i, m) for (auto i = m.begin(); i != m.end(); i++)

#define all(v) v.begin(), v.end()

#define sortAl(v) sort(all(v))
#define sortAlr(v)                                                             \
  sort(v.begin(), v.end());                                                    \
  reverse(v.begin(), v.end())

#define cout(n) cout << fixed << setprecision(n)

#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, n) for (int i = 1; i < n; i++)

template <class T> inline void chmax(T &a, T b) { a = std::max(a, b); }
template <class T> inline void chmin(T &a, T b) { a = std::min(a, b); }

#define mod (int)(1e9 + 7)
#define INF LLONG_MAX

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll a, b;
  cin >> a >> b;

  cout << (a * b - a - b + 1) << endl;

  return 0;
}
