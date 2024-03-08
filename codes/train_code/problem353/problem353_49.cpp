#include <bits/stdc++.h>
#define rep(a,n) for (ll a = 0; a < (n); ++a)
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
typedef pair<P,ll> PP;
//typedef vector<vector<P> > Graph;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const ll INF = 1e18;

//入力
ll n;
vector<ll>a;

//途中で使う
map<ll,ll>rk;
vector<ll>tmp;

int main(){
    cin >> n;
    a.resize(n);
    tmp.resize(n);
    rep(i,n){
        cin>>a[i];
        tmp[i]=a[i];
    }
    sort(tmp.begin(),tmp.end());
    rep(i,n){
        rk[tmp[i]]=i;
    }
    ll ans = 0;
    rep(i,n){
        if((i%2)!=(rk[a[i]]%2))ans++;
    }
    cout << ans/2 << endl;


    return 0;
}