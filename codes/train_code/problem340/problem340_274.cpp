#include<bits/stdc++.h>
using namespace std;
#define ALL(x) x.begin(),x.end()
#define rep(i,n) for(int i=0;i<n;i++)
#define debug(v) cout<<#v<<":";for(auto x:v){cout<<x<<' ';}cout<<endl; 
#define INF 1000000000
#define mod 1000000007
using ll=long long;
const ll LINF = 1001002003004005006ll;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int x,y,z;
signed main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n,a,b;cin>>n>>a>>b;
    rep(i,n){
        int p;cin>>p;
        if(p<=a)x++;
        else if(p<=b)y++;
        else z++;
    }
    cout<<(min({x,y,z}))<<endl;
    return 0;
}
