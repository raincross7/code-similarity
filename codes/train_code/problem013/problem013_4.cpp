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

vi g[MAXN];

int used[MAXN];

int fl = 0;

void dfs(int s, int col){
	used[s] = col;
	REP(i, 0, SZ(g[s])){
		int to = g[s][i];
		if (used[to] == used[s]){
			fl = 1;
		}
		if (!used[to]){
			dfs(to, 3 - col);
		}
	}
}

void solve(){
	int n, m;
	scanf("%d%d", &n, &m);
	REP(i, 0, m){
		int a, b;
		scanf("%d%d", &a, &b);
		g[a].pb(b);
		g[b].pb(a);
	}
	ll ans = 0ll;
	ll cnt1 = 0ll;
	ll cnt2 = 0ll;
	ll cnt0 = 0ll;
	REPN(i, 1, n){
		if (SZ(g[i]) == 0){
			cnt0++;
			continue;
		}
		if (!used[i]){
			fl = 0;
			dfs(i, 1);
			if (fl){
				cnt1++;
			} else {
				cnt2++;
			}
		}
	}
	ans = cnt0 * (2 * n - cnt0) + 2 * cnt2 * cnt2 + 2 * cnt1 * cnt2 + cnt1 * cnt1;
	printf("%lld\n", ans);
}   

int main(){

    //freopen(file".in", "r", stdin); freopen(file".out", "w", stdout);
    int t = 1;
    //cin >> t;
    while(t--){
        solve();    
    }
}
