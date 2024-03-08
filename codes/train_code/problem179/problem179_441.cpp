//ヘッダー
#include<bits/stdc++.h>
using namespace std;

//型定義
typedef long long ll;

//定数
const ll INF=1e+18;
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

using vl=vector<ll>;
int main(){
    ll N,K;
    cin>>N>>K;
    vl a(N);
    ll sum=0;
    REP(i,N){
        cin>>a[i];
        sum+=max(0LL,a[i]);
    }
    vl plus(N+1,0),minus(N+1,0);
    REP(i,N){
        plus[i+1]=plus[i]+max(0LL,a[i]);
        minus[i+1]=minus[i]+max(0LL,-a[i]);
    }
    ll tmp=INF;
    REP2(i,K,N+1){
        tmp=min(tmp,minus[i]-minus[i-K]);
        tmp=min(tmp,plus[i]-plus[i-K]);
    }
    sum-=tmp;
    cout<<sum<<endl;
    
}