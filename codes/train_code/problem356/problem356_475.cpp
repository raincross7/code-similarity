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
#define debug(x)  cout << #x << " = " << (x) << endl;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define int long long

void solve() {
	int n; cin >> n;
    vector<int> a(n);
    vector<int> c(n + 1, 0);
    rep(i, n) {
        cin >> a[i];
        c[a[i]] ++;
    }
    vector<int> e(n + 1, 0);
    rep1(i, n) {
        e[c[i]] ++;
    }
    vector<int> f(n + 2, 0), g(n + 2, 0);
    rep(i, n + 1) {
        f[i + 1] = f[i] + i * e[i];
        g[i + 1] = g[i] + e[i];
    }
    vector<int> d(n + 1, 0);
    rep(x, n + 1) {
        d[x] = f[x + 1] + x * (g[n + 1] - g[x + 1]);
    }
    for(int k = 1; k <= n; ++k) {
        int ok = 0, ng = n + 1;
        while(ng - ok > 1) {
            int mid = (ok + ng) / 2;
            if(d[mid] >= k * mid) ok = mid;
            else ng = mid;
        }
        cout << ok << endl;
    }
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	//cout << fixed << setprecision(10);
	//init();
	solve();
	//cout << "finish" << endl;
    return 0;
}