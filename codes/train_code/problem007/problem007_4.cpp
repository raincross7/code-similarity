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
const ll MOD = 924844033;
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
ll lesum[200000], risum[200000];
int main() {
	int n; cin >> n;
	ll mi = INF;
	ll a[200000];
	ll sum = 0;
	rep(i, n) {
		cin >> a[i]; sum += a[i];
	}
	rep(i, n) {
		if (i == 0) {
			lesum[0] = a[0];
		}
		else {
			lesum[i] = lesum[i - 1] + a[i];
		}
	}
	per(i, n) {
		if (i == n - 1) {
			risum[i] = a[i];
		}
		else {
			risum[i] = risum[i + 1] + a[i];
		}
	}
	rep(i, n - 1) {
		mi = min(mi, abs(lesum[i] - risum[i+1]));
	}
	cout << mi << endl;
	return 0;
}