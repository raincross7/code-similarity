#include <bits/stdc++.h>
using namespace std;

//#define int long long
typedef long long ll;

typedef unsigned long long ul;
typedef unsigned int ui;
const ll mod = 1000000007;
const ll INF = mod * mod;
typedef pair<int, int> P;
#define stop char nyaa;cin>>nyaa;
#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define Rep(i,sta,n) for(int i=sta;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per1(i,n) for(int i=n;i>=1;i--)
#define Rep1(i,sta,n) for(int i=sta;i<=n;i++)
#define all(v) (v).begin(),(v).end()
typedef pair<ll, ll> LP;
typedef long double ld;
typedef pair<ld, ld> LDP;
const ld eps = 1e-12;
const ld pi = acos(-1.0);
//typedef vector<vector<ll>> mat;
typedef vector<int> vec;

//繰り返し二乗法
ll mod_pow(ll a, ll n, ll m) {
	ll res = 1;
	while (n) {
		if (n & 1)res = res * a%m;
		a = a * a%m; n >>= 1;
	}
	return res;
}

struct modint {
	ll n;
	modint() :n(0) { ; }
	modint(ll m) :n(m) {
		if (n >= mod)n %= mod;
		else if (n < 0)n = (n%mod + mod) % mod;
	}
	operator int() { return n; }
};
bool operator==(modint a, modint b) { return a.n == b.n; }
modint operator+=(modint &a, modint b) { a.n += b.n; if (a.n >= mod)a.n -= mod; return a; }
modint operator-=(modint &a, modint b) { a.n -= b.n; if (a.n < 0)a.n += mod; return a; }
modint operator*=(modint &a, modint b) { a.n = ((ll)a.n*b.n) % mod; return a; }
modint operator+(modint a, modint b) { return a += b; }
modint operator-(modint a, modint b) { return a -= b; }
modint operator*(modint a, modint b) { return a *= b; }
modint operator^(modint a, int n) {
	if (n == 0)return modint(1);
	modint res = (a*a) ^ (n / 2);
	if (n % 2)res = res * a;
	return res;
}

//逆元(Eucledean algorithm)
ll inv(ll a, ll p) {
	return (a == 1 ? 1 : (1 - p * inv(p%a, a)) / a + p);
}
modint operator/(modint a, modint b) { return a * modint(inv(b, mod)); }

const int max_n = 1 << 18;
modint fact[max_n], factinv[max_n];
void init_f() {
	fact[0] = modint(1);
	for (int i = 0; i < max_n - 1; i++) {
		fact[i + 1] = fact[i] * modint(i + 1);
	}
	factinv[max_n - 1] = modint(1) / fact[max_n - 1];
	for (int i = max_n - 2; i >= 0; i--) {
		factinv[i] = factinv[i + 1] * modint(i + 1);
	}
}
modint comb(int a, int b) {
	if (a < 0 || b < 0 || a < b)return 0;
	return fact[a] * factinv[b] * factinv[a - b];
}
using mP = pair<modint, modint>;

int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

struct SuffixArray {
	struct SAComp {
		const int h;
		const vector<int> &g;
		SAComp(int h, vector<int> &g) : h(h), g(g) { ; }
		bool operator() (int a, int b) {
			return a != b && (g[a] != g[b] ? g[a] < g[b] : g[a + h] < g[b + h]);
		}
	};
	int n;
	string str;
	vector<int> sa, lcp;
	SuffixArray(const string &t) : n(t.size()), sa(n + 1), lcp(n + 1) {
		str = t;
		// build SA
		vector<int> g(n + 1, 0), b(n + 1, 0);
		rep(i, n + 1) { sa[i] = i; g[i] = str[i]; }
		sort(begin(sa), end(sa), SAComp(0, g));
		for (int h = 1; b[n] != n; h *= 2) {
			SAComp comp(h, g);
			sort(sa.begin(), sa.end(), comp);
			rep(i, n) b[i + 1] = b[i] + comp(sa[i], sa[i + 1]);
			rep(i, n + 1) g[sa[i]] = b[i];
		}
		// build LCP
		int h = 0;
		rep(i, n + 1) b[sa[i]] = i;
		rep(i, n + 1) {
			if (b[i]) {
				for (int j = sa[b[i] - 1]; j + h<n && i + h<n && str[j + h] == str[i + h]; ++h);
				lcp[b[i]] = h;
			}
			else {
				lcp[b[i]] = -1;
			}
			if (h > 0) --h;
		}
	}
	~SuffixArray() { str.clear(); }
	/*int find(string t) {
	int m = t.size();
	string p;
	p = t;
	int left = -1, right = n + 1;
	while (left + 1 < right) {
	int mid = (left + right) / 2;
	if (strncmp(str + sa[mid], p, m) < 0) left = mid;
	else right = mid;
	}
	return strncmp(str + sa[right], p, m) == 0 ? sa[right] : -1;
	}*/
};



void solve() {
    int n; cin >> n;
    vector<pair<int, int>> a(n); rep(i,n) cin >> a[i].first >> a[i].second;
    vector<pair<int, int>> b(n); rep(i,n) cin >> b[i].first >> b[i].second;
    sort(all(a));
    sort(all(b));
    int ans=0;
    vec memo(n, 0);
    rep(j, n){
        int max_a=-1;
		int max_y=-1;
        rep(i, n){
            if(memo[i]) continue;
			if(a[i].first >= b[j].first) break;
            if(a[i].second < b[j].second){
				if(a[i].second > max_y){
					max_a = i;
					max_y = a[i].second;
				}
            }
        }
        if(max_a != -1){
            memo[max_a] = 1;
            ans++;
        }
    }

    cout << ans << endl;

    // vec oknum(n, 0);
    // rep(i, n){
    //     rep(j, n){
    //         if(a[i].first < b[j].first && a[i].second < b[j].second){
    //             oknum[i]++;
    //         }
    //     }
    // }
    // for(auto aa: a){
    //     auto it = min_element(all(oknum));
    //     if(*it == 0){
    //         oknum.erase(oknum.begin() + distance(oknum.begin(), it));
    //         a.erase(a.begin + distance(oknum.begin(), it));
    //     }
    // }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //cout << fixed << setprecision(10);
  //init_f();
  //init();
  //int t; cin >> t; rep(i, t)solve();
  solve();
//  stop
    return 0;
}
