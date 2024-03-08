#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
#include<complex>
#include<bitset>
using namespace std;
typedef long long ll;
typedef unsigned int ui;
const ll MOD = (1e+9)+7;
const ll INF = (ll)1000000007 * 1000000007;
typedef pair<int, int> P;
#define stop char nyaa;cin>>nyaa;
#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define Rep(i,sta,n) for(int i=sta;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per1(i,n) for(int i=n;i>=1;i--)
#define Rep1(i,sta,n) for(int i=sta;i<=n;i++)
typedef long double ld;
typedef complex<ld> Point;
const ld eps = 1e-11;
const ld pi = acos(-1.0);
typedef pair<ll, ll> LP;
typedef pair<ld, ld> LDP;
bool bfs(int a, int b) {
	if (a <= 1 && b <= 1)return false;
	bool res = false;
	for (int i = 2; i <= a; i += 2) {
		if (!bfs(a - i, b + i / 2))res = true;
	}
	for (int i = 2; i <= b; i += 2) {
		if (!bfs(a + i / 2, b - i))res = true;
	}
	return res;
}
int main() {
	ll x, y; cin >> x >> y;
	if (abs(x - y) <= (ll)1)cout << "Brown" << endl;
	else cout << "Alice" << endl;
	return 0;
}