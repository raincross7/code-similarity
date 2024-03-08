 #include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second
#define ALL(a) (a).begin(),(a).end()
#define MAX 105
#define int long long int
using namespace std;


int32_t main()
{
    int n,m;
    cin >> n >> m;
    char v[n][m];
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < m ; j++)
            cin >> v[i][j];
    int dp[n][m];
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    
    for(int i = 1 ; i < m ; i++)
    {
        if(v[0][i] == '.')
            dp[0][i] += dp[0][i-1];
        else break;
    }
    for(int i = 1 ; i < n ; i++)
    {
        if(v[i][0] == '.')
            dp[i][0] += dp[i-1][0];
        else break;
    }
    int mod = 1000000007;
    for(int i = 1 ; i < n ; i++)
    {
        for(int j = 1 ; j < m ; j++)
        {
            if(v[i][j] == '.')
                dp[i][j] = ((dp[i-1][j]%mod)+(dp[i][j-1]%mod))%mod;
        }
    }
    
    cout << dp[n-1][m-1]%mod;
    
    
    return 0;
}
