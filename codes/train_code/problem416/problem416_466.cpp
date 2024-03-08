#include <iostream>
#include <cstdio>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cstring>
#include <numeric>
#include <algorithm>
#include <stdlib.h>
#include <functional>
#include <string>
#include <array>
#include <map>
#include <queue>
#include <limits.h>
#include <set>
#include <stack>
#include <random>
#include <complex>
#include <unordered_map>
#include <nmmintrin.h>
#include <chrono>
const double EPS = 1e-8;
#define Scan(a) int a;scanf("%d", &a);
#define ScanS(a) char a[500];scanf("%s", a);
#define rep(i,s,n) for(int i = (s); (n) > i; i++)
#define REP(i,n) rep(i,0,n)
#define RANGE(x,a,b) ((a) <= (x) && (x) <= (b))
#define DUPLE(a,b,c,d) (RANGE(a,c,d) || RANGE(b,c,d) || RANGE(c,a,b) || RANGE(d,a,b))
#define INCLU(a,b,c,d) (RANGE(a,c,d) && (b,c,d))
#define PW(x) ((x)*(x))
#define ALL(x) (x).begin(), (x).end()
#define MODU 1000000007
#define bitcheck(a,b)   ((a >> b) & 1)
#define bitset(a,b)      ( a |= (1 << b))
#define bitunset(a,b)    (a &= ~(1 << b))
#define MP(a,b) make_pair((a),(b))
#define Manh(a,b) (abs((a).first-(b).first) + abs((a).second - ((b).second))
#define pritnf printf
#define scnaf scanf
#define itn int
#ifdef _MSC_VER
#define __builtin_popcount _mm_popcnt_u32
#define __builtin_popcountll _mm_popcnt_u64
#endif
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a%b);
}
template<typename A, size_t N, typename T>
void Fill(A(&array)[N], const T &val) {
	std::fill((T*)array, (T*)(array + N), val);
}

class Graph {
public:
	int vn;
	int sumcost = 0;
	vector<vector<pii>> g;

	Graph(int n) {
		vn = n;
		g.resize(n);
	}
	virtual void con(int a, int b, int w) = 0;
	int getWeight(int f, int t) {
		auto itr = lower_bound(ALL(g[f]), make_pair(t, INT_MIN));
		if (itr != g[f].end())
			return itr->second;
		return INT_MIN;
	}
	int Costsum() {
		return sumcost;
	}
	void scan(int edcount, bool oindexed, bool w) {
		REP(i, edcount) {
			int a, b, c = 1;
			scanf("%d %d", &a, &b);
			if (w)scanf("%d", &c);
			con(a - oindexed, b - oindexed, c);
		}
	}
};
class BiDGraph : public Graph {//無向
public:
	BiDGraph(int n) : Graph(n) {}

	void con(int a, int b, int w = 1) {
		g[a].push_back({ b,w });
		g[b].push_back({ a, w });
		sumcost++;
	}
};
signed main() {

	string ans;


	char res[2];

	REP(j, 9) {
		int l = 0, r = 10;
		while (1) {
			int mid = (l + r) / 2;
			cout <<"? " <<  ans << mid;
			REP(i, 9 - ans.length())
				cout << 0;
			cout << endl;

			scanf("%s", res);

			if (res[0] == 'Y') {
				r = mid;
			}
			else l = mid;

			if (r - l <= 1) {
				ans += l + '0';
				break;
			}

		}
	}
	int keta;
	int l = 0, r = 10;
	while (1) {
		int mid = (l + r) / 2;
		cout << "? " <<(ll)pow(10, mid);
		cout << endl;

		scanf("%s", res);

		if (res[0] == 'Y') {
			l = mid;
		}
		else r = mid;

		if (r - l <= 1) {
			keta = l;
			break;
		}

	}

	if (keta == 9) {
		int l = 0, r = 10;
		while (1) {
			int mid = (l + r) / 2;
			cout << "? " << (ll)pow(10, mid) - 1;
			cout << endl;

			scanf("%s", res);

			if (res[0] == 'N') {
				l = mid;
			}
			else r = mid;

			if (r - l <= 1) {
				keta = l;
				break;
			}

		}
	}

	//ans.pop_back();
	ll num = stoll(ans);
	num++;
	ans = to_string(num);
	cout << "! ";
	REP(i, keta + 1) {
		if (i >= ans.length())
			cout << 0;
		else
			cout << ans[i];
	}
	cout << endl;
	
	return 0;
}