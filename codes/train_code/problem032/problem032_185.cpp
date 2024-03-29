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
const ll MOD = (1e+9) + 7;
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
int main() {
	int n; ll k;
	cin >> n >> k;
	ll ma = 0;
	ll a[100000], b[100000];
	rep(i, n) {
		cin >> a[i] >> b[i];
		if (k == (k | a[i]))ma += b[i];
	}
	per(j, 31) {
		ll key = 1 << j;
		if (k&key) {
			ll sum = 0;
			rep(i, n) {
				if (a[i] == -1)continue;
				if (a[i] < key)sum += b[i];
			}
			ma = max(ma, sum);
			key--;
			rep(i, n) {
				a[i] &= key;
			}
		}
		else {
			rep(i, n) {
				if (a[i] == -1)continue;
				if (a[i] & key) {
					a[i] = -1;
				}
			}
		}
	}
	cout << ma << endl;
	return 0;
}