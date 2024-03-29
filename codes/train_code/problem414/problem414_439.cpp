#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
#include <numeric>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <cmath>
#include <bitset>
#include <cassert>
#include <queue>
#include <deque>
#include <cassert>
#define For(i, a, b) for (int i = a; i < b; ++i)
#define Out(i, a, b) for (int i = a - 1; i >= b; --i)
#define pb push_back
#define point pair <int, int>
#define x first
#define y second
#define free free228
#define files(FileName) read(FileName); write(FileName)
#define read(FileName) freopen((FileName + ".in").c_str(), "r", stdin)
#define write(FileName) freopen((FileName + ".out").c_str(), "w", stdout)
using namespace std;
template<typename T1, typename T2>inline void chkmin(T1 &x, T2 y) { if (x > y) x = y; }
template<typename T1, typename T2>inline void chkmax(T1 &x, T2 y) { if (x < y) x = y; }

const string FILENAME = "input";
typedef long long base;
const int MAXN = 2e5 + 1;

int n;
int f[MAXN];
vector <int> edge[MAXN];

int func(int i = 1, int p = -1) {
	int res = 0;
	for (int j : edge[i]) {
		if (p == j) continue;
		res ^= func(j, i) + 1;
	}
	return res;
}

int main(int argc, char const *argv[]) {
    ios::sync_with_stdio(false);
    //read(FILENAME);
    cin >> n;
	for (int i = 2; i <= n; ++i) {
		int a, b;
		cin >> a >> b;
		edge[a].pb(b);
		edge[b].pb(a);
	}
	if (func() == 0) {
		cout << "Bob" << endl;
	} else {
		cout << "Alice" << endl;
	}
}