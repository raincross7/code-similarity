//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
#include <limits>

using namespace std;

//conversion
//------------------------------------------
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v; }
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str(); }

//math
//-------------------------------------------
template<class T> inline T sqr(T x) { return x * x; }

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
#define EXISTch(s,c) ((((s).find_first_of(c)) != std::string::npos)? 1 : 0)//cがあれば1 if(1)
#define SORT(c) sort((c).begin(),(c).end())

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)

//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI = acos(-1.0);
const int INF = (int)1000000007;
const LL MOD = (LL)1000000007;//10^9+7
const LL INF2 = (LL)100000000000000000;//10^18

int main() {

	int n, m; cin >> n >> m;
	vector<LL> x(n);
	vector<LL> y(n);
	vector<LL> z(n);

	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i] >> z[i];
	}
	LL ans = -1e15;
	for (int msk = 0; msk < (1<<3); msk++) {
		
		vector<LL> temp(n);
		for (int i = 0; i < n; i++) {
			LL buf = 0;
			if ((msk >> 0) % 2 == 1) {
				buf += x[i];
			}
			else {
				buf -= x[i];
			}

			if ((msk >> 1) % 2 == 1) {
				buf += y[i];
			}
			else {
				buf -= y[i];
			}

			if ((msk >> 2) % 2 == 1) {
				buf += z[i];
			}
			else {
				buf -= z[i];
			}

			temp[i] = buf;
		}

		sort(temp.rbegin(), temp.rend());

		LL sum = 0;

		for (int j = 0; j < m; j++) {
			sum += temp[j];
		}

		ans = max(ans, sum);
	}

	cout << ans << endl;
	return 0;
}
