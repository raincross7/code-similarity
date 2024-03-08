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
#include <regex>
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
typedef pair<int, PII> TIII;
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
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define MOD 1000000007
#define SQ(x) ((x)*(x))

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	LL lx=0, ly=0;
	LL tx;
	scanf("%lld", &tx);
	FOR(i, 1, n) {
		LL x;
		scanf("%lld", &x);
		LL len = ((LL)i*(LL)(n - i))%MOD;
		len = (len * (x - tx)) % MOD;
		lx = (lx + len) % MOD;
		tx = x;
	}
	scanf("%lld", &tx);
	FOR(i, 1, m) {
		LL x;
		scanf("%lld", &x);
		LL len = ((LL)i*(LL)(m - i)) % MOD;
		len = (len * (x - tx)) % MOD;
		ly = (ly+ len) % MOD;
		tx = x;
	}
	cout << (lx*ly) % MOD << endl;
	return 0;
}