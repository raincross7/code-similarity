#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)

typedef long long ll;

#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)
//定数
#define INF 1000000000000 //10^12:極めて大きい値,∞
//略記
#define PB push_back //vectorヘの挿入
#define MP make_pair //pairのコンストラクタ
#define F first //pairの一つ目の要素
#define S second //pairの二つ目の要素


int main(){
    int N;
    cin>>N;
    vector<int> A(N);
    map<int,ll> ma;
    rep(i,N){
        cin>>A[i];
        ma[A[i]]++;
    }
    ll sum=0;
    for(pair<int,ll> p : ma){
        sum+=p.S*(p.S-1)/2;
    }
    rep(i,N){
        ll ans=sum-(ma[A[i]]-1);
        cout<<ans<<endl;
    }
    return 0;
}
