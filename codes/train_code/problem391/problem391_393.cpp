//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;

//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

//math
//-------------------------------------------
template<class T> inline T sqr(T x) {return x*x;}

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

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

//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI  = acos(-1.0);
const LL MOD = 1000000007;

//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))

//debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

//myfuncs
template<class T> inline T isPrime(T x) {
	bool ret = true;
	if (x < 2) {
		ret = false;
	}
	for (LL i = 2; i <= sqrt(x); i++) {
		if (x%i == 0) {
			ret = false;
		}
	}
	return ret;
}

int main(int argc, char const* argv[])
{
	int m,nmin,nmax;
	while (1) {
		cin >> m >> nmin >> nmax;
		if (m == 0 && nmin == 0 && nmax == 0) {
			return 0;
		}
		int p[m];
		for (int i = 0; i < m; i++) {
			cin >> p[i];
		}
		int Max = -1;
		int ans = 0;
		for (int i = nmin-1; i <= nmax-1; i++) {
			Max = max(Max,p[i] - p[i+1]);
			if (Max == p[i] - p[i+1]) {
				ans = i + 1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}

