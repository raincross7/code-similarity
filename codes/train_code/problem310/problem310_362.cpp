
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <queue>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <fstream>
#include <stdio.h>
#include <complex>
#include <cstdint>
#include <tuple>
#include <numeric>
#define M_PI       3.14159265358979323846

using namespace std;

//conversion
//------------------------------------------
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v; }
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str(); }

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
typedef unsigned long long ULL;
typedef vector<LL> VLL;
typedef vector<VLL> VVLL;

//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define MT make_tuple
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define FILL(a, x) memset(a, x, sizeof(a))

//repetition
//------------------------------------------
#define FOR(i,s,n) for(int i=s;i<(int)n;++i)
#define REP(i,n) FOR(i,0,n)

int main() {
	int n;
	scanf("%d", &n);
	int t=-1;
	for (int x = 1; x*(x+1) <= 2*n; x++) {
		if (x*(x+1) == 2*n)t = x;
	}
	if (t == -1) {
		cout << "No" << endl;
		return 0;
	}
	VVI ans(t + 1, VI(t, 0));
	int k = 1, c = t, o = 0;
	REP(i, t) {
		REP(j, c) {
			ans[i][i + j] = j + k;
		}
		REP(j, c) {
			ans[i + j + 1][i] = j + k;
		}
		k += c;
		c--;
	}
	printf("Yes\n");
	printf("%d\n", t + 1);
	REP(i, t + 1) {
		printf("%d", t);
		REP(j, t) {
			printf(" %d", ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}

