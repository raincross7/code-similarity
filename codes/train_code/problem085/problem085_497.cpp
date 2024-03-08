//参考：http://ehafib.hatenablog.com/entry/2015/12/23/164517
//インクルード
#include<algorithm>//sort,二分探索,など
#include<bitset>//固定長bit集合
#include<cmath>//pow,logなど
#include<complex>//複素数
#include<deque>//両端アクセスのキュー
#include<functional>//sortのgreater
#include<iomanip>//setprecision(浮動小数点の出力の誤差)
#include<iostream>//入出力
#include<iterator>//集合演算(積集合,和集合,差集合など)
#include<map>//map(辞書)
#include<numeric>//iota(整数列の生成),gcdとlcm(c++17)
#include<queue>//キュー
#include<set>//集合
#include<stack>//スタック
#include<string>//文字列
#include<unordered_map>//イテレータあるけど順序保持しないmap
#include<unordered_set>//イテレータあるけど順序保持しないset
#include<utility>//pair
#include<vector>//可変長配列

using namespace std;
typedef long long ll;

//マクロ
#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=(ll)(n)-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x))
#define INF 1000000000000 //10^12
#define MOD 10000007 //10^9+7
#define PB push_back
#define MP make_pair
#define F first
#define S second



void Prime_factorize(vector<ll>& v,ll n){
    if(n<=1) return;
    ll l=ll(sqrt(n));
    FOR(i,2,l){
        if(n%i==0){
        Prime_factorize(v,i);Prime_factorize(v,ll(n/i));return;
        }
    }
    v.PB(n);return;
}


signed main(){
    ll n;cin >> n;
    map<ll,ll> m;
    FOR(i,1,n){
        vector<ll> v;Prime_factorize(v,i);
        REP(j,v.size()){
            if(m.find(v[j])==m.end()){
                m.insert(MP(v[j],1));
            }else{
                m[v[j]]++;
            }
        }
    }
    vector<ll> ans(5,0);
    for(auto i=m.begin();i!=m.end();++i){
        if(i->S>=74){
            ans[0]++;
        }
        if(i->S>=24){
            ans[1]++;
        }
        if(i->S>=14){
            ans[2]++;
        }
        if(i->S>=4){
            ans[3]++;
        }
        if(i->S>=2){
            ans[4]++;
        }
    }
    ll rans=0;
    if(ans[3]>=2 && ans[3]+ans[4]>=3){
        rans+=ll((ans[4]-2)*ans[3]*(ans[3]-1)/2);
    }
    //cout << rans << endl;
    rans+=ans[0];
    rans+=(ans[1]*(ans[4]-1));
    rans+=(ans[2]*(ans[3]-1));
    cout << rans << endl;

}