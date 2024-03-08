#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cstring>
#include <iomanip>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// #define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define int long long
#define For(i,x,y) for(int i = x; i <= y; ++i)
#define FOR For
#define rev_For(i,x,y) for(int i = x; i >= y; --i)
#define REV_FOR rev_For
#define ll long long
#define Size(v) ((int)v.size())
#define _section "\n--------------------\n"
#define fi first
#define se second
#define pb push_back
using namespace std;
// using namespace __gnu_pbds;


int n;
vector<char> s;
vector<int> red, green, blue;
set<int> r, g, b;

void input() {
	cin >> n;
	s.resize(n + 1);
	FOR (i, 1, n) {
		cin >> s[i];
		if (s[i] == 'R') r.insert(i);
		else if (s[i] == 'G') g.insert(i);
		else b.insert(i);
	}
	for (auto &c : r) red.pb(c);
	for (auto &c : g) green.pb(c);
	for (auto &c : b) blue.pb(c);
}

void solve() {
	int sum = 0;
	for (int i = 1; i <= n; ++i) {
		for (int j = i + 1; j <= n; ++j) {
			if (s[i] != s[j]) {
				if (s[i] != 'R' && s[j] != 'R') {
					auto pos = lower_bound(red.begin(), red.end(), j);
					int add = red.end() - pos;
					if (r.find(i + 2 * (j - i)) != r.end()) --add;
					sum += add;
				}
				else if (s[i] != 'G' && s[j] != 'G') {
					auto pos = lower_bound(green.begin(), green.end(), j);
					int add = green.end() - pos;
					if (g.find(i + 2 * (j - i)) != g.end()) --add;
					sum += add;
				}
				else if (s[i] != 'B' && s[j] != 'B') {
					auto pos = lower_bound(blue.begin(), blue.end(), j);
					int add = blue.end() - pos;
					if (b.find(i + 2 * (j - i)) != b.end()) --add;
					sum += add;
				}
			}
		}
	}

	cout << sum;
}

signed main() {
#ifdef _DEBUG
	// freopen("INPUT.inp", "r", stdin);
	//freopen("OUTPUT.out", "w", stdout);
	clock_t start, end;
	start = clock();
#endif
	ios_base::sync_with_stdio(0);
	cin.tie(0);
//------------------------------------------------------------------------------------
//----------------------------------MAIN PROGRAM--------------------------------------
	int t = 1;
	while (t--) {
		input();
		solve();
	}
//--------------------------------------END-------------------------------------------
//------------------------------------------------------------------------------------
#ifdef _DEBUG
	end = clock();
	cerr << "\n----------\nTime Elapsed: " << fixed << double(end - start) / double(CLOCKS_PER_SEC) << setprecision(6) << '\n';
#endif
	return 0;
}