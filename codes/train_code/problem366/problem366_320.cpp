/*****************************************************
 *     created by: nayakashutosh9
 * "Winners Never Quit and Quitters Never Win".
*****************************************************/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("Ofast")
using namespace __gnu_pbds;
using namespace std;
#define int long long int
#define endl '\n'
#define mod 1000000007
#define inf 1e18
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
const int N = 300005;
/**********************************************************************************************/

void solve() {
	int a, b, c, k; cin >> a >> b >> c >> k;
	int ans = 0;
	if (k > 0 && a > 0) {
		if (a >= k) ans += k, k = 0;
		else ans += a, k -= a;
	}
	if (k > 0 && b > 0) {
		if (b >= k) k = 0;
		else k -= b;
	}
	if (k > 0 && c > 0) {
		if (c >= k) ans -= k, k = 0;
		else ans -= c, k -= c;
	}
	cout << ans << endl;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t = 1, z = 1;
	// cin >> t; cin.ignore();
	while (t--) {
		// cout << "Case #" << (z++) << ": ";
		// clock_t start = clock();
		solve();
		// clock_t end = clock();
		// cout << (end-start) << endl;
		//print execution time in ms
	}

	return 0;
}