#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
#include <algorithm>
#include <assert.h>
#include <bitset>
#include <cfloat>
#include <complex>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits.h>
#include <list>
#include <map>
#include <math.h>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <string.h>
#include <time.h>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,n) for(int i=1;i<=n;i++)
#define int long long
#define ll long long
#define mod (int)1000000007
#define P pair<int,int>
#define prique(T) priority_queue<T,vector<T>,greater<T>>
#define all(V) V.begin(),V.end()
#ifdef int
constexpr int INF = LLONG_MAX / 10;
#else
constexpr int INF = INT_MAX / 10;
#endif
constexpr double eps = DBL_EPSILON;
template <class T, class U>
inline bool chmax(T& lhs, const U& rhs) {
	if (lhs < rhs) {
		lhs = rhs;
		return 1;
	}
	return 0;
}
template <class T, class U>
inline bool chmin(T& lhs, const U& rhs) {
	if (lhs > rhs) {
		lhs = rhs;
		return 1;
	}
	return 0;
}
using namespace std;
inline int gcd(int a, int b) {
	while (b) {
		int c = a;
		a = b; b = c % b;
	}
	return a;
}
inline int lcm(int a, int b) {
	return a / gcd(a, b) * b;
}
bool isprime(int n) {
	if (n == 1)return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)return false;
	}
	return true;
}
int mypow(int a, int b) {
	if (!b)return 1;
	if (b & 1)return mypow(a, b - 1) * a;
	int memo = mypow(a, b >> 1);
	return memo * memo;
}
int modpow(int a, int b, int m = mod) {
	if (!b)return 1;
	if (b & 1)return modpow(a, b - 1, m) * a % m;
	int memo = modpow(a, b >> 1, m);
	return memo * memo % m;
}
int n;
vector<int> vec[100010];
bool used[100010];
int dfs(int node) {
	used[node] = true;
	int cnt = 0, grundy = 0;
	for (int i : vec[node]) {
		if (!used[i]) {
			cnt++;
			grundy ^= dfs(i) + 1;
		}
	}
	return grundy;
}
signed main() {
	cin >> n;
	rep(i, n - 1) {
		int u, v;
		cin >> u >> v;
		vec[u].push_back(v);
		vec[v].push_back(u);
	}
	if (dfs(1))puts("Alice");
	else puts("Bob");
	return 0;
}