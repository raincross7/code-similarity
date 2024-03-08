#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
#include <list>
#include <unordered_set>
#include <tuple>
#include <cmath>
#include <limits>
#include <type_traits>
#include <iomanip>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <set>
#include <bitset>
#include <regex>
#include <random>
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define rep(i,n)for(ll i=0;i<n;++i)
#define exout(x) printf("%.10f\n", x)
const double pi = acos(-1.0);
const ll MOD = 1000000007;
const ll INF = 1e18;
const ll MAX_N = 201010;

//組み合わせの余りを求める
ll fac[MAX_N], finv[MAX_N], inv[MAX_N];

void COMinit() {
	fac[0] = fac[1] = 1;
	finv[0] = finv[1] = 1;
	inv[1] = 1;
	for (int i = 2; i < MAX_N; i++) {
		fac[i] = fac[i - 1] * i;
	}
}

// 二項係数計算
long long COM(ll n, ll k) {
	if (n < k) return 0;
	if (n < 0 || k < 0) return 0;
	return fac[n] / (fac[k] * fac[n - k]);
}


//最大公約数
ll gcd(ll x, ll y) {
	return y ? gcd(y, x % y) : x;
}

ll lcm(ll x, ll y) {
	if (x == 0 || y == 0)return 0;
	return (x / gcd(x, y) * y);
}

ll dx[4] = { 0,0,-1,1 };
ll dy[4] = { -1,1,0,0 };
ll dp[10101][110];
bool flag[30][30];

//long longしか使わない
//素数は1より大きい
//lower_boundは指定したkey以上の要素の一番左のイテレータをかえす
//upper_boundは指定したkeyより大きい要素の一番左のイテレータをかえす
int main() {
	string s, t;
	cin >> s >> t;
	ll n = s.length();
	vector<pair<ll, ll>>p;
	rep(i, n) {
		ll x = s[i] - 'a';
		ll y = t[i] - 'a';
		flag[x][y] = true;
	}
	bool ans = true;
	for (ll i = 0;i <= 'z'-'a';++i) {
		ll res = 0;
		ll res2 = 0;
		for (ll j = 0;j <= 'z'-'a';++j) {
			if (flag[i][j])res++;
			if (flag[j][i])res2++;
			if (res >= 2) {
				puts("No");
				return 0;
			}
			if (res2 >= 2) {
				puts("No");
				return 0;
			}
		}
	}
	puts("Yes");
	return 0;
}