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

const int MAXN = 1e2 + 5;

int dp[MAXN][MAXN];

void solve(){
	/*int lim = 50;
	REP(s, 2, lim) {
		REPN(x, 0, s) {
			int y = s - x;
			REPN(k, 1, x / 2) {
				if (!dp[x - 2 * k][y + k]) {
					dp[x][y] = 1;
					break;
				}
			}
			REPN(k, 1, y / 2) {
				if (!dp[x + k][y - 2 * k]) {
					dp[x][y] = 1;
					break;
				}
			}
		}
	}
	
	REP(i, 0, lim) {
		REP(j, 0, lim) {
			printf("%d", dp[i][j]);
		}
		putchar('\n');
	}*/
	ll x, y;
	cin >> x >> y;
	if (abs(x - y) <= 1) {
		printf("Brown\n");
	} else {
		printf("Alice\n");
	}
}   

int main(){

    //freopen(file".in", "r", stdin); freopen(file".out", "w", stdout);
    int t = 1;
    //cin >> t;
    while(t--){
        solve();    
    }
}
