#include <iostream>
#include<algorithm>
#include<string>
#include <cmath>
#include <vector>
#include <map>
#include <cstdio>
#include <iomanip>
#include<set>
#include <numeric>
#include <queue>

#pragma region Macros
#define int long long
#define double long double
constexpr int MOD = 1000000007;
constexpr double PI = 3.14159265358979323846;
const  int INF = 1e9;
const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
const int ddx[8] = { 1, 0, -1, 0, 1, -1, -1, 1 };
const int ddy[8] = { 0, 1, 0, -1, 1, 1, -1, -1 };
#define krep(i,k,n) for(int i=(k);i<n+k;i++)
#define Krep(i,k,n) for(int i=(k);i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)
#define Rrep(i,n) for(int i=n;i>0;i--)
#define REP(i,n) for(int i=1;i<=n;i++)
#define LAST(x) x[x.size()-1]
#define ALL(x) (x).begin(),(x).end()
#define swap(a,b) (a += b,b = a - b,a -= b)
#define DIVCEIL(a,b) ((a+b-1)/b)
#define SUM1n(n) ((n)*(n+1)/2)
#define SUMkn(k,n) (SUM1n(n)-SUM1n(k-1))
//int CHMAX

int intpow(int a, int n) {
	// a^nのint ver
	if (n == 0)
		return 1;
	else {
		rep(i, n - 1)
			a *= a;
		return a;
	}
}
int MODPOW(int a, int n, int mod) {
	// a^n mod
	int ans = 1;
	while (n > 0) {
		if (n & 1)
			ans = ans * a % mod;
		a = a * a % mod;
		n >>= 1;
	}
	return ans;
}
int FACT(int a) {
	if (a == 0)
		return 1;
	else
		return a * FACT(a - 1);
}
int MODFACT(int a, int mod) {
	int ans = 1;
	REP(i, a) {
		ans *= i;
		ans %= MOD;
	}
	return ans;
}
int nPr(int n, int r) {
	int s = n - r + 1;
	int sum = 1;
	for (int i = s; i <= n; i++)
		sum *= i;
	return sum;
}
int MODnPr(int n, int r, int mod) {
	int s = n - r + 1;
	int sum = 1;
	for (int i = s; i <= n; i++) {
		sum *= i;
		sum = sum % MOD;
	}
	return sum;
}
//int nCr(int n, int r)
int nCr2(int n, int r) {
	return FACT(n) / (FACT(r) * FACT(n - r));
}
int GCD(int a, int b)
{
	if (a < b)
		swap(a, b);
	if (b == 0)
		return a;
	if (a % b == 0)
		return b;
	return GCD(b, a % b);
}
int LCM(int a, int b)
{
	return  a * b / GCD(a, b);
}
int NUMOFDIV(int n) {
	//約数の数（だっけ？）
	int ans = 0;
	REP(i, n) {
		if (n % i == 0)
			ans++;
	}
	return ans;
}
int CEIL1(int n) {
	//1桁目切り上げ
	return (n + 9) / 10 * 10;
}
int GetDigit(int n) {
	return log10(n) + 1;
}
int DIGIT(int n, int k) {
	//nのk桁目
	rep(i, k - 1)
		n /= 10;
	return n % 10;
}
int DIGITSUM(int n) {
	int sum = 0, dig;
	while (n) {
		dig = n % 10;
		sum += dig;
		n /= 10;
	}
	return sum;
}
int DIVTIME(int n, int k) {
	//nをkで何回割れるか的な
	int div = 0;
	while (n % k == 0) {
		div++;
		n /= k;
	}
	return div;
}
int binary(int n) {
	//10進数→2進数
	int ans = 0;
	for (int i = 0; n > 0; i++) {
		ans += n % 2 * intpow(10, i);
		n /= 2;
	}
	return ans;
}
int intabs(int n) {
	if (n < 0)
		return -1 * n;
	else
		return n;
}
double LOG(int a, int b) {
	return log(b) / log(a);
}
double DISTANCE(int x1, int y1, int x2, int y2) {
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
double WatchAngle(int h, int m) {
	h %= 12;
	double mm = 6.0 * m;
	double nn = 30.0 * h + 0.5 * m;
	return std::min(fabs(mm - nn), 360.0 - fabs(nn - mm));
}
inline bool BETWEEN(int x, int min, int max) {
	if (min <= x && x <= max)
		return true;
	else
		return false;
}
inline bool between(int x, int min, int max) {
	if (min < x && x < max)
		return true;
	else
		return false;
}
inline bool PRIMEOR(int x) {
	if (x == 1)
		return false;
	if (x == 2)
		return true;
	if (x % 2 == 0)
		return false;
	double sqrtx = sqrt(x);
	for (int i = 3; i <= sqrtx; i += 2) {
		if (x % i == 0)
			return false;
	}
	return true;
}
bool SQRTOR(int n) {
	if (sqrt(n) == (int)sqrt(n))
		return true;
	else
		return false;
}
// 順位付け
using namespace std;
#pragma endregion

using Graph = vector<vector<int>>;

signed main() {
	vector<int>A(3);
	cin >> A[0] >> A[1] >> A[2];
	sort(ALL(A), greater<int>());
	int sum = A[0] + A[1] + A[2];
	int ans=0;
	if ((3 * A[0] - sum) % 2 == 1)
		ans += 2;
	ans += (3 * A[0] - sum) / 2;
	cout << ans;
}