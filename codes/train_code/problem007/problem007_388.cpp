#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<math.h>
#include<queue>
#include<deque>
#include<stack>
#include<cstdio>
#include<utility>
#include<set>
#include<list>
#include<cmath>
#include<stdio.h>
#include<string.h>
#include<iomanip>
using namespace std;
#define FOR(i, a, b) for (ll i = (a); i <= (b); i++)
#define REP(i, n) FOR(i, 0, n - 1)
#define NREP(i, n) FOR(i, 1, n)
using ll = long long;
using pii = pair<int, int>;
using piii = pair<pii, pii>;
const int dx[4] = { 0, -1, 1, 0 };
const int dy[4] = { -1, 0, 0, 1 };
const int INF = 1e9 + 7;
int gcd(int x, int y) {
	if (x < y)swap(x, y);
	if (y == 0)return x;
	return gcd(y, x%y);
}

template<class T1, class T2> void chmin(T1 &a, T2 b) { if (a>b)a = b; }

template<class T1, class T2> void chmax(T1 &a, T2 b) { if (a<b)a = b; }
template<class T>
void Add(T &a, const T &b, const T &mod = 1000000007) {
	int val = ((a % mod) + (b % mod)) % mod;
	if (val < 0) { val += mod; }
	a = val;
}
////////////////////////////////////////
int main() {
	ll N;
	ll a[200100];
	cin >> N;
	a[0] = 0;
	for (int i = 0; i < N; ++i) {
		int x; cin >> x;
		a[i + 1] = a[i] + x;
	}
	ll ans = 1e15;
	for (int i = 1; i < N; ++i) {
		ans = min(ans, abs(2*a[i]-a[N]));
	}
	cout << ans << endl;
	return 0;
}
