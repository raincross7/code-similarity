#include<bits/stdc++.h>

using namespace std;
#define PI              3.1415926536

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod 1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define REP(i,n) for(i=0;i<n;i++)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

void c_p_c()
{
#ifndef  ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main()
{
	//c_p_c();
	FIO;


	int n;
	cin >> n;

	int a[n];
	int i;
	for (i = 0; i < n; i++)
		cin >> a[i];

	int dp[n];
	dp[n - 1] = 0;

	for (i = n - 2; i >= 0; i--)
	{
		if (a[i] >= a[i + 1])
			dp[i] = 1 + dp[i + 1];
		else
			dp[i] = 0;
	}
	// for (i = 0; i < n; i++)
	// 	cout << dp[i] << " ";
	cout << *max_element(dp, dp + n);



}






