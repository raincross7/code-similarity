//..verified against AOJ GRL_4_B
#include <bits/stdc++.h>
using namespace std;

class Graph {
private:
  int V;
  int E;
  vector <vector <int>> adj;
public:
  Graph(int n, int m);
  void addEdge(int s, int t);
  void topologicalSort();
};

Graph::Graph(int n, int m) {
  this->V = n;
  this->E = m;
  adj.resize(n);
}

void Graph::addEdge(int s, int t) {
  adj[s].push_back(t);
}

void Graph::topologicalSort() {
  vector <int> order;
  vector <int> deg(V, 0);
  for (int u = 0; u < V; u++) {
    for (int v : adj[u]) {
      deg[v]++;
    } 
  }
  queue <int> from;
  for (int u = 0; u < V; u++) {
    if (deg[u] == 0) {
      from.push(u);
    } 
  } 
  while (!from.empty()) {
    int u = from.front();
    from.pop();
    order.emplace_back(u);
    for (int v : adj[u]) {
      if (deg[v] == 1) {
        from.push(v);
      }
      deg[v]--;
    } 
  }
  if ((int) order.size() != V) { //Cycle present
    //TODO
  }
  
  for (int node : order) cout << node << " ";
  cout << endl;
}

int main() {
  int n, m;
  cin >> n >> m;
  Graph g(n, m);
  int s, t;
  for (int i = 0; i < m; i++) {
    cin >> s >> t;
    g.addEdge(s, t);
  } 
  g.topologicalSort();
  return 0;
} 
