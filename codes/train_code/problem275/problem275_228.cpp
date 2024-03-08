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
#define stlen(s) ll s.size()-1
#define all(v) v.begin(), v.end()
#define cout(n) cout<<std::fixed<<std::setprecision(n)
using Graph = vector<vector<int>>;
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



int main() {
int W,H,N;
cin>>W>>H>>N;
char grid[H][W];
rep(i,H){
    rep(j,W){
        grid[i][j]='.';
    }
}
int x,y,a;

rep(i,N){
    cin>>x>>y>>a;
    if(a==1){
        rep(j,H){
            repr(k,x){
                grid[j][k]='#';
            }
        }
    }
    else if(a==2){
        rep(j,H){
            rep4(k,x,W-1){
                grid[j][k]='#';

            }
        }
    }
    else if(a==3){
        repr(j,y){
            rep(k,W){
                grid[j][k]='#';
            }
        }
    }
    else{
        rep4(j,y,H-1){
            rep(k,W){
                grid[j][k]='#';
            }
        }
    }


}
int count=0;
rep(i,H){
    rep(j,W){
        if(grid[i][j]=='.'){
            count++;
        }
    }
}
cout<<count<<endl;
return 0;
}