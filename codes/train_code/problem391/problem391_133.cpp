#include<iostream>
#include<string>
#include<vector>
#include<stdio.h>
#include<map>
using namespace std;

int main() {
	int a, b, c;
	while (cin>>a>>b>>c, a | b | c) {
		map<int, int>e;
		for (int d = 0; d < a; d++) {
			int f;
			cin >> f;
			e[20000-f]++;
		}
		auto i = e.end();
		i--;
		int g = 0;
		int p = 0, q = 0;
		for (auto h = e.begin();h!=i; h++) {
			g += (*h).second;
			if (g < b)continue;
			else if (g > c)break;
			auto j = h;
			j++;
			if ((*j).first - (*h).first >= p) { p = (*j).first - (*h).first; q = g; }
		}
		cout << q << endl;
	}
}