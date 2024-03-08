/*

Sviatoslav Bidzilia 2019
CF: anakib1

*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <cstring>
#include <string>
#include <cstdlib>
#include <vector>
#include <bitset>
#include <map>
#include <chrono>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
#include <queue>
#include <ctime>
#include <stack>
#include <set>
#include <list>
#include <deque>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <stdarg.h>
#include <functional>
#include <utility>

using namespace std;

#define pb push_back
#define mp make_pair
#define ll long long
#define ull unisgned long long
#define ld long double
#define all(a) a.begin(), a.end()
#define SORT(a) sort(all(a))
#define pii pair<int, int>
#define tii triple<int, int, int>
#define e 1e-7
#define PI acos(-1)
#define inf 1e17
#define sz(a) (int)(a.size())
#define vi vector<int>
#define F first
#define S second
#define rng(x) for(int _ = 0; _ < (x); _++)
#define rngi(i, x) for(int i = 0; i < (x); i++)
#define rngsi(s, i, x) for(int i = (s); i <(x); i++)
#define int long long

template<typename A, typename B, typename C>
struct triple
{
	A X;
	B Y;
	C Z;
	triple(A a = 0, B b = 0, C c = 0) :X(a), Y(b), Z(c) {}
};
template<typename A, typename B, typename C>
triple<A, B, C> make_triple(A a = 0, B b = 0, C c = 0)
{
	return triple<A, B, C>(a, b, c);
}
template<typename A, typename B, typename C>
bool operator<(const triple<A, B, C>& a, const triple<A, B, C>& b)
{
	if (a.X != b.X)
		return a.X < b.X;
	if (a.Y != b.Y)
		return a.Y < b.Y;
	return a.Z < b.Z;
}
template<typename T, typename SS>
ostream& operator<<(ostream& ofs, const pair<T, SS>& p)
{
	ofs << "( " << p.F << " , " << p.S << " )";
	return ofs;
}
template<typename T>
void print(T a)
{
	for (auto i : a)
		cout << i << ' ';
	cout << '\n';
}
template<typename T>
T max(T a, T b, T c)
{
	return max(a, max(b, c));
}
template<typename T>
T min(T a, T b, T c)
{
	return min(a, min(b, c));
}
struct custom_hash
{
	static uint64_t splitmix64(uint64_t x)
	{
		x += 0x9e3779b97f4a7c15;
		x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
		x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
		return x ^ (x >> 31);
	}

	size_t operator()(uint64_t x) const
	{
		static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
		return splitmix64(x + FIXED_RANDOM);
	}
};
int min(int a, int b, int c, int d) { return min(a, b, min(c, d)); }
int dp[102][102][2];
signed main()
{
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	srand(time(NULL));
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	int n, m; cin >> n >> m;
	vector<string> a(n + 1); for (int i = 1; i <= n; i++) cin >> a[i];
	rngi(i, n + 1) a[i] = '.' + a[i];
	rngi(i, 102) dp[0][i][1] = dp[i][0][1] = dp[i][0][0] = dp[0][i][0] =  inf;
	for(int i = 1; i <= n; i++) for(int j = 1; j <= m; j++) dp[i][j][0] = dp[i][j][1] = inf;
	dp[1][1][a[1][1] == '#'] = a[1][1] == '#';
	for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++)if ((i != 1 || j != 1)) {
		if (a[i][j] == '.') {
			dp[i][j][0] = min(dp[i - 1][j][0], dp[i - 1][j][1], dp[i][j - 1][0], dp[i][j - 1][1]);
		}
		else {
			dp[i][j][1] = min(dp[i - 1][j][0] + 1, dp[i - 1][j][1], dp[i][j - 1][0] + 1, dp[i][j - 1][1]);
		}
	}
	cout << min(dp[n][m][1], dp[n][m][0]) << '\n';
}