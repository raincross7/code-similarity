/*** author: yuji9511 ***/
#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using namespace atcoder;
using ll = long long;
using lpair = pair<ll, ll>;
const ll MOD = 1e9+7;
const ll INF = 1e18;
#define rep(i,m,n) for(ll i=(m);i<(n);i++)
#define rrep(i,m,n) for(ll i=(m);i>=(n);i--)
#define printa(x,n) for(ll i=0;i<n;i++){cout<<(x[i])<<" \n"[i==n-1];};
void print() {}
template <class H,class... T>
void print(H&& h, T&&... t){cout<<h<<" \n"[sizeof...(t)==0];print(forward<T>(t)...);}
#define debug(x) cout << #x << " = " << (x) << " (L" << __LINE__ << ")" << "\n"

void solve(){
    ll N,Q;
    cin >> N >> Q;
    dsu d(N+1);
    while(Q--){
        ll t,u,v;
        cin >> t >> u >> v;
        if(t == 0){
            d.merge(u,v);
        }else{
            print(d.same(u,v));
        }
    }



}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
}