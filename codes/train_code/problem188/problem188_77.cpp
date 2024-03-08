#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <iomanip>
#include <utility>
#include <tuple>
#include <functional>
#include <bitset>
#include <cassert>
#include <complex>
#include <stdio.h>
#include <time.h>
//#define int long long
#define endl '\n'
#define INF 1000000000
#define EPS 1e-10
#define PI 3.141592653589793238
#define all(a) a.begin(),a.end()
#define rep(i, n) for (int i = 0; i < (n); i++)
#define pb push_back
#define double long double
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<P, ll> PP;
typedef complex<double> com;
template<class T, class S> bool chmax(T &a, const S &b) { if (a < b) { a = b; return 1; } return 0; }
template<class T, class S> bool chmin(T &a, const S &b) { if (a > b) { a = b; return 1; } return 0; }
ll gcd(ll n, ll m) { return (m ? gcd(m, n%m) : n); }
ll lcm(ll n, ll m) { return n / gcd(n, m)*m; }

int mp[67108864];

signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cout << fixed << setprecision(20);
	//modcalc();

	string s;
	cin >> s;
	int n = s.size();
	int tmp = 0;
	vector<int> sum(n + 1);
	rep(i, n) {
		tmp ^= (1 << (s[i] - 'a'));
		sum[i + 1] = tmp;
	}
	vector<int> ans(n + 1, INF); ans[0] = 0;
	rep(i, n) {
		rep(j, 26) {
			if ((sum[i + 1] ^ (1 << j)) == 0 || mp[sum[i + 1] ^ (1 << j)] != 0) {
				chmin(ans[i + 1], mp[sum[i + 1] ^ (1 << j)] + 1);
			}
		}
		if (sum[i + 1] == 0 || mp[sum[i + 1]] != 0) chmin(ans[i + 1], mp[sum[i + 1]] + 1);
		if (sum[i + 1] != 0) {
			if (mp[sum[i + 1]]) chmin(mp[sum[i + 1]], ans[i + 1]);
			else mp[sum[i + 1]] = ans[i + 1];
		}
	}
	cout << ans[n] << endl;
}