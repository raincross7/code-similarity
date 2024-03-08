#include <bits/stdc++.h>
// #include <atcoder/all>
using namespace std;
// using namespace atcoder;
template <class T, class U>
ostream &operator<<(ostream &os, const pair<T, U> &p) {
  os << "(" << p.first << "," << p.second << ")";
  return os;
}
#ifdef __LOCAL
#define debug(x) cerr << __LINE__ << ": " << #x << " = " << (x) << '\n'
#define debugArray(x, n)                                      \
  cerr << __LINE__ << ": " << #x << " = {";                   \
  for (long long hoge = 0; (hoge) < (long long)(n); ++(hoge)) \
    cerr << ((hoge) ? "," : "") << x[hoge];                   \
  cerr << "}" << '\n'
#define debugMatrix(x, h, w)                                         \
  cerr << __LINE__ << ": " << #x << " =\n";                          \
  for (long long hoge = 0; (hoge) < (long long)(h); ++(hoge)) {      \
    cerr << ((hoge ? " {" : "{{"));                                  \
    for (long long fuga = 0; (fuga) < (long long)(w); ++(fuga))      \
      cerr << ((fuga ? ", " : "")) << x[hoge][fuga];                 \
    cerr << "}" << (hoge + 1 == (long long)(h) ? "}" : ",") << '\n'; \
  }
#else
#define debug(x) (void(0))
#define debugArray(x, n) (void(0))
#define debugMatrix(x, h, w) (void(0))
#endif

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int N;
  cin >> N;
  vector<int> tree[N];
  for (int i = 0; i < N - 1; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    tree[a].push_back(b);
    tree[b].push_back(a);
  }
  int root = 0;
  for (int i = 0; i < N; i++)
    if (tree[i].size() > 1) {
      root = i;
      break;
    }
  int par[N];
  int depth[N];
  function<void(int, int, int)> dfs = [&](int v, int p, int d) {
    par[v] = p;
    depth[v] = d;
    for (int u : tree[v])
      if (u != p) dfs(u, v, d + 1);
  };
  dfs(root, -1, 0);
  int idx[N];
  iota(idx, idx + N, 0);
  sort(idx, idx + N, [&](int l, int r) { return depth[l] > depth[r]; });
  int color[N];
  bool takahashi = false;
  for (int v : idx) {
    int sz = tree[v].size();
    if (par[v] != -1) sz--;
    for (int u : tree[v])
      if (u != par[v]) {
        if (color[u] == 1) sz--;
      }
    if (sz > 1) {
      takahashi = true;
      break;
    }
    if (sz == 1) {
      color[v] = 1;
    } else {
      color[v] = -1;
    }
    if (v == root) {
      if (color[v] == -1) {
        takahashi = true;
        break;
      }
    }
  }
  cout << (takahashi ? "First" : "Second") << '\n';
  return 0;
}
