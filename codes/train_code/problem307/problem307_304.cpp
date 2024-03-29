#include<bits/stdc++.h>
using namespace std;

using ll = long long ;
const int N = 1e5+5;

ll dp[N][2];
ll mod = 1e9+7;

int main()
{

    string l;

    cin>>l;

    dp[0][0]=1;

    for(int i=1;i<=l.size();i++)
    {
        if(l[i-1]=='1')
        {
            dp[i][0] = (dp[i-1][0]*2)%mod;
            dp[i][1] = (dp[i-1][0]+3*dp[i-1][1])%mod;
        }
        else
        {
            dp[i][0]=(dp[i-1][0])%mod;
            dp[i][1] = (dp[i-1][1]*3)%mod;
        }
    }
    cout<<(dp[l.size()][0]+dp[l.size()][1])%mod<<endl;
}
