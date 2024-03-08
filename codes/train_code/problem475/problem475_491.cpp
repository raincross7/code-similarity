#include <algorithm>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits.h>
#include <map>
#include <numeric>
#include <queue>
#include <sstream>
#include <string>
#include <string.h>
#include <tuple>
#include <vector>

#define REP(i,x) for(int i{ 0 }; i < (int)(x); i++)
#define REPC(i,x) for(int i{ 0 }; i <= (int)(x); i++)
#define RREP(i,x) for(int i{ (int)(x) - 1 }; i >= 0 ;i--)
#define RREPC(i,x) for(int i{ (int)(x)}; i >= 0; i--)
#define REP1O(i,x) for(int i{ 1 }; i < (int)(x); i++)
#define REP1C(i,x) for(int i{ 1 }; i <= (int)(x); i++)
#define REPIT(i,x) for(auto i{(x).begin()}; i != (x).end(); i++) 

#define PB push_back
#define MP make_pair
#define SZ(x) ((int)(x).size())
#define ALL(x) (x).begin(),(x).end()

using namespace std;

typedef int64_t ll;
typedef double dbl;
typedef vector<bool> Vb;
typedef vector<char> Vc;
typedef vector<double> Vd;
typedef vector<int> Vi;
typedef vector<ll> Vl;
typedef vector<string> Vs;
typedef vector<vector<int>> VVi;
typedef vector<vector<ll>> VVl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ll, int> pli;

template<class T> inline bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
inline void swap(ll& a, ll& b) { a ^= b; b ^= a; a ^= b; }
inline void swap(int& a, int& b) { a ^= b; b ^= a; a ^= b; }
inline void YES() { cout << "YES" << endl; } inline void Yes() { cout << "Yes" << endl; }
inline void NO() { cout << "NO" << endl; } inline void No() { cout << "No" << endl; }

const int inf = 1 << 30;
const ll linf = 1LL << 60;
const int MOD = 1000000007;
const ll mask_negative = 1LL << 63;

template <class T>
inline double eucladian(T ax, T ay, T bx, T by) { return sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by)); }

vector<pll> engines;
int n;

void init()
{
	cin >> n;
	int zr = 0;
	REP(_i, n)
	{
		ll x, y; cin >> x >> y;
		if (!x && !y)
		{
			++zr; continue;
		}
		engines.PB(pll(y, x));
	}

	n -= zr;

	sort(ALL(engines), [](pll& left, pll& right){ return atan2(left.first, left.second) < atan2(right.first, right.second); });
}


int main()
{
	init();

	double ans = 0;

	REP1C(k, n)
	{
		REP(i, n)
		{
			ll vx = 0, vy = 0;
			for (int j = i; j < min(n, i + k); ++j)
			{
				vy += engines[j].first;
				vx += engines[j].second;
			}

			if (n - i < k)
			{
				for (int j = 0; j < (k - (n - i)); ++j)
				{
					vy += engines[j].first;
					vx += engines[j].second;
				}
			}
			chmax(ans, eucladian((ll)0, (ll)0, vx, vy));
		}
	}

	cout << setprecision(21) << ans << endl;
}
