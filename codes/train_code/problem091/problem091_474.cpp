#include <bits/stdc++.h>
using namespace std;
int64_t INF = (1LL << 62);
int64_t N, K, MAXN = 100010;
vector<vector<pair<int, int>>> Graph(MAXN);

int64_t dijkstra(int64_t start, int64_t goal)
{
  priority_queue<pair<int64_t, int64_t>, vector<pair<int64_t, int64_t>>, greater<pair<int64_t, int64_t>>> PQ;
  vector<int64_t> Color(MAXN, 0), D(MAXN, INF);

  D.at(start) = 0;
  PQ.push(make_pair(0, start));
  Color.at(start) = 1;

  while (!PQ.empty())
  {
    pair<int64_t, int64_t> f = PQ.top();
    PQ.pop();
    int64_t u = f.second;
    Color.at(u) = 2;
    if (D.at(u) < f.first)
      continue;
    for (int i = 0; i < Graph.at(u).size(); i++)
    {
      int64_t v = Graph.at(u).at(i).first;
      if (Color.at(v) == 2)
        continue;
      if (D.at(v) > D.at(u) + Graph.at(u).at(i).second)
      {
        D.at(v) = D.at(u) + Graph.at(u).at(i).second;
        PQ.push(make_pair(D.at(v), v));
        Color.at(v) = 1;
      }
    }
  }
  return D.at(goal);
}

int main()
{
  cin >> K;
  for (int i = 0; i < K; i++)
  {
    Graph.at(i).push_back(make_pair((i + 1) % K, 1));
    Graph.at(i).push_back(make_pair((i * 10) % K, 0));
  }
  cout << dijkstra(1, 0) + 1 << endl;
}
