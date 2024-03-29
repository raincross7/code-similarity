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
using Graph = vector<vector<int> >;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define int long long

void solve() {
	int n; cin >> n;
    vector<int> a(n);
    rep(i, n) {
        cin >> a[i];
    }
    auto b = a;
    sort(all(b));
    b.erase(unique(all(b)), b.end());
    int sz = b.size();
    map<int, int> mp;
    rep(i, sz) {
        mp[b[i]] = i;
    }
    vector<int> cnt(sz, 0);
    rep(i, n) {
        cnt[mp[a[i]]] ++;
    }
    vector<int> c(sz + 1, 0);
    rep(i, sz) {
        c[i + 1] = c[i] + cnt[i];
    }
    vector<int> d(sz + 1, 0);
    rep(i, sz) {
        if(i - 1 >= 0) d[i + 1] = d[i] + (b[i] - b[i - 1]) * (n - c[i]);
        else d[i + 1] = d[i] + b[i] * (n - c[i]);
    }
    
    int ma = 0;
    int bf = 0;
    rep(i, n) {
        if(ma < a[i]) {
            ma = a[i];
            cout << d[mp[a[i]] + 1] - bf << endl;
            bf = d[mp[a[i]] + 1];
        } else {
            cout << 0 << endl;
        }
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