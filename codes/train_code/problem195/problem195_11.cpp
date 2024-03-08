#include<bits/stdc++.h>
#include<iostream>
#define inf 1e9
using namespace std;
int cp(vector<int>v,int n){
    vector<int>dp(n+1);
    dp[1]=0;
    
    for(int i=2;i<=n;i++){
        int op1=abs(v[i]-v[i-1])+dp[i-1];
        int op2=(i==2)?inf:abs(v[i]-v[i-2])+dp[i-2];
        dp[i]=min(op1,op2);
    }
    return dp[n];
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)
    cin>>v[i];
    cout<<cp(v,n);

    return 0;
}
