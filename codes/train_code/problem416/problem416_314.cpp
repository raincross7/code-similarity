#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef complex<double> point;
#define xx real()
#define yy imag()

#define REP(i, a, b) for(int i = (a); i < (int)(b); i++)
#define REPN(i, a, b) for(int i = (a); i <= (int)(b); i++)
#define FA(it, x) for(__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
#define SZ(x) (int)(x).size()
#define BE(x) (x).begin(), (x).end()
#define SORT(x) sort(BE(x))
#define _1 first
#define _2 second

#define x1 gray_cat_x1
#define y1 gray_cat_y1

template<class T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }

#define file "I1"

const double EPS = 1e-9;
const double PI = acos(-1.);
const int INF = 1e9;
const ll MOD = 1e9 + 7;

const int MAXN = 1e5 + 5;

int make_query(ll v) {
	printf("? %lld\n", v);
	fflush(stdout);
	char c[10];
	scanf("%s", &c[0]);
	return c[0] == 'Y';
}

void make_ans(ll v) {
	printf("! %lld\n", v);
	fflush(stdout);
	exit(0);
}

void solve(){
	if (make_query(1e9)) {
		ll v = 1e9;
		while(v > 1) {
			if (!make_query(v - 1)) {
				make_ans(v);
			}
			v /= 10;
		}
		make_ans(v);
	} else {
		ll v = 1e9;
		while(1) {
			v /= 10;
			if (make_query(v)) {
				break;
			}
		}
		ll l = v, r = 10 * v - 1;
		for(; l + 1 < r; ) {
			ll mid = (l + r) / 2;
			if (make_query(10 * mid)) {
				r = mid;
			} else {
				l = mid;
			}
		}
		make_ans(r);
	}
}   

int main(){
/*#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif*/
    //freopen(file".in", "r", stdin); freopen(file".out", "w", stdout);
    int t = 1;
    //cin >> t;
    while(t--){
        solve();    
    }
}
