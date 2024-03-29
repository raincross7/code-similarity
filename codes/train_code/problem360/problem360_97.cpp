#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define mfill(x,y) memset(x,y,sizeof(x))
#define all(v) v.begin(), v.end()
#define in(x,y,h,w) if(0<=x&&x<h&&0<=y&&y<w)
#define y0 y12345
#define y1 y54321

#ifdef LOCAL
#define debug(...) fprintf(stderr,__VA_ARGS__)
#else
#define debug(...) 42
#endif

using ul = unsigned long;
using ll = long long;
using P = pair<int, int>;
using vint = vector<int>;using vvint = vector<vector<int>>;
using vll = vector<ll>;using vvll = vector<vector<ll>>;
template<class T>bool chmax(T &a, const T &b){if(a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if(a>b){a=b;return 1;}return 0;}
template <class T>void initvv(vector<vector<T> > &v, int a, int b, const T &t = T()){
	v.assign(a, vector<T>(b, t));
}
template <class T>T gcd(T &a, T &b){if(a<b){swap(a,b);} T r = a%b; while(r!=0){a=b;b=r;r=a%b;} return b;}

vint dx = {-1, 0, 1, 0}, dy = {0, -1, 0, 1};
vint dx8 = {-1, -1, -1, 0, 1, 1, 1, 0}, dy8 = {-1, 0, 1, 1, 1, 0, -1, -1};

int main() {
	cin.tie(0);
   	ios::sync_with_stdio(false);
	debug("debug test\n");
   	int n,m;cin>>n;
	vint a(n), b(n), c(n), d(n);
	vector<P> s, t;
	rep(i, n){cin>>a[i]>>b[i];s.push_back(P(a[i], b[i]));}
	rep(i, n){cin>>c[i]>>d[i];t.push_back(P(c[i], d[i]));}
	sort(all(t));
	//sort(all(s));
	vint used(n, 0);

	int ans = 0;
	rep(i, n){
		int ma = -1;
		int pos = -1;
		rep(j, n){
			if(used[j]!=1&&s[j].first< t[i].first&&s[j].second < t[i].second){
				if(chmax(ma, s[j].second)){
					pos = j;
				}
			}
		}
		if(pos != -1){
			ans++;
			used[pos] = 1;
			debug("%d %d\n", i, pos);
		}
	}
	cout << ans << endl;
	return 0;
}
