#include <iostream>
#include <vector>
#include <list>
using namespace std;
list<int> L;    //??????????????????????????????????????????????????????????????????
bool DAG_check = false;

void visit(int n, vector<vector<int>>& graph, vector<int>& mark) {
	if (DAG_check == true) {
		return;
	}
	if (mark[n] == 1) {
		DAG_check = true; return;
	}
	else {
		if (mark[n] == 0) {
			mark[n] = 1;
			for (int i = 0; i < graph[n].size();i++) {
				visit(graph[n][i], graph, mark);
			}
			mark[n] = 2;
			L.emplace_back(n);
		}
	}
}

int main() {
	int V, E; cin >> V >> E;
	vector<vector<int>> graph(V);
	vector<int> mark(V, 0); //????????????????????°    1???????????????????????????2??\??\??\?????????
	for (int i = 0; i < E;i++) {
		int s, t; cin >> s >> t;
		graph[s].emplace_back(t);
	}

	for (int i = 0; i < V;i++) {
		if (mark[i] == 0) {
			visit(i, graph, mark);
		}
	}

	//List???????????????????´????????????????
	for (auto i = L.rbegin(); i != L.rend(); i++) {
		cout << *i << endl;
	}

	return 0;
}