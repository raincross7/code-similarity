#include <iostream>
#include <string> 
#include <vector> 
#include <algorithm> 
#include <utility> 
#include <tuple> 
#include <cstdint> 
#include <cstdio> 
#include <map> 
#include <queue> 
#include <set> 
#include <stack> 
#include <deque> 
#include <unordered_map> 
#include <unordered_set> 
#include <bitset> 
#include <cctype> 
#include<math.h>
using namespace std;

//#define int long long
#define endl "\n"
#define fir first
#define sec second
#define fro front
#define m_p make_pair
#define mod 1000000007
#define all(v)  v.begin(),v.end()
#define rep(i,n)  for(int i=0; i<(int) (n); i++)
#define all(v)  v.begin(),v.end()
#define vecin(v) for(int i=0; i<(int)v.size(); i++)cin>>v[i];
using namespace std;

const int MAX = 510000;
const int MOD = 1000000007;
long long fac[MAX], finv[MAX], inv[MAX];
int jousu(int x00, int y00) {
	int z00 = 1;
	for (int i = 0; i < y00; i++) {
		z00 *= x00;
	}
	return z00;
}
int keta(int x00) {
	int z00 = x00;
	int w00 = 0;
	while (z00 != 0) {
		z00 /= 10;
		w00++;
	}
	return w00;
}

int modinv(int a, int m) {
	int b = m, u = 1, v = 0;
	while (b) {
		int t = a / b;
		a -= t * b; swap(a, b);
		u -= t * v; swap(u, v);
	}
	u %= m;
	if (u < 0) u += m;
	return u;
}
int modpow(int a, int n) {
	int res = 1;
	while (n > 0) {
		if (n & 1) res* a % mod;
		a = a * a % mod;
		n >>= 1;
	}
	return res;
}
int gcd(int xx, int yy) {
	int p = xx;
	int q = yy;
	if (q > p)swap(p, q);
	while (p % q != 0) {
		p %= q;
		swap(p, q);
	}
	return q;
}
int lcm(int xx, int yy) {
	return xx * yy / gcd(xx, yy);
}
bool prime(int xx) {
	int a = xx;
	for (int i = 2; i * i <= xx; i++) {
		if (xx % i == 0) {
			return 0;
		}
	}
	return 1;
}
int com(int xx, int yy) {
	int zz = 1;
	for (int i = xx; i > xx - yy; i--) {
		zz *= i;
		zz %= mod;
	}
	for (int i = 1; i <= yy; i++) {
		zz *= modinv(i, mod);
		zz %= mod;
	}
	return zz;
}

int n, k, r, s, p,tot;
string t;

int main() {
	cin >> n >> k >> r >> s >> p >> t;
	rep(i, n) {
		if (i - k >= 0 && t[i] == t[i - k]) {
			t[i] = ' ';
			continue;
		}
		if (t[i] == 'r') {
			tot += p;
		}
		else if (t[i] == 's') {
			tot += r;
		}
		else if (t[i] == 'p') {
			tot += s;
		}
	}
	cout << tot << endl;
}
