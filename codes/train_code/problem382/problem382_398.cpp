#include <bits/stdc++.h>
#include <atcoder/dsu>

using namespace std;
using namespace atcoder;

#define REP(i, n) for (int i=0; i<(n); ++i)
#define FOR(i, a, n) for (int i=(a); i<(n); ++i)

#define SZ(x) ((int)(x).size())
#define ALL(x) (x).begin(),(x).end()

#define DUMP(x) cerr<<#x<<" = "<<(x)<<endl
#define DEBUG(x) cerr<<#x<<" = "<<(x)<<" (L"<<__LINE__<<")"<<endl;

template<class T>
ostream &operator<<(ostream &os, const vector<T> &v) {
  os << "[";
  REP(i, SZ(v)) {
    if (i) os << ", ";
    os << v[i];
  }
  return os << "]";
}

template<class T, class U>
ostream &operator<<(ostream &os, const pair<T, U> &p) {
  return os << "(" << p.first << " " << p.second << ")";
}

template<class T>
bool chmax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

template<class T>
bool chmin(T &a, const T &b) {
  if (b < a) {
    a = b;
    return true;
  }
  return false;
}

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using P = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;

const ll MOD = 1e9 + 7;
const int INF = INT_MAX / 2;
const ll LINF = LLONG_MAX / 2;
const ld eps = 1e-9;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(10);

  int n, q; cin >> n >> q;
  dsu uf(n);
  REP(_, q) {
    int t; cin >> t;
    if(t == 0) {
      int u, v; cin >> u >> v;
      uf.merge(u, v);
    } else {
      int u, v; cin >> u >> v;
      cout << uf.same(u, v) << endl;
    };
  }

  return 0;
}