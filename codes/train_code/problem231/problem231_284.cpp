#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

typedef pair<int, int> pii;
typedef pair<ll,ll> pll;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

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

void solve() {
	int a,b,c;
	cin >> a >> b >> c;

	int k;
	cin >> k;
	int cnt = 0;
	while(a >= b) b*=2, cnt++;
	while(b >= c) c*=2, cnt++;

	if(cnt <= k) cout << "Yes\n";
	else cout << "No\n";
}

int32_t main() {_
	
#ifndef ONLINE_JUDGE
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
#endif

	// tc(t)
		solve();
	cerr << "[ Time : " << (float)clock() / CLOCKS_PER_SEC << " secs ]" << endl;
}

