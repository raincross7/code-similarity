/*
勉強させて頂いたコード
https://twitter.com/kyopro_friends/status/1191212126221688834
dp的な更新が使えるのは盲点
記号の右と左で比較して、差の合計が結果的に答えになる
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;

const ll LongINF=1e13+7;
const int INF=1e9+7;
const int dx[]={0,1,0,-1};
const int dy[]={1,0,-1,0};

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
template <class T, class Y>T GCD(T a, Y b){if(a<b){int c=a;a=b;b=c;}if (a % b == 0){return b;}return GCD(b, a % b);}
template<class T,class Y>T LCM(T a,Y b){return (a*b)/GCD(a,b);}
void clear(queue<pair<int, int>> &q){queue<pair<int, int>> empty;swap(q, empty);} //queueの中身の型は適時変更を忘れない

using vi=vector<int>;
using vii=vector<vi>;

#define REP(i,a,b) for(ll i=(a);i<(b);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define rv reverse
#define ALL(a) (a).begin(),(a).end()
#define decimal(x) fixed<<setprecision(x)

int main(){
    string S;
    cin>>S;
    int n=S.length(),cnt=0;
    vi a(n+1,0);
    rep(i,n){
        if(S[i]=='<')chmax(a[i+1],a[i]+1);
    }
    for(int i=n;i>0;i--){
        //iはa配列基準なのでS配列に添わない。
        if(S[i-1]=='>')chmax(a[i-1],a[i]+1);
    }
    ll sum=accumulate(a.begin(),a.end(),ll(0));
    cout<<sum<<endl;
    return 0;
}

//a=97,z=122