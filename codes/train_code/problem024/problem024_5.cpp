#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <map>
#include <iterator>
#include <functional>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <fstream>
#include <iomanip>
#include <numeric>
#include <cmath>
#include <list>
#include <sstream>
#include <cstring>
#include <stdio.h>
using namespace std;
#pragma GCC optimize("O3")
#pragma GCC target("sse4")

typedef long double LD;
typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> PII;
typedef pair<LD, LD> PDD;
typedef pair<LL, LL> PLL;
typedef vector<LL> VI;
typedef vector<LL> VLL;
typedef vector<char> VCH;
typedef vector<LD> VLD;
typedef vector<string> VS;
typedef vector<VS> VSS;
typedef vector<VI> VVI;
typedef vector<VLL> VVLL;
typedef vector<VCH> VVCH;
typedef vector<PII> VPII;
typedef vector<PLL> VPLL;
typedef vector<PDD> VPDD;
#define MP make_pair
#define PB push_back
#define X first
#define Y second
#define next fake_next
#define prev fake_prev
#define left fake_left
#define right fake_right

#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define RFOR(i,b,a) for(int i = (b) - 1; i >= (a); --i)
#define REP(i, t) FOR(i,0,t)
#define ALL(a) a.begin(), a.end()
#define SZ(a) (int)((a).size())
#define FILL(a, value) memset(a, value, sizeof(a))

const LD PI = acos(-1.0);
const LD EPS = 1e-9;
const LL INF = 1e9;
const LL mod = 1000000007;
const LL LINF = 1e18 + 10;
const LL MAX = 1e5 + 1;

PII x[MAX];
int ans[MAX];

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("In.txt", "r", stdin);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n, l, t;
	cin >> n >> l >> t;

	FOR(i, 0, n)
		cin >> x[i].X >> x[i].Y, ans[i] = x[i].X;

	LL cnt = 0;
	FOR(i, 0, n)
		if (x[i].Y == 1)
		{
			cnt += (x[i].X + t) / l;
			ans[i] = (ans[i] + t) % l;
		}
		else
		{
			if (x[i].X < t)
				cnt -= (t - x[i].X - 1)/ l + 1;

			ans[i] = ((ans[i] - t) % l + l) % l;
		}

	sort(ans, ans + n);
	cnt = (cnt%n + n) % n;
	rotate(ans, ans + cnt, ans + n);
	FOR(i, 0, n)
		cout << ans[i] << endl;

	cin >> n;
	return 0;
}