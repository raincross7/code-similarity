#include<bits/stdc++.h>
using namespace std;

int mod = 1e9+7;

int main() {
	
	int m,n;
	cin >> m >> n;
	vector<vector<char>> grid(m,vector<char>(n));
	
	for(int i=0; i<m; ++i) {
		for(int j=0; j<n; ++j)
		cin >> grid[i][j];
	}
	
	vector<vector<int>> dp(m,vector<int>(n,0));
	
	dp[0][0] = 1;
	
	for(int i=1; i<m; ++i) {
		if(grid[i][0]=='.' && dp[i-1][0]==1)
		dp[i][0] = 1;
	}
	
	for(int j=1; j<n; ++j) {
		if(grid[0][j]=='.' && dp[0][j-1]==1)
		dp[0][j] = 1;
	}
	
	dp[0][0] = 0;
	
	for(int i=1; i<m; ++i) {
		for(int j=1; j<n; ++j) {
			
			if(grid[i][j]=='#')
			continue;
			else
			dp[i][j] = ((dp[i-1][j]%mod)+(dp[i][j-1]%mod))%mod;
			
		}
	}
	
	// for(int i=0; i<m; ++i) {
	// 	for(int j=0; j<n; ++j)
	// 	cout << dp[i][j] << " ";
	// 	cout << endl;
	// }
	
	cout << dp[m-1][n-1]%mod << endl;
	return 0;
	
}