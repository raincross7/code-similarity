#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG //GCC5.4.1で配列の範囲外アクセスをエラーにする

//cmdで g++ test.cpp とするとコンパイルできる
//制限1秒なら10^6は余裕 10^7は多分間に合う 10^8はよほど単純でないと厳しい
// https://github.com/atcoder/live_library
// cppdbg: test.exeのterminalに標準入力を打てる

#define ALL(x) x.begin(),x.end()
#define get_tp(t,i) get<i>(t)
#define len(x) (ll)(x.size())
#define ub(a,x) (upper_bound(ALL(a),x)-a.begin())
#define lb(a,x) (lower_bound(ALL(a),x)-a.begin())
typedef long long ll; //long long
typedef pair<int,int> pii; //pair<int,int>
typedef pair<long long,long long> pllll; //pair<ll,ll>
typedef vector<int> vi; //vector<int>
typedef vector<vector<int>> vvi; //vector<vector<int>>
typedef vector<ll> vll; //vector<long long>
typedef vector<vector<ll>> vvll; //vector<vector<long long>>
typedef priority_queue<ll, vector<ll>, greater<ll> > gpq; //逆順priority_queue
typedef priority_queue<ll> pq;

//const int MOD=998244353;
const int MOD=1000000007; //10^9+7
const long double PI=3.1415926535897932;

int main(){
    int W,H,N;cin>>W>>H>>N;
    vvi M(W,vi(H,1));
    for(int i=0;i<N;i++){
        int x,y,a;cin>>x>>y>>a;
        if(a==1){
            for(int j=0;j<x;j++){
                for(int k=0;k<H;k++){
                    M[j][k]=0;
                }
            }
        }else if(a==2){
            for(int j=x;j<W;j++){
                for(int k=0;k<H;k++){
                    M[j][k]=0;
                }
            }
        }else if(a==3){
            for(int j=0;j<W;j++){
                for(int k=0;k<y;k++){
                    M[j][k]=0;
                }
            }
        }else if(a==4){
            for(int j=0;j<W;j++){
                for(int k=y;k<H;k++){
                    M[j][k]=0;
                }
            }
        }
    }
    int ans=0;
    for(int j=0;j<W;j++){
        for(int k=0;k<H;k++){
            ans+=M[j][k];
        }
    }
    cout<<ans<<endl;
}