#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef pair<LL, LL> PLL;
typedef vector<int> VI;
typedef unsigned long long ULL;
 
#define MP make_pair
#define PB push_back
#define EB emplace_back
#define FOR(i, a, b) for (int i = (a); i<(b); ++i)
#define RFOR(i, b, a) for (int i = (b)-1; i>=(a); --i)
#define ALL(a) a.begin(), a.end()
#define SZ(a) (int)a.size()
#define f first
#define s second
#define FILL(a, b) memset(a, b, sizeof(a))
 
const int MAX = 400*1000+5;
const int INF = 1000*1000*1000 + 7;
const LL LINF = 1LL*INF*INF;
const int MOD = INF;
const double PI = acos(-1.);
const int MAXN = 10*100007;
const double EPS = 1e-6;
 
mt19937 rnd(time(0));


int main()
{
	ios_base::sync_with_stdio(0);
	LL x, y;
	cin >> x >> y;
	if (abs(x - y) <= 1)
	{
		cout << "Brown\n";
	}
	else
	{
		cout << "Alice\n";
	}

	return 0;
}