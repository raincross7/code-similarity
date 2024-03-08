#include <bits/stdc++.h>
using namespace std;
// Macros for easier access
#define ll long long
#define endl '\n'
#define F first
#define S second
#define umap unordered_map
#define uset unordered_set
#define test ll cases; cin>>cases; for(ll testCase = 1; testCase <= cases; testCase++)
#define fill(name, val) memset(name, val, sizeof(name));
#define mop(a, op, b)    (a%mod op b%mod)%mod
#define precise fixed<<setprecision(50)
#define vll vector<ll>
#define vvll vector<vll>
#define pll pair<ll, ll>
#define get(a, n)    for(ll it = 0; it < n; it++)    cin>>a[it];
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define debug(x) cerr << #x << " : " << (x) << endl
// Constants
#define MX 100001
#define mod 1000000007LL
#define inf 1000000000000000000LL
void init(){
	boost;
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

/*	Author: 🆉🅴🅽🅾🅻🆄🆂	*/

// i, k => (i-1) (k, k-1, k-2, ..., k-ai)
// i, k-1 => (i-1) (k-1, k-2, ..., k-ai, k-ai-1)

// (i, k) = (i, k-1) - dp[i-1][k-ai-1] + dp[i-1][k]

int main(){
	init();
	ll n, k;	cin>>n>>k;
	ll a[n];	get(a, n);
	ll dp[n+1][k+1];	dp[0][0] = 1;
	for(ll i = 1; i <= k; i++)	dp[0][i] = 0;
	for(ll i = 1; i <= n; i++){
		dp[i][0] = 1;
		for(ll j = 1; j <= k; j++){
			dp[i][j] = mop(dp[i][j-1], +, dp[i-1][j]);
			if(j >= a[i-1] + 1)
				dp[i][j] = (dp[i][j] + mod - dp[i-1][j-a[i-1]-1])%mod;
		}
	}
	// for(ll i = 0; i <= n; i++){
	// 	for(ll j = 0; j <= k; j++)	cout<<dp[i][j]<<' ';
	// 	cout<<endl;
	// }
	cout<<dp[n][k];
}