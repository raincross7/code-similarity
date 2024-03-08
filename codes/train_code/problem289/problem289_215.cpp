#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using P = pair<ll,ll>;
using vl = vector<ll>;
using Map = map<ll,ll>;
using T = tuple<ll,ll,ll>;
using vvl = vector<vector<ll>>;
#define all(v) v.begin(), v.end()
#define prt(v) cout<<v<<"\n";
#define fi(v) get<0>(v)
#define se(v) get<1>(v)
#define th(v) get<2>(v)
#define endl "\n"
template <typename T> bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template <typename T> bool chmin(T &a, const T &b){if (a>b){a=b;return 1;}return 0;}
const ll INF=1LL<<60;
const ll MOD=1000000007;

signed main(void){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);
    ll M;
    cin >> M;
    ll K;
    cin >> K;
    if(K>=(1<<M)){
        prt(-1)
        return 0;
    }
    if(M==1){
        if(K==0)prt("0 0 1 1")
        else prt(-1)
        return 0;
    }
    set<ll> A,B;
    for(ll i=0;i<(1<<M);++i)A.insert(i);
    for(ll i=0;i<M;++i){
        if(K&(1<<i)){A.erase(1<<i);
        B.insert(1<<i);}
    }
    for(auto x=A.begin();x!=A.end();x++){
        cout<<*x<<" ";
    }
    for(auto x=B.begin();x!=B.end();x++){
        cout<<*x<<" ";
    }
    for(auto x=prev(A.end());;x--){
        cout<<*x<<" ";if(x==A.begin())break;
    }
    if(!B.empty())
    for(auto x=prev(B.end());;x--){
        cout<<*x<<" ";if(x==B.begin())break;
    }cout<<endl;
    return 0;
}
