#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
    cout << fixed << setprecision(10);
    
    // write code here
    int t=1;
    // cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int dp[n];
        dp[0]=0;
        dp[1]=abs(a[1]-a[0]);
        
        for(int i=2;i<n;i++)
            {
                dp[i]=min(dp[i-1]+abs(a[i]-a[i-1]),dp[i-2]+abs(a[i]-a[i-2]));
            }
      cout<<dp[n-1];

     }
 
        return 0;
 } 