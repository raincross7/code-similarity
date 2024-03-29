#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
 
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
 
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
 
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
 
template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
 
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
 
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 100001; //check the limits, dummy
 
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);    
	
	int N, K; cin >> N >> K; N++;
    ll H[N]; F0R(i, N-1) cin >> H[i];
    H[N-1] = 0;
    ll dp[N+1][K+1];
    F0R(i, N+1) F0R(j, K+1) {
        dp[i][j] = 1000000000000;
    }

    dp[0][0] = 0;
    FOR(i, 1, N+1) {
        F0R(j, K+1) {
            F0R(k, j+1) {
                int pos = i - 1 - k;
                if (pos < 0) break;
                int dif = 0;
                int lst = 0; if (pos != 0) lst = H[pos-1];
                dp[i][j] = min(dp[i][j], dp[pos][j-k] + max(0ll, H[i-1] - lst));
            }
        }
    }

    ll ans = 1000000000000;

    F0R(j, K+1) ans = min(ans, dp[N][j]);
    cout << ans << endl;
	
	return 0;
}
 
// read the question correctly (ll vs int)
// template by bqi343

