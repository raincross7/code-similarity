#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
ordered_set;	

#define FOR(i,a,b) for(int i = (a); i <= (b); ++i)
#define FORD(i,a,b) for(int i = (a); i >= (b); --i)
#define RI(i,n) FOR(i,1,(n))
#define REP(i,n) FOR(i,0,(n)-1)
#define mini(a,b) a=min(a,b)
#define maxi(a,b) a=max(a,b)
#define pb push_back
#define st first
#define nd second
#define sz(w) (int) w.size()
typedef vector<int> vi;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<pii, int> para;
const ll inf = 1e18 + 7;
const ll maxN = 1e6 + 5;
const ll MOD = 1e9 + 7;

int n, k, a[maxN];

// sprawdz MODULO!
int main() {
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n >> k;
	REP(i, n) {
		cin >> a[i];
	}
	REP(_, k) {
		vi ile(n + 1), b(n);
		REP(i, n) {
			ile[max(0, i - a[i])]++;
			ile[min(i + a[i] + 1, n)]--;
		}
		int sum = 0;
		REP(i, n) {
			sum += ile[i];
			b[i] = sum;
		}
		REP(i, n) a[i] = b[i];
		sum = 0;
		REP(i, n) {
			if (a[i] == n) sum++;
		}
		if (sum == n) break;
	}
	REP(i, n) cout << a[i] << " ";
	return 0;
}
 
