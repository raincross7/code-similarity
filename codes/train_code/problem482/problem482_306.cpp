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
	int H, W;
	while (true)
	{
		cin >> H >> W;
		if (H == 0 && W == 0)break;
		REP(h, H)
		{
			REP(w, W)
			{
				if (h > 0 && h < H - 1 && w>0 && w < W - 1)
				{
					cout << '.';
				}
				else
				{
					cout << '#';
				}
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
