#include <iostream>
#include <set>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <climits>
#include <sstream>
#include <iomanip>
#include <map>
#include <stack>
#include <numeric>

using namespace std;
#define ALL(x)			(x).begin(),(x).end()
#define REP(i, n)		for (int (i) = 0 ; (i) < (ll)(n) ; ++(i))
#define REPN(i, m, n)	for (int (i) = m ; (i) < (ll)(n) ; ++(i))
#define INF				(int)2e9
#define MOD				(1000 * 1000 * 1000 + 7)
#define Ceil(x, n)		(((((x))+((n)-1))/n))		/* Nの倍数に切り上げ割り算 */
#define CeilN(x, n)		(((((x))+((n)-1))/n)*n)		/* Nの倍数に切り上げ */
#define FloorN(x, n)	((x)-(x)%(n))				/* Nの倍数に切り下げ */
#define IsOdd(x)		(((x)&0x01UL) == 0x01UL)			
#define IsEven(x)		(!IsOdd((x)))						
#define M_PI			3.14159265358979323846
typedef long long		ll;
typedef pair<ll, ll>	P;
typedef vector<ll>		VLL;
typedef vector<VLL>		VVLL;
typedef vector<VVLL>	VVVLL;

/*-----------------------------------------------------------------------------
　処理
 -----------------------------------------------------------------------------*/
int N, Z, W;
vector<int> a;
int main()
{
	cin >> N >> Z >> W;
	a.resize(N);
	REP(i, N) cin >> a[i];

	int ans = abs(a[N - 1] - W);
	if (1 < N) {
		ans = max(ans, abs(a[N - 1] - a[N - 2]));
	}
	cout << ans << endl;
	return 0;
}
