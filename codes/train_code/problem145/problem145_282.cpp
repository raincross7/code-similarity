//ヘッダー
#include<bits/stdc++.h>
using namespace std;

//型定義
typedef long long ll;

//定数
const int INF=1e+9;
const int MOD=1e+9+7;

//REPマクロ
#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define REP2(i,a,b) for(ll i=a;i<(ll)(b);i++)
#define REPD2(i,a,b) for(ll i=a;i>(ll)(b);i--)

// 多次元 vector 生成
template<class T>
vector<T> make_vec(size_t a){
    return vector<T>(a);
}
template<class T, class... Ts>
auto make_vec(size_t a, Ts... ts){
  return vector<decltype(make_vec<T>(ts...))>(a, make_vec<T>(ts...));
}

//vectorの扱い
#define ALL(x) (x).begin(),(x).end() //sortなどの引数省略
#define SIZE(x) ((ll)(x).size()) //size
#define MAX(x) *max_element(ALL(x)) //最大値
#define MIN(x) *min_element(ALL(x)) //最小値

int main(){
    int H,W;
    cin>>H>>W;
    vector<vector<char>> s(H,vector<char>(W));
    REP(i,H) REP(j,W) cin>>s[i][j];
    vector<vector<ll>> dp(H+1,vector<ll>(W+1,INF));
    if(s[0][0]=='.') dp[0][0]=0;
    else dp[0][0]=1;
    REP(i,H){
        REP(j,W){
            if(i-1>=0){
                if(s[i-1][j]=='.'&&s[i][j]=='#') dp[i][j]=min(dp[i][j],dp[i-1][j]+1);
                else dp[i][j]=min(dp[i][j],dp[i-1][j]);
            }

            if(j-1>=0){

                if(s[i][j-1]=='.'&&s[i][j]=='#') dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
                else dp[i][j]=min(dp[i][j],dp[i][j-1]);
            
            }
        }
    }
    cout<<dp[H-1][W-1]<<endl;
}