#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <string>
#include <math.h>
#include <limits.h>
#include <queue>
#include <map>
#include <set>
#include <iomanip>
#include <bitset>
#include <cassert>
#include <random>
#include <functional>
#include <stack>
#include <iomanip>
using namespace std;

template<class T>
void in(vector<T>& V) {
	for (auto itr = V.begin(); itr != V.end(); itr++)cin >> *itr;
	return;
}

template<class T>
void out(vector<T>& V) {
	for (T& itr : V)cout << itr << endl;
	return;
}

int W, H;
struct edge {
	int d;    //x方向->0 y方向->1
	long long c;
};
vector<edge> edges;

int main() {
	cin >> W >> H;
	for (int p = 0; p < W; p++) {
		edge e;
		cin >> e.c;
		e.d = 0;
		edges.push_back(e);
	}
	for (int q = 0; q < H; q++) {
		edge e;
		cin >> e.c;
		e.d = 1;
		edges.push_back(e);
	}
	sort(edges.begin(), edges.end(), [](edge a, edge b) {
		return a.c < b.c;
	});
	int x = W+1, y = H+1;
	long long ans = 0;
	for (edge e : edges) {
		if (e.d == 0) {
			ans += y * e.c;
			x--;
		}
		else {
			ans += x * e.c;
			y--;
		}
	}
	cout << ans << endl;
	return 0;
}