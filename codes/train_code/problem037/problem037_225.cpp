/*#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>

#include <boost/rational.hpp>
*/
#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
using ll = long long;
using ld = long double;
#define rep2(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define rep3(i, n) for (ll i = 1; i < (ll)(n+1); i++)
#define rep4(i, s, n) for (ll i = (s); i < (ll)(n+1); i++)
#define repr(i,n) for (ll i = (n-1); i>=0;i--)
#define repr3(i,n) for(ll i = (n);i>0;i--)
#define repr4(i,s,n) for(ll i = (n);i>=(s);i--)
#define stlen(s) ll s.size()-1
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define cout(n) cout<<std::fixed<<std::setprecision(n)
using Graph = vector<vector<int>>;
using Graphw = vector<vector<pair<ll,ll>>>;
#define INF1  INT_MAX;
#define INF2  LLONG_MAX;
#define PI  3.14159265358979323846;
#define MOD 1000000007;
/*
namespace mp = boost::multiprecision;
// 任意長整数型
using Bint = mp::cpp_int;
// 仮数部長が32の浮動小数点数型
using Real32 = mp::number<mp::cpp_dec_float<32>>;
// 仮数部長が1024の浮動小数点数型
using Real1024 = mp::number<mp::cpp_dec_float<1024>>;
// 有理数型
using Rat = boost::rational<Bint>;
*/
const int mod = 1e9+7;


int main(){

int H,N;
cin>>H>>N;
int A[N+1],B[N+1];

rep3(i,N){
    cin>>A[i]>>B[i];
}
ll dp[H][N+1];
rep(i,H)rep(j,N+1)dp[i][j]=1LL<<50;
rep(i,N+1){
    dp[0][i]=0;
}
ll ans=1LL<<50;
rep(i,H){
    rep3(j,N){
        dp[i][j]=min(dp[i][j],dp[i][j-1]);
        if(i+A[j]<H){
            dp[i+A[j]][j]=min(dp[i+A[j]][j],dp[i][j]+B[j]);
        }
        
        if(i+A[j]>=H){
            ans=min(ans,dp[i][j]+B[j]);
        }
        

    }
}
cout<<ans<<endl;
return 0;
}