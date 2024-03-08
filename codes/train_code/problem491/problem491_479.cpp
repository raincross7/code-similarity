#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	ll A[n];
	ll B[n];
	ll C[n];
	for (int i=0; i<n; i++){
		cin>>A[i]>>B[i]>>C[i];
	}
	ll dp[n][3];
	dp[0][0] = A[0];
	dp[0][1] = B[0];
	dp[0][2] = C[0];
	for (int i=1; i<n; i++){
		dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + A[i];
		dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + B[i];
		dp[i][2] = max(dp[i - 1][1], dp[i - 1][0]) + C[i];
	}
	ll ans = 0;
	for (int i=0; i<=2; i++){
		ans = max(dp[n - 1][i], ans);
	}
	cout<<ans;
}