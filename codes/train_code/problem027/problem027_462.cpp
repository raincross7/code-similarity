#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <iomanip>
#include <math.h>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <functional>

using namespace std;

typedef long long int ll;
typedef std::pair<int, int> pii;
typedef std::pair<ll, int> pli;
typedef std::pair<ll, ll> pll;

#define FOR(i,n,m) for(ll i=(ll)(m);i<(ll)(n);++i)
#define REP(i,n) FOR(i,n,0)
#define IREP(i,n) for(ll i=(ll)(n);i>=0;--i)
#define OF64 std::setprecision(10)

const ll MOD = 1000000007;
const ll INF = (ll)1e15;

int main()
{
	int m, f, r;
	while (true)
	{
		cin >> m >> f >> r;
		if (m == -1 && f == -1 && r == -1)
		{
			break;
		}
		string a = "F";
		int s = m + f;
		if (m != -1 && f != -1)
		{


			if (s >= 80)
			{
				a = "A";
			}
			else if (s >= 65)
			{
				a = "B";
			}
			else if (s >= 50)
			{
				a = "C";
			}
			else if (s >= 30)
			{
				a = "D";
				if (r >= 50)
				{
					a = "C";
				}
			}
		}
		cout << a << endl;

	}
	return 0;
}
