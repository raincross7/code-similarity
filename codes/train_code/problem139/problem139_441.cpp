#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <queue>
#include <stack>
#include <cstdlib>
#include <map>
#include <iomanip>
#include <set>
#include <functional>
#include <stdio.h>
#include <ctype.h>
#include <random>
#include <string.h>
#include <unordered_map>
#include <cstdio>
#include <climits>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long ll;

ll gcd(ll x, ll y) {
	if (y == 0)return x;
	return gcd(y, x%y);
}
ll lcm(ll x, ll y) {
	return x / gcd(x, y)*y;
}
ll kai(ll x, ll y, ll m) {
	ll res = 1;
	for (ll i = x - y + 1; i <= x; i++) {
		res *= i; res %= m;
	}
	return res;
}
ll mod_pow(ll x, ll y, ll m) {
	ll res = 1;
	while (y > 0) {
		if (y & 1) {
			res = res * x % m;
		}
		x = x * x % m;
		y >>= 1;
	}
	return res;
}

ll comb(ll x, ll y, ll m) {
	if (y > x)return 0;
	return kai(x, y, m) * mod_pow(kai(y, y, m), m - 2, m) % m;
}

int n, a[300000];
int ans[300000];
int ma[300000];

signed main() {
	std::random_device rnd;
	std::mt19937_64 mt(rnd());
	cin >> n;
	n = (1 << n);
	for (int i = 0; i < n; i++)cin >> a[i];
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j = (j + 1) | i) {
			ans[j] = max(ans[j], ma[j] + a[i]);
			ma[j] = max(ma[j], a[i]);
		}
	}
	for (int i = 1; i < n; i++) {
		ans[i] = max(ans[i], ans[i - 1]);
		cout << ans[i] << endl;
	}
}