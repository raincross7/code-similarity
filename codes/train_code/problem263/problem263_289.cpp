#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define int ll
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

#define int ll

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)

#define ALL(s) (s).begin(),(s).end()
#define ALLn(s,n) s,s+n
#define F first
#define S second
#define pb push_back
#define tc(t) int t; cin >> t; while(t--)
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define D1(x) { cerr << " [" << #x << ": " << x << "]\n"; }
#define D2(x) { cerr << " [" << #x << ": "; for(auto it:x) cerr << it << " "; cerr << "]\n"; }

const ll MOD = 1e9 + 7;
const ll MAXN = 1e6 + 7;
const ll INF = LONG_LONG_MAX;

int N, M;
char mat[2001][2001];
vi rows[2001], col[2001];
pii range[2001][2001];

void solve() {
	cin >> N >> M;
	F0R(i, N) F0R(j, M) cin >> mat[i][j];

	F0R(i, N) {
		rows[i].pb(-1);
		F0R(j, M) if (mat[i][j] == '#') rows[i].pb(j);
		rows[i].pb(M);

		int l = 0, r = 1, cnt = 0;
		F0R(j, M) {
			if (mat[i][j] != '#') {
				range[i][j].F = (rows[i][r] - rows[i][l]);
			}
			if (j == rows[i][r]) l = r, r++;
		}
	}

	F0R(i, M) {
		col[i].pb(-1);
		F0R(j, N) if (mat[j][i] == '#') col[i].pb(j);
		col[i].pb(N);

		int l = 0, r = 1;
		F0R(j, N) {
			if (mat[j][i] != '#') range[j][i].S = (col[i][r] - col[i][l]);
			if (j == col[i][r]) l = r, r++;
		}
	}

	int ans = 0;

	// F0R(i, N) {
	// 	F0R(j, M) {
	// 		cerr << '{' << range[i][j].F << ',' << range[i][j].S << "} ";
	// 	}
	// 	cerr << '\n';
	// }
	F0R(i, N) F0R(j, M) {if (mat[i][j] != '#') ans = max(ans, range[i][j].F + range[i][j].S);}

	cout << ans - 3;

}

int32_t main() {
	_

#ifndef ONLINE_JUDGE
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
#endif

	// tc(t)
	solve();
	cerr << "[ Time : " << (float)clock() / CLOCKS_PER_SEC << " secs ]" << endl;
}

// 1 4 3 2 5

// 1 - 1
// 2 - 4
// 3 - 3
// 4 - 2
// 5 - 5