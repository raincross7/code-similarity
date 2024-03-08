#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
#define big 998244353
#define ff first
#define se second
#define pb push_back
#define pii pair<int,int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define PSET(x,y) fixed<<setprecision(y)<<x
#define mp make_pair
#define pi 3.141592653589
int power(int x,int y){
    int r=1,z=x;
    while(y){
        if(y & 1)r*=z;
        z*=z;y=y>>1;}
    return r;}
int powerm(int x,int y,int p){
    int r=1;
    while(y){
        if(y & 1)r=(r*x)%p;
        y=y>>1;
        x=(x*x)%p;}
    return r%p;}
int modinv(int x,int m){
    return powerm(x,m-2,m);}
int logarithm(int a,int b){
    int x=0;
    while(a>1){
        x++;
        a/=b;}
    return x;}
int32_t main(){
    fast;
    int n;
    cin>>n;
    vector<vector<int> > dp(n,vector<int>(3,0));
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(i==0)
            dp[i][0]=a,dp[i][1]=b,dp[i][2]=c;
        else{
            dp[i][0]=max(dp[i-1][1],dp[i-1][2])+a;
            dp[i][1]=max(dp[i-1][0],dp[i-1][2])+b;
            dp[i][2]=max(dp[i-1][0],dp[i-1][1])+c;
        }
    }
    cout<<max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
    return 0;
}