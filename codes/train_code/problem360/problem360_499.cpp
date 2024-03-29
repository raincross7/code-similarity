#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;

struct edge { int to, cap, rev; };
#define MAX_V	(202)
#define INF		(2000000000)

vector<edge> G[MAX_V];
int level[MAX_V];
int iter[MAX_V];

void add_edge(int from, int to, int cap) {
	G[from].push_back(edge{ to, cap, (int)G[to].size() });
	G[to].push_back(edge{ from, 0, (int)G[from].size() - 1 });
}

void bfs(int s) {
	memset(level, -1, sizeof(level));
	queue<int> que;
	level[s] = 0;
	que.push(s);
	while (!que.empty()) {
		int v = que.front();
		que.pop();
		for (int i = 0; i < G[v].size(); i++) {
			edge& e = G[v][i];
			if (e.cap > 0 && level[e.to] < 0) {
				level[e.to] = level[v] + 1;
				que.push(e.to);
			}
		}
	}
}

int dfs(int v, int t, int f) {
	if (v == t) return f;
	for (int& i = iter[v]; i < G[v].size(); i++) {
		edge& e = G[v][i];
		if (e.cap > 0 && level[v] < level[e.to]) {
			int d = dfs(e.to, t, min(f, e.cap));
			if (d > 0) {
				e.cap -= d;
				G[e.to][e.rev].cap += d;
				return d;
			}
		}
	}
	return 0;
}

int max_flow(int s, int t) {
	int flow = 0;
	while (true) {
		bfs(s);
		if (level[t] < 0) return flow;
		memset(iter, 0, sizeof(iter));
		int f;
		while ((f = dfs(s, t, INF)) > 0) {
			flow += f;
		}
	}
}

int main()
{
	int N;
	cin >> N;
	vector<pair<int, int>> RED(N);
	for (int i = 0; i < N; i++) {
		cin >> RED[i].first >> RED[i].second;
		add_edge(0, i + 1, 1);
	}
	sort(RED.begin(), RED.end());
	for (int i = 0; i < N; i++) {
		int c, d;
		cin >> c >> d;
		add_edge(i + N + 1, MAX_V-1, 1);
		for (int j = 0; j < N; j++) {
			auto red = RED[j];
			if (red.first < c) {
				if (red.second < d) {
					add_edge(j+1, i+N + 1, 1);
				}
			}
		}
	}
	cout << max_flow(0, MAX_V - 1);
}
