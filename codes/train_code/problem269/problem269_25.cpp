#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<n;i++)
#define repl(i,l,r) for(ll i=(l);i<(r);i++)
#define per(i,n) for(ll i=n-1;i>=0;i--)
#define perl(i,r,l) for(ll i=r-1;i>=l;i--)
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ins insert
#define pqueue(x) priority_queue<x,vector<x>,greater<x>>
#define all(x) (x).begin(),(x).end()
#define CST(x) cout<<fixed<<setprecision(x)
#define vtpl(x,y,z) vector<tuple<x,y,z>>
#define rev(x) reverse(x);
using ll=long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using pl=pair<ll,ll>;
using vpl=vector<pl>;
using vvpl=vector<vpl>;
const ll MOD=1000000007;
const ll MOD9=998244353;
const int inf=1e9+10;
const ll INF=4e18;
const ll dy[8]={1,0,-1,0,1,1,-1,-1};
const ll dx[8]={0,-1,0,1,1,-1,1,-1};
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
int main(){
    ll h,w;cin >> h >>w;
    vector<vector<char>> g(h,vector<char>(w));
    rep(i,h)rep(j,w)cin >> g[i][j];
    ll ans=0;
    vvl seen(h,vl(w,0));
    ll cnt=0;
    queue<pl> que;
    rep(i,h)rep(j,w){
        if(g[i][j]=='#'){
            seen[i][j]=1;
            que.push({i,j});
            cnt++;
        }
    }
    while(1){
        if(cnt==h*w)break;
        ans++;
        queue<pl> nque;
        while(!que.empty()){
            pl v=que.front();
            que.pop();
            rep(i,4){
                ll ny=v.fi+dy[i],nx=v.se+dx[i];
                if(ny<0||nx<0||ny>=h||nx>=w)continue;
                if(seen[ny][nx]==0&&g[ny][nx]=='.'){
                    g[ny][nx]='#';
                    seen[ny][nx]=1;nque.push({ny,nx});
                    cnt++;
                }
            }
        }
        que=nque;
    }
    cout <<ans <<endl;
}