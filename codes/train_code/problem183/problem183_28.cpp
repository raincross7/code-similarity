#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <functional>
#include <algorithm>
#include <climits>
#include <cmath>
#include <iomanip>
using namespace std;
#define ll long long int
#define rep(i,n) for( int i = 0; i < n; i++ )
#define rrep(i,n) for( int i = n; i >= 0; i-- )
#define REP(i,s,t) for( int i = s; i <= t; i++ )
#define RREP(i,s,t) for( int i = s; i >= t; i-- )
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define INF 2000000000
#define mod 1000000007
#define INF2 1000000000000000000
#define int long long 
int F[2100010];

int Mul(int a, int b) {
	return ((a % mod) * (b % mod)) % mod;
}

void fact(void) {
	F[0] = 1;
	F[1] = 1;
	for (int i = 2; i <= 2100000; i++) {
		F[i] = Mul(i, F[i - 1]);
	}
}
int square(int x) {
	return (x * x) % mod;
}

int power(int x, int y) {
	if (y == 0) return 1;
	else if (y == 1) return x % mod;
	else if (y % 2 == 0) return square(power(x, y / 2)) % mod;
	else return square(power(x, y / 2)) * x % mod;
}

int Div(int a, int b) {
	return Mul(a, power(b, mod - 2));
}
int P(int n, int r) {
	if (n < r || n < 0 || r < 0) return 0;
	return Div(F[n], F[n - r]);
}

int C(int n, int r) {
	if (n < r || n < 0 || r < 0) return 0;
	int ret;
	ret = Div(F[n], Mul(F[n - r], F[r]));
	return ret;
}
int H(int n, int r) {
	if (n == 0 && r == 0) return 1;
	return C(n + r - 1, r);
}

signed main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int X, Y;
    fact();
    cin >> X >> Y;
    if((X + Y) % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }
    int t = (X + Y) / 3;
    X -= t; Y -= t;
    cout << C((X + Y), X) << endl;


    return 0;
}
