// #pragma GCC optimize("unroll-loops", "omit-frame-pointer", "inline")
// #pragma GCC option("arch=native", "tune=native", "no-zero-upper")
// #pragma GCC
// target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("tree-vectorize","openmp","predictive-commoning")
// #pragma GCC option("D_GLIBCXX_PARALLEL","openmp")

// #pragma GCC optimize("O3")
// #pragma GCC target("avx2")

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

template <class T>
struct RangeSum {
  vector<T> vec;
  RangeSum() {}
  RangeSum(vector<T> elems) : vec(elems) {
    for (int i = 1; i < vec.size(); i++) { vec[i] += vec[i - 1]; }
  }
  T sum(int l, int r) {
    if (l > r) return T(0);
    if (l == 0)
      return vec[r];
    else
      return vec[r] - vec[l - 1];
  }
};

void solve() {
  int N, K;
  cin >> N >> K;
  vector<int> P(N);
  vector<ll> C(N);
  cin >> P;
  cin >> C;
  for (int i = 0; i < N; i++) P[i]--;
  ll ans = *max_element(all(C));
  vector<bool> used(N, false);
  while (1) {
    int v = -1;
    for (int i = 0; i < N; i++) {
      if (!used[i]) {
        v = i;
        break;
      }
    }
    if (v == -1) break;
    vector<int> vs;
    vector<ll> cs;
    ll sum = 0ll;
    while (!used[v]) {
      vs.push_back(v);
      cs.push_back(C[v]);
      used[v] = true;
      sum += C[v];
      v = P[v];
    }
    // dmp(vs);
    // dmp(cs);
    // dmp(sum);
    sum = max(sum, 0ll);
    int V = vs.size();
    for (int i = 0; i < V; i++) {
      vs.push_back(vs[i]);
      cs.push_back(cs[i]);
    }
    RangeSum<ll> rs(cs);
    if (sum > 0 && K / N > 0) ans = max(ans, sum * (K / V));
    for (int i = 0; i < V; i++) {
      for (int j = i; j < 2 * V; j++) {
        int rem = j - i + 1;
        if (rem <= K) ans = max(ans, rs.sum(i, j) + sum * ((K - rem) / V));
      }
    }
  }
  cout << ans << endl;
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
