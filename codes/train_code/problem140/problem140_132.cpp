// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF LLONG_MAX
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};


int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,n,maxi=0,f=0,mini=INF,sum=0;
    ll h,w;
    ll m;
    cin>>n>>m;
    c=0;
    d=INF;
    rep(i,m){
        cin>>a>>b;
        if(c<a) c=a;
        if(d>b) d=b;
    }
    if(d-c<0) cout<<0<<endl;
    else cout<<d-c+1<<endl;


}
