#include <iostream>
#include<algorithm>
#include<string>
#include <cmath>
#include <vector>
#include <map>
#include <cstdio>
#include <iomanip>
#pragma region Macros
#define int long long
#define double long double
constexpr int MOD = 1000000007;
constexpr double PI = 3.14159265358979323846;
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,n) for(int i=1;i<=n;i++)
#define LAST(x) x[x.size()-1]
#define ALL(x) (x).begin(),(x).end()
#define swap(a,b) (a += b,b = a - b,a -= b)
#define CEIL(a,b) ((a+b-1)/b)
int FACT(int a) {
	if (a == 0)
		return 1;
	else
		return a * FACT(a - 1);
}
int nPr(int n, int r) {
	int s = n - r + 1;
	int sum = 1;
	for (int i = s; i <= n; i++)
		sum *= i;
	return sum;
}
//int nCr(int n, int r)
int nCr2(int n, int r) {
	return FACT(n) / (FACT(r) * FACT(n - r));
}
int GCD(int a, int b) // assuming a,b >= 1
{
	if (a < b)
		swap(a, b);
	if (b == 0)
		return a;
	if (a % b == 0)
		return b;
	return GCD(b, a % b);
}
int LCM(int a, int b) // assuming a,b >= 1
{
	return  a * b / GCD(a, b);
}
double LOG(int a, int b) {
	return log(b) / log(a);
}
inline bool BETWEEN(int x, int min, int max) {
	if (min <= x && x <= max)
		return true;
	else
		return false;
}
inline bool PRIMEOR (int x) {
	if (x ==1)
		return false;
	if (x == 2)
		return true;
	if (x%2==0)
		return false;
	double sqrtx = sqrt(x);
	for (int i = 3; i <= sqrtx; i += 2) {
		if (x % i == 0)
			return false;
	}
	return true;
}

using namespace std;
#pragma endregion

signed main() {
	int w=0, l=0;
	string S;
	cin >> S;
	rep(i, S.size()) {
		if (S[i] == 'o')
			w++;
		else
			l++;
	}
	if (15 - (w + l) >= 8 - w)
		cout << "YES";
	else
		cout << "NO";
}