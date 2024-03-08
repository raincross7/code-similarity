#include <algorithm>
#include<stdio.h>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
#include <stack>
#include <queue>
#include<map>
#include <set>
#include<math.h>
using namespace std;
#define int long long
#define ll long long
#define double long double
#define rep(i,n) for(ll i=0;i<n;++i)
#define Rep(i,n) for(ll i=1;i<=n;++i)
#define loop(i,m,n) for(ll i=m;i<n;++i)
#define ggr getchar(); getchar();return 0;
#define pie 3.141592653589793238462643383279
#define elif else if
#define P pair<ll,ll>
#define prique priority_queue<ll>
#define ALL(a)  (a).begin(),(a).end()
const int mod = 1000000007;
const int mod2 = 998244353;
int bin(int bina) {
	int ans = 0;
	for (int i = 0; bina > 0; i++)
	{
		ans = ans + (bina % 2) * pow(10, i);
		bina = bina / 2;
	}
	return ans;
}
bool prime(int n) {
	for (ll i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)return false;
	}
	return n != 1;
}
int gcd(int x, int y) {
	if (y == 0)return x;
	return gcd(y, x % y);
}
int lcm(int x, int y) {
	return x * y / gcd(x, y);
}
int kai(int x) {
	if (x == 0)return 1;
	return kai(x - 1) * x % mod;
}
int mod_pow(int x, int y, int m) {
	int res = 1;
	while (y) {
		if (y & 1) {
			res = res * x % m;
		}
		x = x * x % m;
		y >>= 1;
	}
	return res;
}
int comb(int n, int r) {
	int ans = 1;
	for (ll i = n; i > n - r; --i) {
		ans = ans * i;
	}
	for (ll i = 1; i < r + 1; ++i) {
		ans = ans / i;
	}
	return ans;
}
int per(int n, int r) {
	r = n - r;
	int sum = 1;
	int i;
	for (i = n; i >= r + 1; i--)sum *= i;
	return sum;
}
struct union_find {
	int par[200010], size_[200010];
	void init(int x) {
		rep(i, x) { par[i] = i; size_[i] = 1; }
	}
	int find(int x) {
		if (par[x] == x)return x;
		return par[x] = find(par[x]);
	}
	void unite(int x, int y) {
		x = find(x); y = find(y);
		if (x == y)return;
		if (size_[x] < size_[y]) {
			par[x] = y;
			size_[y] += size_[x];
		}
		else {
			par[y] = x;
			size_[x] += size_[y];
		}
	}
};

int ctoi(const char c) {
	return c - '0';
}
int keta(int a) {
	return to_string(a).size();
}
int a[310][310];
int b[100010], c[100010],l[100010],r[100010],s[100010];
signed main() {
	int h, w, d, q;
	cin >> h >> w >> d;
	rep(i, h) {
		rep(j, w) {
			cin >> a[i][j];
		}
	}
	cin >> q;
	rep(i, q) {
		cin >> l[i] >> r[i];
	}
	rep(i, h) {
		rep(j, w) {
			b[a[i][j]] = i;
			c[a[i][j]] = j;
		}
	}
	for (int i = d + 1; i <= h * w; i++) {
		s[i] = s[i - d] + abs(b[i] - b[i - d]) + abs(c[i] - c[i - d]);
	}
	rep(i, q) {
		cout << s[r[i]] - s[l[i]] << endl;
	}
}
