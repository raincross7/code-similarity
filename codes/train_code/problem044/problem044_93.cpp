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
    int N;
    cin>>N;
    vector<int> H(N);
    rep(i,N)cin>>H.at(i);
    int ans=0;
    rep(i,N){
        if(!i)ans+=H.at(i);
        else{
            if(H.at(i)>H.at(i-1)){
                ans+=H.at(i)-H.at(i-1);
            }
        }
    }
    cout<<ans<<endl;
}