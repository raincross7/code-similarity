// This template belongs to Juan Carlo Vieri

/*   ____   __
    /  _/  |  |    __         __
 __|  |__  |  |   /_/        |  |
|__    __| |  |   __    ____ |  | __   ___   _  ___
   |  |    |  |  |  |  /  _/ |  |/ /  / _ \ | |/ _/
   |  |    |  |  |  | |  |_  |     \ |  __/ |   /
   |__|    |__|  |__|  \___\ |__|\__\ \___\ |__|
*/

#include <bits/stdc++.h>
using namespace std;

typedef int_fast64_t ll;
typedef long double ld;
typedef int_fast32_t intt;
typedef int_fast32_t tmp_m;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define puts(x) cout << x << endl
#define deb(x) cout << #x << ' ' << x << endl
#define rep(i, cmp1, cmp2) for (tmp_m i = (tmp_m)cmp1; i < (tmp_m)cmp2; ++i)
#define repp(i, cmp1, cmp2) for (tmp_m i = (tmp_m)cmp1; i >= (tmp_m)cmp2; --i)
#define pb push_back
#define st stack
#define pa pair
#define vc vector
#define qu queue
#define pq priority_queue
#define fr first
#define sc second
#define mp map
const ld pi = acos(-1.0);
const intt mod = 1e9 + 7;

struct pr {
  intt x;
  intt y;
  intt dst;
  pr() {}
  pr(intt x, intt y, intt dst) : x(x), y(y), dst(dst) {}
  inline bool operator<(const pr& cmp2) const {
    if (dst != cmp2.dst) return dst < cmp2.dst;
    if (x != cmp2.x) return x < cmp2.x;
    return y < cmp2.y;
  }
  inline bool operator==(const pr& cmp2) const {
    return (cmp2.dst == dst) && (cmp2.x == x) && (cmp2.y == y);
  }
  inline bool operator>(const pr& cmp2) const {
    if (dst != cmp2.dst) return dst > cmp2.dst;
    if (x != cmp2.x) return x > cmp2.x;
    return y > cmp2.y;
  }
};

struct point {
  intt x;
  intt y;
  point() {}
  point(intt x, intt y) : x(x), y(y) {}
  inline bool operator<(const point& cmp2) const {
    if (cmp2.x != x) return cmp2.x < x;
    return cmp2.y < y;
  }
  inline bool operator==(const point& cmp2) const {
    return (cmp2.x == x) && (cmp2.y == y);
  }
  inline bool operator>(const point& cmp2) const {
    if (cmp2.x != x) return cmp2.x > x;
    return cmp2.y > y;
  }
};

namespace std {

template<typename T>
struct hash<vector<T> > {
  size_t operator()(const vector<T>& k) const {
    size_t ret = 0xf3ee477d;
    for (size_t i = 0; i != k.size(); ++ i)
      ret ^= hash(hash(k[i]) + i);
    return ret;
  }
};

template<>
struct hash<pr> {
  size_t operator()(const pr& cmp1) const {
    return (hash<intt>()(cmp1.x)) ^ (hash<intt>()(cmp1.y)) ^
           (hash<intt>()(cmp1.dst));
  }
};

template<>
struct hash<point> {
  size_t operator()(const point& cmp1) const {
    return (hash<intt>()(cmp1.x)) ^ (hash<intt>()(cmp1.y));
  }
};
}

inline bool spoint(const point& cmp1, const point& cmp2) {
  // swap(cmp1, cmp2);
  if (cmp1.x != cmp2.x) return cmp1.x < cmp2.x;
  return cmp1.y < cmp2.y;
}

inline bool spr(const pr& cmp1, const pr& cmp2) {
  // swap(cmp1, cmp2);
  if (cmp1.dst != cmp2.dst) return cmp1.dst < cmp2.dst;
  if (cmp1.x != cmp2.x) return cmp1.x < cmp2.x;
  return cmp1.y < cmp2.y;
}

void sub() {

}

intt n, q;
vc<intt> edge[200005];
intt vis[200005];
vc<intt> tree[200005];
intt lazy[200005];

void makeTree(intt cur){
  for(auto i : edge[cur]){
    if(vis[i])continue;
    vis[i] = 1;
    tree[cur].pb(i);
    makeTree(i);
  }
}

void rek(intt cur){
  for(auto i : tree[cur]){
    lazy[i] += lazy[cur];
    rek(i);
  }
}

void solve() {
  // intt t; cin >> t;
  // while (t--) sub();
  cin >> n >> q;
  rep(i, 0, n - 1){
    intt u, v;
    cin >> u >> v;
    --u;--v;
    edge[u].pb(v);
    edge[v].pb(u);
  }
  vis[0] = 1;
  makeTree(0);
  rep(i, 0, q){ 
    intt u, val;
    cin >> u >> val;
    --u;
    lazy[u] += val;
  }
  rek(0);
  rep(i, 0, n){
    cout << lazy[i] << ' ';
  }
  cout << endl;
}

void init() {
  // remove if interactive
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  srand(time(0));
  // memset(dp, -1, sizeof dp);
}

int main() {
  init();
  solve();
  return 0;
}
