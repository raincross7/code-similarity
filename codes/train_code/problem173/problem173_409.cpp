#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define sz(x) int(x.size())
#define pb push_back
#define eb emplace_back
using ll=long long;
using P = pair<int,int>;
using LP=pair<ll,int>;
#define chmax(x,y) x = max(x,y)
#define chmin(x,y) x = min(x,y)
const ll MOD=1000000007,MOD2=998244353;



int main() {
    ll N;
    cin>>N;
    if(N==1){cout<<0<<endl;return 0;}
    ll ans=0;
    for(ll i=1;i*i<=N;i++){
        if(N%i>0)continue;
        ll x=N/i-1;
        //cout<<x<<" ";
        if(x>N/x){
            ans+=x;
        }
    }
    cout<<ans<<endl;
}