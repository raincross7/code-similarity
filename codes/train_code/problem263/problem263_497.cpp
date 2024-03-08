#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<math.h>
#include<complex>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<set>
#include<bitset>
#include<functional>
#include<assert.h>
#include<numeric>
#include<stdio.h>
#include <cstdint>
#include <stdlib.h> 
#include <time.h>
using namespace std;
#define REP(i,m,n) for(int i=(int)(m) ; i < (int) (n) ; ++i )
#define rep(i,n) REP(i,0,n)
#define drep(i,n,m) for(int i = n;i >= m;i--)
#define rrep(i,n) REP(i,1,n+1)
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define RNG(x, a, n) &((x)[a]), &((x)[n])
long long gcd(long long a, long long b) { return b == 0 ? a : gcd(b, a % b); }
long long lcm(long long a, long long b) { return a / gcd(a, b) * b; }
typedef long long ll;
typedef pair<ll, ll> Pll;
typedef pair<int, int> PII;
typedef vector<ll> Vl;
typedef vector<int> VI;
typedef tuple<int, int, int> TT;
#define chmin(x,y) x = min(x,y)
#define chmax(x,y) x = max(x,y)
#define all(v) v.begin(), v.end()
#define dmp(x,y) make_pair(x,y)
#define dmt(x, y, z) make_tuple(x, y, z)
#define pb(x) push_back(x)
#define pf(x) push_front(x)
const int MAX = 500000;
const int inf = 1000000007;
const ll mod = 1000000007;
const long double PI = (acos(-1));
const long double EPS = 0.0000000001;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };


int h, w, ans;
string s[2005];
int g[2005][2005];
int a[2005][2005], b[2005][2005], c[2005][2005], d[2005][2005];

int main() {

	cin >> h >> w;

	rep(i, h)cin >> s[i];

	rep(i, h) {
		rep(j, w) {
			if (s[i][j] == '.')g[i + 1][j + 1]++;
		}
	}

	rrep(i, h) {
		rrep(j, w) {
			if (g[i][j] != 0)a[i][j] = a[i][j - 1] + 1;
		}
		for (int j = w; j > 0; j--) {
			if (g[i][j] != 0)b[i][j] = b[i][j + 1] + 1;
		}
	}

	rrep(i, w) {
		rrep(j, h) {
			if (g[j][i] != 0)c[j][i] = c[j - 1][i] + 1;
		}
		for (int j = h; j > 0; j--) {
			if (g[j][i] != 0)d[j][i] = d[j + 1][i] + 1;
		}
	}

	rrep(i, h) {
		rrep(j, w) {
			ans = max(ans, a[i][j] + b[i][j] + c[i][j] + d[i][j] - 3);
		}
	}

	cout << ans << endl;

	return 0;
}
