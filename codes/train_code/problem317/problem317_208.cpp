#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <queue>
#include <stack>

using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = n;i >= m;i--)
#define REPO(i, n) for(int i = 1;i <= n;i++)
#define ll long long
#define INF 1999999999
#define MINF -1999999999
#define ALL(n) n.begin(),n.end()

int main() {
	int h, w;
	cin >> h >> w;
	REP(i, h) {
		REP(j, w) {
			string a;
			cin >> a;
			if (a == "snuke") {
				char s = j + 'A';
				cout << s << i + 1 << endl;
			}
		}
	}
}