#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
struct __INIT{__INIT(){cin.tie(0);ios::sync_with_stdio(false);cout<<fixed<<setprecision(15);}} __init;
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define MOD 1000000007
#define INF (1<<30)
#define LINF (lint)(1LL<<56)
#define endl "\n"
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define reprev(i,n) for(int (i)=(n-1);(i)>=0;(i)--)
#define Flag(x) (1<<(x))
#define Flagcount(x) __builtin_popcount(x)
#define pint pair<int,int>
#define pdouble pair<double,double>
#define plint pair<lint,lint>
typedef long long lint;
int dx[8]={1,1,0,-1,-1,-1,0,1};
int dy[8]={0,1,1,1,0,-1,-1,-1};

int main(void){
    string N;
    cin >> N;
    int L=N.length();
    lint dp[L+1][2]={};
    dp[0][0]=1;
    rep(i,L) rep(j,2){
        int digit=N[i]-'0';
        rep(d,2){
            int i2=i+1,j2=j;
            if(j==0){
                if(digit<d) continue;
                if(digit>d) j2=1;
            }
            dp[i2][j2]=(dp[i2][j2]+dp[i][j]*(d==1?2:1))%MOD;
        }
    }
    cout << (dp[L][0]+dp[L][1])%MOD << endl;
}