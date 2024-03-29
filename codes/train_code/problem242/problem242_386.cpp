/**
 *    author:  otera    
**/
#include<iostream>
#include<string> 
#include<cstdio>
#include<cstring>
#include<vector>
#include<cmath>
#include<algorithm> 
#include<functional>
#include<iomanip>
#include<queue>
#include<deque>
#include<ciso646>
#include<random>
#include<map>
#include<set>
#include<complex>
#include<bitset>
#include<stack>
#include<unordered_map>
#include<utility>
#include<cassert>
using namespace std;

#define int long long
typedef long long ll;
typedef unsigned long long ul;
typedef unsigned int ui;
typedef long double ld;
const int inf=1e9+7;
const ll INF=1LL<<60 ;
const ll mod=1e9+7 ;
#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define Rep(i,sta,n) for(int i=sta;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per1(i,n) for(int i=n;i>=1;i--)
#define Rep1(i,sta,n) for(int i=sta;i<=n;i++)
typedef complex<ld> Point;
const ld eps = 1e-8;
const ld pi = acos(-1.0);
typedef pair<int, int> P;
typedef pair<ld, ld> LDP;
typedef pair<ll, ll> LP;
#define fr first
#define sc second
#define all(c) c.begin(),c.end()
#define pb push_back
#define debug(x)  cerr << #x << " = " << (x) << endl;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

void solve() {
	int n; cin >> n;
	vector<int> x(n), y(n);
	rep(i, n) {
		cin >> x[i] >> y[i];
	}
	int tmp = abs(x[0] + y[0]) % 2;
	for(int i = 1; i < n; ++ i) {
		if(tmp != abs(x[i] + y[i]) % 2) {
			cout << -1 << endl;
			return;
		}
	}
	if(tmp == 1) {
		cout << 32 << endl;
		rep(i, 32) {
			cout << (1LL<<i) << " ";
		}
		cout << endl;
		rep(j, n) {
			int a = x[j] + y[j], b = x[j] - y[j];
			string ans = "";
			per(i, 32) {
				if(a >= 0 && b >= 0) {
					ans += 'R';
					a -= (1LL<<i), b -= (1LL<<i);
				}
				else if(a >= 0 && b < 0) {
					ans += 'U';
					a -= (1LL<<i), b += (1LL<<i);
				}
				else if(a < 0 && b >= 0) {
					ans += 'D';
					a += (1LL<<i), b -= (1LL<<i);
				}
				else {
					ans += 'L';
					a += (1LL<<i), b += (1LL<<i);
				}
			}
			//cerr << a << " " << b << endl;
			reverse(all(ans));
			cout << ans << endl;
		}
	} else {
		cout << 33 << endl;
		cout << 1 << " ";
		rep(i, 32) {
			cout << (1LL<<i) << " ";
		}
		cout << endl;
		rep(j, n) {
			int a = x[j] + y[j], b = x[j] - y[j];
			string ans = "";
			per(i, 32) {
				if(a >= 0 && b >= 0) {
					ans += 'R';
					a -= (1LL<<i), b -= (1LL<<i);
				}
				else if(a >= 0 && b < 0) {
					ans += 'U';
					a -= (1LL<<i), b += (1LL<<i);
				}
				else if(a < 0 && b >= 0) {
					ans += 'D';
					a += (1LL<<i), b -= (1LL<<i);
				}
				else {
					ans += 'L';
					a += (1LL<<i), b += (1LL<<i);
				}
			}
			if(a >= 0 && b >= 0) {
				ans += 'R';
			}
			else if(a >= 0 && b < 0) {
				ans += 'U';
			}
			else if(a < 0 && b >= 0) {
				ans += 'D';
			}
			else {
				ans += 'L';
			}
			reverse(all(ans));
			cerr << a << " " << b << endl;
			cout << ans << endl;
		}
	}
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	//cout << fixed << setprecision(10);
	//int t; cin >> t; rep(i, t)solve();
	solve();
    return 0;
}