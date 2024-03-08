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
	string s; cin >> s;
	string rev = s;
	reverse(rev.begin(), rev.end());
	if (s != rev) {
		cout << "No\n";
		return;
	}
	int n = s.length();
	if (n == 1) {
		cout << "Yes\n";
		return;
	}
	string f = s.substr(0, n / 2);
	string rf = f;
	reverse(rf.begin(), rf.end());
	if (f != rf) {
		cout << "No\n";
		return;
	}
	f = s.substr(1 + n / 2, n / 2);
	rf = f;
	reverse(rf.begin(), rf.end());
	if (f != rf) {
		cout << "No\n";
		return;
	}
	cout << "Yes\n";
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