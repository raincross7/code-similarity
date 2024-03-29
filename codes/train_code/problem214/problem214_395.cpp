#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int k;
    cin >> n >> k;
    int h[n];
    for(int i=0;i<n;i++)cin >> h[i];

    vector<long>dp(n,1<<30);
    dp[0] = 0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=k;j++){
            if(i+j<n){
                dp[i+j] = min(dp[i+j],dp[i] + abs(h[i] - h[i+j]));
            }
        }
    }
    cout << dp[n-1]<<endl;
}