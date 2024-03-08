// #pragma GCC optimize("unroll-loops", "omit-frame-pointer", "inline")
// #pragma GCC option("arch=native", "tune=native", "no-zero-upper")
// #pragma GCC
// target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("tree-vectorize","openmp","predictive-commoning")
// #pragma GCC option("D_GLIBCXX_PARALLEL","openmp")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef vector<int> vi;
typedef vector<ll> vll;
// #define int long long
#define pb push_back
#define mp make_pair
#define eps 1e-9
#define INF 2000000000               // 2e9
#define LLINF 2000000000000000000ll  // 2e18 (llmax:9e18)
#define fi first
#define sec second
#define all(x) (x).begin(), (x).end()
#define sq(x) ((x) * (x))
#define dmp(x) cerr << #x << ": " << x << endl;

template <class T>
void chmin(T &a, const T &b) {
  if (a > b) a = b;
}
template <class T>
void chmax(T &a, const T &b) {
  if (a < b) a = b;
}

template <class T>
using MaxHeap = priority_queue<T>;
template <class T>
using MinHeap = priority_queue<T, vector<T>, greater<T>>;
template <class T>
vector<T> vect(int len, T elem) {
  return vector<T>(len, elem);
}

template <class T, class U>
ostream &operator<<(ostream &os, const pair<T, U> &p) {
  os << p.fi << ',' << p.sec;
  return os;
}
template <class T, class U>
istream &operator>>(istream &is, pair<T, U> &p) {
  is >> p.fi >> p.sec;
  return is;
}
template <class T>
ostream &operator<<(ostream &os, const vector<T> &vec) {
  for (int i = 0; i < vec.size(); i++) {
    os << vec[i];
    if (i + 1 < vec.size()) os << ' ';
  }
  return os;
}
template <class T>
istream &operator>>(istream &is, vector<T> &vec) {
  for (int i = 0; i < vec.size(); i++) is >> vec[i];
  return is;
}
void fastio() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  cout << fixed << setprecision(20);
}

#define endl "\n"

void solve() {
  int N;
  cin >> N;
  vector<int> t(N), v(N);
  cin >> t;
  cin >> v;
  auto dp = vect(N + 1, vect(101, -1.0));
  dp[0][0] = 0.0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= v[i]; j++) {
      if (dp[i][j] < 0.0) continue;
      for (int k = max(0, j - t[i]); k <= min(v[i], j + t[i]); k++) {
        if (j <= k) {
          double add = 0.0;
          double d = abs(j - k);
          double rem = (double)t[i] - d;
          double h = (double)(v[i] - k);
          add += (double)(j + k) * d / 2.0 + (double)k * rem;
          if (rem <= 2.0 * h) {
            add += rem * rem / 4.0;
          } else {
            add += h * h + (rem - h * 2.0) * h;
          }
          chmax(dp[i + 1][k], dp[i][j] + add);
        } else {
          double add = 0.0;
          double d = abs(j - k);
          double rem = (double)t[i] - d;
          double h = (double)(v[i] - j);
          add += (double)(j + k) * d / 2.0 + (double)j * rem;
          if (rem <= 2.0 * h) {
            add += rem * rem / 4.0;
          } else {
            add += h * h + (rem - h * 2.0) * h;
          }
          chmax(dp[i + 1][k], dp[i][j] + add);
        }
      }
    }
  }
  cout << dp[N][0] << endl;
  return;
}

signed main() {
  fastio();
  solve();
  // int t; cin >> t; while(t--)solve();

  // int t; cin >> t;
  // for(int i=1;i<=t;i++){
  //   cout << "Case #" << i << ": ";
  //   solve();
  // }
  return 0;
}
