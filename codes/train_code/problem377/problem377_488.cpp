#include <bits/stdc++.h>
 
using namespace std;
 
int mod=1e9+7;  ///A simpler way to write 1,000,000,007
 
int main()
{
    int n,k;
    cin >> n >> k;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    int dp[n+1][k+1];
    dp[0][0]=1;
    for(int i=1;i<=k;i++)  /// Set the initial values
    {
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        int sums[k+1];
        sums[0]=dp[i-1][0];
        for(int j=1;j<=k;j++)
        {
            sums[j]=(sums[j-1]+dp[i-1][j])%mod;  ///Calculate the prefix sums for i-1
        }
        for(int j=0;j<=k;j++)
        {
            int tr=sums[j];  ///Sum of dp[i-1][0...j]
            int unreachable=j-a[i]-1;  ///We need to subtract the sum of the first "unreachable" elements (dp[i-1][0...unreachable])
            if(unreachable>=0)
            {
                tr=(tr-sums[unreachable]+mod)%mod;  ///Add mod to make sure that "tr-sums[unreachable]" is not negative.
            }
            dp[i][j]=tr;
        }
    }
  	cout << dp[n][k];
    return 0;
}
