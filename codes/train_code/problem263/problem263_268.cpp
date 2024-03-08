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
#define exout(x) printf("%.12f\n", x)
const double pi = acos(-1.0);
const ll MOD = 1000000007;
const ll INF = 1e18;
const ll MAX_N = 1010101;

//組み合わせの余りを求める
ll fac[MAX_N], finv[MAX_N], inv[MAX_N];
void COMinit() {
	fac[0] = fac[1] = 1;
	finv[0] = finv[1] = 1;
	inv[1] = 1;
	for (int i = 2; i < MAX_N; i++) {
		fac[i] = fac[i - 1] * i % MOD;
		inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
		finv[i] = finv[i - 1] * inv[i] % MOD;
	}
}

// 二項係数計算
long long COM(ll n, ll k) {
	if (n < k) return 0;
	if (n < 0 || k < 0) return 0;
	return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

//最大公約数
ll gcd(ll x, ll y) {
	return y ? gcd(y, x % y) : x;
}

ll lcm(ll x, ll y) {
	if (x == 0 || y == 0)return 0;
	return (x / gcd(x, y) * y);
}

ll dx[8] = { 1,-1,0,0,1,1,-1,-1 };
ll dy[8] = { 0,0,1,-1,1,-1,1,-1 };
char c[2010][2010];
ll sum[2010][2010];
ll sum2[2010][2010];

//long longしか使わない
//素数は1より大きい
//lower_boundは指定したkey以上の要素の一番左のイテレータをかえす
//upper_boundは指定したkeyより大きい要素の一番左のイテレータをかえす
int main() {
	ll h, w;
	cin >> h >> w;
	rep(i, h) {
		rep(j, w) {
			cin >> c[i][j];
		}
	}
	rep(i, h) {
		vector<ll>done(w);
		rep(j, w) {
			if (c[i][j] == '#')continue;
			if (done[j])continue;
			ll l = 0;
			while (l + j < w) {
				if (c[i][l + j] == '#')break;
				l++;
			}
			rep(k, l) {
				sum[i][j + k] += l;
				done[j + k] = 1;
			}
		}
	}
	rep(j, w) {
		vector<ll>done(h);
		rep(i, h) {
			if (c[i][j] == '#')continue;
			if (done[i])continue;
			ll l = 0;
			while (l + i < h) {
				if (c[i+l][j] == '#')break;
				l++;
			}
			rep(k, l) {
				sum[i + k][j] += l;
				done[i + k] = 1;
			}
		}
	}
	ll ans = 0;
	rep(i, h) {
		rep(j, w) {
			ans = max(ans, sum[i][j] - 1);
		}
	}
	cout << ans << endl;
	return 0;
}
