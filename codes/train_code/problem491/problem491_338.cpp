#include<bits/stdc++.h>
using namespace std;
#define  vi vector<long long int>
#define  set1 set<long long int>
#define  pb push_back
#define  map1 map<long long int,long long int>
#define  ll long long int
#define  mp make_pair
#define  inf 1e17
#define  minf INT_MIN
#define  setbits(x) __builtin_popcountll(x)
#define  pres(x,y) fixed<<setprecision(y)<<x
#define  pair1 pair<long long int,long long int>
#define  mk(arr,n,type) type *arr=new type[n];
#define  mod 1000000007
#define  pi  3.1415926535897932384626433832
#define  ins insert
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;
//find_by_order() --> returns an iterator to the k-th largest element (counting from zero)
//order_of_key()  --> the number of items in a set that are strictly smaller than our item.
#define  w(t) long long int t;t=1;while(t--)

struct s
{
	ll a, b, c;

};

void solve() {

	ll n;
	cin >> n;
	vector<s> v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i].a >> v[i].b >> v[i].c;
	}

	ll dp[n + 1][3];


	dp[0][0] = v[0].a;
	dp[0][1] = v[0].b;
	dp[0][2] = v[0].c;

	for (ll i = 1; i < n; i++) {
		dp[i][0] = v[i].a + max(dp[i - 1][1], dp[i - 1][2]);
		dp[i][1] = v[i].b + max(dp[i - 1][0], dp[i - 1][2]);
		dp[i][2] = v[i].c + max(dp[i - 1][1], dp[i - 1][0]);
	}

	cout << max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2]));

	//cout << "FAds" << "\n";
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inp.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	w(t) {
		solve();
	}
	return 0;
}