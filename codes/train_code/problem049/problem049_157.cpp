#include <bits/stdc++.h>

using namespace std;

struct StronglyConnectedComponents
{
  vector< vector< int > > gg, rg;
  vector< pair< int, int > > edges;
  vector< int > comp, order, used;

  StronglyConnectedComponents(size_t v) : gg(v), rg(v), comp(v, -1), used(v, 0) {}

  void add_edge(int x, int y)
  {
    gg[x].push_back(y);
    rg[y].push_back(x);
    edges.emplace_back(x, y);
  }

  int operator[](int k)
  {
    return (comp[k]);
  }

  void dfs(int idx)
  {
    if(used[idx]) return;
    used[idx] = true;
    for(int to : gg[idx]) dfs(to);
    order.push_back(idx);
  }

  void rdfs(int idx, int cnt)
  {
    if(comp[idx] != -1) return;
    comp[idx] = cnt;
    for(int to : rg[idx]) rdfs(to, cnt);
  }

  void build(vector< vector< int > > &t)
  {
    for(int i = 0; i < gg.size(); i++) dfs(i);
    reverse(begin(order), end(order));
    int ptr = 0;
    for(int i : order) if(comp[i] == -1) rdfs(i, ptr), ptr++;

    t.resize(ptr);
    set< pair< int, int > > connect;
    for(auto &e : edges) {
      int x = comp[e.first], y = comp[e.second];
      if(x == y) continue;
      if(connect.count({x, y})) continue;
      t[x].push_back(y);
      connect.emplace(x, y);
    }
  }
};


void solve()
{
  int V, E;
  cin >> V >> E;
  StronglyConnectedComponents scc(V);
  for(int i = 0; i < E; i++) {
    int s, t;
    cin >> s >> t;
    scc.add_edge(s, t);
  }
  vector< vector< int > > g;
  scc.build(g);
  vector< int > rev(V);
  for(int i = 0; i < V; i++) rev[scc[i]] = i;
  for(int i = 0; i < V; i++) cout << rev[i] << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  solve();
}