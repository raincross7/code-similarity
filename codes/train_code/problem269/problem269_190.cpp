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
ll h, w;
char a[1010][1010];
ll res[1010][1010];

//long longしか使わない
//素数は1より大きい
//lower_boundは指定したkey以上の要素の一番左のイテレータをかえす
//upper_boundは指定したkeyより大きい要素の一番左のイテレータをかえす
int main() {
	cin >> h >> w;
	deque<pair<ll,ll>>q;
	rep(i, h) {
		rep(j, w) {
			cin >> a[i][j];
			if (a[i][j] == '#') {
				q.push_back(make_pair(i, j));
				res[i][j] = 1;
			}
		}
	}
	while (!q.empty()) {
		pair<ll, ll>target = q.front();
		ll y = target.first;
		ll x = target.second;
		q.erase(q.begin());
		rep(i, 4) {
			ll ny = y + dy[i];
			ll nx = x + dx[i];
			if (0 <= ny && ny < h && 0 <= nx && nx < w) {
				if (res[y + dy[i]][x + dx[i]] == 0) {
					res[y + dy[i]][x + dx[i]] = res[y][x] + 1;
					q.push_back(make_pair(y + dy[i], x + dx[i]));
				}
			}
		}
	}
	ll ans = 0;
	rep(i, h) {
		rep(j, w) {
			ans = max(ans, res[i][j]);
		}
	}
	ans--;
	cout << ans << endl;
	return 0;
}
