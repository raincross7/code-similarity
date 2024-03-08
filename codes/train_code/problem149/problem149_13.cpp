#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
#include <stdio.h>
#include <numeric>
#include <cmath>
#include <limits>
#include <bitset> 
#include <iterator> 
#include <map>
#include <queue>
#include <set>
#include<deque>
#define rep(i,n) for(ll i=0;i<(n); ++i)
#define per(i,n) for(ll i=n-1;i>=0; --i)
#define all(x) (x).begin(),(x).end()
#define _GLIBCXX_DEBUG
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
typedef long long ll;
const ll MOD = 1000000007;
ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
ll countDigit(int n);

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	ll n;
	cin >> n;
	vector<ll>a(n);
	rep(i, n)cin >> a[i];
	sort(all(a));
	a.push_back(-100);
	ll cnt = 0;
	for (ll i = 0; i < n; i++) {
		if (a[i] != a[i + 1])cnt++;
	}
	cout << (cnt%2 == 1 ? cnt : cnt-1) << endl;
}


