
// Problem : M - Candies
// Contest : AtCoder - Educational DP Contest
// U
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define Ma7moud_7amdy                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define Open_Sesame Open()
#define all(v) ((v).begin()), ((v).end())
#define allr(v) ((v).rbegin()), ((v).rend())
#define clr(arr, x) memset(arr, x, sizeof arr)
#define endl "\n"
#define watch(x) cout << #x << " = " << x << endl;
#define RT(x) return cout << (x), 0;
#define Accepted 0
#define INF 0x3f3f3f3f3f3f3f3fLL
typedef long long ll;
typedef vector<int> vi;
const int dx[] = { 1, 0, -1, 0, 1, 1, -1, -1 };
const int dy[] = { 0, 1, 0, -1, 1, -1, 1, -1 };
void Open()
{
#ifndef ONLINE_JUDGE 
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
#endif
}
const int mod = ll(1e9 + 7), N = 2000 + 5;
//“Nobody but you have to believe in your dreams to make them a reality.” ― Germany Kent
int n, k, a[101], mem[101][100005],dp[101][100005];
map<int, int>mp;
int solve(int i = 0, int rem = k) {
	if (!rem)return 1;
	if (i == n)
	{
		return rem == 0;
	}
	int& ret = mem[i][rem];
	if (~ret)return ret;
	ret = 0;
	for (int ch = 0; ch <= min(rem, a[i]); ch++) {
		ret += solve(i + 1, rem - ch) % mod;
		ret %= mod;
	}
	return ret;
}
int main()
{
	Ma7moud_7amdy;
//	Open_Sesame;
	//clr(mem, -1);
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
//	cout << solve() << endl;

	//baseCase
	for (int i = 0; i <= n; i++) {
		dp[i][0] = 1;
	}

	//itteration
	for (int i = n - 1; i >= 0;i--) {
		//perfixSum
		for (int rem = 1; rem <= k; rem++) {
			dp[i+1][rem] +=dp[i+1][rem-1]%mod;
			dp[i+1][rem]%=mod;
		}
		for (int rem = 0; rem <=k; rem++) {
			int& ret = dp[i][rem];
			ret = 0;
			/*for (int ch = 0; ch <= min(rem, a[i]); ch++) {
				ret += dp[i + 1][rem - ch];
				ret %= mod;
			}*/
			ret += ((dp[i + 1][rem] - dp[i + 1][rem - min(rem, a[i])-1])%mod+mod)%mod;
			ret%=mod;
		}
	}
	cout << dp[0][k] << endl;
}
