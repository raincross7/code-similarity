#include <bits/stdc++.h>
#include <assert.h>

using namespace std;

struct Edge
{
  int to, cost;
};

int main()
{
  int N, M;
  cin >> N >> M;
  vector<Edge> edge[N];
  for (int i = 0; i < M; i++)
  {
    int L, R, D;
    cin >> L >> R >> D;
    L--;
    R--;
    edge[L].push_back({R, D});
    edge[R].push_back({L, -D});
  }
  bool ok = true;
  vector<long long> cost(N, 1e18);
  for (int i = 0; i < N; i++)
    if (cost[i] == 1e18)
    {
      queue<int> que;
      que.push(i);
      cost[i] = 0;
      while (que.size())
      {
        int now = que.front();
        que.pop();
        for (Edge t : edge[now])
          if (cost[t.to] == 1e18)
          {
            cost[t.to] = cost[now] + t.cost;
            que.push(t.to);
          }
          else if (cost[t.to] != cost[now] + t.cost)
            ok = false;
      }
    }
  if (ok)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
