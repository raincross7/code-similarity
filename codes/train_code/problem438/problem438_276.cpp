#include<bits/stdc++.h>
using namespace std;
#define FOR(i,l,r) for(long long i=(l);i<(r);++i)
#define REP(i,n) FOR(i,0,n)
#define int long long
#define pb push_back
#define mp make_pair
const int MOD=1e9+7;
const int INF=1e15;

signed main(){
    int N,K;cin>>N>>K;
    int z=N/K;
    int ans=z*z*z;
    if(K%2==0&&N*2>=K){
        int count=0;
        int d=(N-K/2)/K+1;
        ans+=d*d*d;
    }
    cout<<ans<<endl;
}