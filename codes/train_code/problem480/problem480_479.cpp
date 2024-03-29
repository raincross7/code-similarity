#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair< ll, ll > Pi;
#define rep(i,n) for(int i=0;i<(n);i++)
#define rep2(i,n) for(int i=1;i<=(n);i++)
#define rep3(i,i0,n) for(int i=i0;i<(n);i++)
#define pb push_back
#define mod 1000000007
const ll INF = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
ll gcd(ll a, ll b) {return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) {return a/gcd(a,b)*b;}
#define all(x) x.begin(), x.end()
#define mp make_pair
bool compare(Pi a, Pi b) {
    if(a.first != b.first){
        return a.first < b.first;
        
    }else{
        return a.second < b.second;
    }
}


bool In_map(ll y,ll x,ll h,ll w){
    if(y<0 || x<0 || y>=h || x>=w){
        return 0;
    }else{
        return 1;
    }
}
const vector<ll> dx{1,0,-1,0};
const vector<ll> dy{0,1,0,-1};
ll N,Q,K;
vector<vector<pair<ll,ll>>> G(100010);
vector<ll> d(100010,INF);
void dijkstra(){
    
    d[K] = 0;
    priority_queue<Pi,vector<Pi>,greater<Pi>> pque;
    pque.push(mp(0,K));
    while(!pque.empty()){
        Pi p = pque.top();
        pque.pop();
        ll pos=p.second,cost=p.first;
        if( cost > d[pos] )continue;
        rep(i,G[pos].size()){
            ll  to = G[pos][i].first;
            ll newcost = cost + G[pos][i].second;
            if(newcost < d[to]){
                d[to] = newcost;
                pque.push(mp(d[to],to));
            }
        }

    }

}

int main() {
    
    cin >>N;
    //vector<vector<Pi>>G(N);
    rep(i,N-1){
        ll a,b,c;
        cin>>a>>b>>c;
        a--;b--;
        G[a].pb(mp(b,c));
        G[b].pb(mp(a,c));
    }
    cin>>Q>>K;
    K--;
    dijkstra();
    rep(i,Q){
        ll x,y;
        cin>>x>>y;
        x--;y--;
        cout<<d[x]+d[y]<<endl;
    }
    
   


    return 0;
    

}