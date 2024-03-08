#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<queue>
#include<stack>
#include<set>
#include<algorithm>
#include<utility>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
const int INF = 1001001001;

ll pow_mod(ll x, ll y) {
	ll res = 1;
	for (ll i = 0; i < y; i++) res = res * x % mod;
	return res;
}

ll gcd(ll x, ll y) {
	if (y == 0) {
		return x;
	}
	return gcd(y, x % y);
}

int main() {
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < 1100; i++) {
		int per8 = i * 8 / 100;
		int per10 = i * 10 / 100;
		if (per8 == a && per10 == b) {
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}