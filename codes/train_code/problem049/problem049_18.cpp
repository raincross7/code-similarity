#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

struct Node {
  std::unordered_set<int> in_edge;
  std::unordered_set<int> out_edge;
};

int main(void) {
  cout << std::fixed << std::setprecision(10);
  cin.tie(0);
  std::ios::sync_with_stdio(false);

  int v, e;
  cin >> v >> e;
  std::vector<Node> node(v);
  for (int i = 0; i < e; i++) {
    int from, to;
    cin >> from >> to;
    node[from].out_edge.insert(to);
    node[to].in_edge.insert(from);
  }

  std::queue<int> search_set;
  std::vector<int> result;

  for (int i = 0; i < v; i++) {
    if (node[i].in_edge.empty()) {
      search_set.push(i);
    }
  }

  while (!search_set.empty()) {
    int tgt = search_set.front();
    search_set.pop();
    result.push_back(tgt);
    for (auto itr = node[tgt].out_edge.begin(); itr != node[tgt].out_edge.end();
         itr++) {
      node[*itr].in_edge.erase(tgt);
      if (node[*itr].in_edge.empty()) {
        search_set.push(*itr);
      }
    }
  }

  for (auto x : result) {
    cout << x << endl;
  }

  return 0;
}

