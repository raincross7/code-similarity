#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <vector>
#include <list>

using namespace std;

static const int MAX = 10000;

vector<int> G[MAX];
list<int> out;
bool V[MAX];
int N;
int indeg[MAX];

void bfs(int s) {
	queue<int> q;
	q.push(s);
	V[s] = true;
	while (!q.empty()) {
		int u = q.front(); q.pop();
		out.push_back(u);
		for (unsigned int i = 0; i < G[u].size(); i++) {
			int v = G[u][i];
			indeg[v]--;
			if (indeg[v] == 0 && !V[v]) {
				V[v] = true;
				q.push(v);
			}
		}
	}
}

void tsort() {
	for (int i = 0; i < N; i++) {
		indeg[i] = 0;
	}

	for (int u = 0; u < N; u++) {
		for (unsigned int i = 0; i < G[u].size(); i++) {
			int v = G[u][i];
			indeg[v]++;
		}
	}

	for (int u = 0; u < N; u++)
		if (indeg[u] == 0 && !V[u]) bfs(u);

	for (list<int>::iterator it = out.begin(); it != out.end(); it++) {
		cout << *it << endl;
	}
}

int main() {
	int s, t, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++) V[i] = false;

	for (int i = 0; i < M; i++) {
		cin >> s >> t;
		G[s].push_back(t);
	}

	tsort();

	return 0;
}