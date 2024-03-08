#include <iostream>
#include<bits/stdc++.h>
#define inf 1e9
using namespace std;
int cp(vector<int>v,int n,int k){
    vector<int>dp(n+1);
    dp[1]=0;
    for(int i=2;i<=n;i++){
        dp[i]=inf;
        for(int j=i-1;j>=1 &&(i-j)<=k;j--){
            dp[i]=min(dp[i],abs(v[i]-v[j])+dp[j]);
        }
    }
    return dp[n];
}
int main() {
    int n,k;
    cin>>n>>k;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)
    cin>>v[i];
    cout<<cp(v,n,k);
}
