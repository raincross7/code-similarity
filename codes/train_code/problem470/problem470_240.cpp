#include <iostream>
#include <string>
#include <queue>
#include <stack>
#include <algorithm>
#include <list>
#include <vector>
#include <complex>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <bitset>
#include <ctime>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cassert>
#include <cstddef>
#include <iomanip>
#include <numeric>
#include <tuple>
#include <sstream>
#include <fstream>

using namespace std;
#define REP(i, n) for (int (i) = 0; (i) < (n); (i)++)
#define FOR(i, a, b) for (int (i) = (a); (i) < (b); (i)++)
#define RREP(i, a) for(int (i) = (a) - 1; (i) >= 0; (i)--)
#define FORR(i, a, b) for(int (i) = (a) - 1; (i) >= (b); (i)--)
#define DEBUG(C) cerr << #C << " = " << C << endl;
using LL = long long;
using VI = vector<int>;
using VVI = vector<VI>;
using VL = vector<LL>;
using VVL = vector<VL>;
using VD = vector<double>;
using VVD = vector<VD>;
using PII = pair<int, int>;
using PDD = pair<double, double>;
using PLL = pair<LL, LL>;
using VPII = vector<PII>;
#define ALL(a) begin((a)), end((a))
#define RALL(a) rbegin((a)), rend((a))
#define SORT(a) sort(ALL((a)))
#define RSORT(a) sort(RALL((a)))
#define REVERSE(a) reverse(ALL((a)))
#define MP make_pair
#define FORE(a, b) for (auto &&a : (b))
#define FIND(s, e) ((s).find(e) != (s).end())
#define EB emplace_back

const int INF = 1e9;
const int MOD = INF + 7;
const LL LLINF = 1e18;

void solve(string s) {
	int len = s.length();
	int k1 = 0, k2 = 0;
	stack<char> last;
	bool f = true;
	FORE(c, s) {
		if (c == '(') {
			last.push(c);
			k1++;
		} else if(c == '[') {
			last.push(c);
			k2++;
		}else if (c == ')') {
			if (last.empty() || (!last.empty() && last.top() != '(') || k1 <= 0) f = false;
			if (!last.empty()) last.pop();
			k1--;
		} else if(c == ']') {
			if (last.empty() || (!last.empty() && last.top() != '[') || k2 <= 0) f = false;
			if (!last.empty()) last.pop();
			k2--;
		}
	}
	if (k1 || k2 || !f || !last.empty()) {
		cout << "no" << endl;
	} else {
		cout << "yes" << endl;
	}
}

int main(void) {
	string s;
	while (getline(cin, s)) {
		if (s == ".") break;
		solve(s);
	}
}