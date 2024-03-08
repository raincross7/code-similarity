#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

using namespace std;
using ll = long long;

const ll MOD = 1000000007LL; // = 10^9 + 7
const double PI = 3.14159265358979;

class UnionFind{
public:
  vector<int> p;		// 親
  vector<int> rank;	// サイズ・各集合の根のみ有効
  UnionFind(int n){
    p.resize(n, -1);
    rank.resize(n, 1);
  }
  int root(int x){
    if(p[x] == -1)return x;
    else return p[x] = root(p[x]); // 深さを 1 にしている
  }
  void unite(int x, int y){
    x = root(x); y = root(y);
    if(x == y)return;
    if(rank[x] > rank[y]) swap(x, y); // rankの小さいものを下につける
    rank[y] += rank[x];
    p[x] = y;
  }
  //xが属すグループのサイズ
  int size(int x){ return rank[root(x)]; }
  bool same(int x, int y){ return (root(x) == root(y)); }
};

void solve()
{
  int n, m;
  cin >> n >> m;
  vector<int> p(n);
  for(int i = 0; i < n; ++i)
  {
    cin >> p[i];
  }

  UnionFind uf(n + 1);
  ll inx, iny;
  for(int i = 0; i < m; ++i)
  {
    cin >> inx >> iny;
    uf.unite(inx, iny);
  }

  int ans = 0;
  for(int i = 0; i < n; ++i)
  {
    ans += uf.root(i + 1) == uf.root(p[i]);
  }
  cout << ans;
}

int main()
{
  fastio;
  solve();

  return 0;
}