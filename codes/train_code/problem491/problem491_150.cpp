#include<bits/stdc++.h> 
using namespace std; 
#define deb(x) cout <<"\n"<< (#x) << " = " << (x) << "\n"
const long long  INF = 1e18;
const long long mod=1e9+7 ;
void inputoutput()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	    
}

 
int32_t main()
{ 
	inputoutput() ;

	int n;
	cin>>n;

	vector< pair<pair<int,int>,int> > ar;

	for(int i=0 ; i<n ; ++i)
	{
		int a,b,c  ;
		cin>>a>>b>>c;
		ar.push_back(make_pair(make_pair(a,b),c));
	}

	int dp[n][3];

	dp[0][0]=ar[0].first.first;
	dp[0][1]=ar[0].first.second;
	dp[0][2]=ar[0].second ;

	for(int i=1 ; i<n ; ++i)
	{
		dp[i][0]=ar[i].first.first+max(dp[i-1][1], dp[i-1][2]);
		dp[i][1]=ar[i].first.second+max(dp[i-1][0], dp[i-1][2]);
		dp[i][2]=ar[i].second+max(dp[i-1][0], dp[i-1][1]);
	}
	int ans=INT_MIN ;

	for(int i=0 ; i<3 ; ++i)
	{
		// cout<<dp[n-1][i]<<" ";
		ans=max(ans,dp[n-1][i]);
	}

	cout<<ans;

	return 0;
}
