#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<(n);i++)
#define pll pair<ll,ll>
#define pq priority_queue
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define ios ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define lb(c,x) distance(c.begin(),lower_bound(all(c),x))
#define ub(c,x) distance(c.begin(),upper_bound(all(c),x))

using namespace std;

template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;}return 0;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;}return 0;}

const ll mod=1e9+7;

vector<pll> to[100100];

ll dist[100100];

void dfs(ll v,ll d,ll p=-1){
    dist[v]=d;
    for(auto x:to[v]){
        if(x.fi==p) continue;
        dfs(x.fi,x.se+d,v);
    }
    return ;
}

int main(){
    ll n;
    cin >> n;
    rep(i,n-1){
        ll a,b,c;
        cin >> a >> b >> c;
        a--; b--;
        to[a].push_back(make_pair(b,c));
        to[b].push_back(make_pair(a,c));
    }
    ll q,k;
    cin >> q >> k;
    k--;
    dfs(k,0LL);
    rep(i,q){
        ll x,y;
        cin >> x >> y;
        x--; y--;
        cout << dist[x]+dist[y] << endl;
    }
    return 0;
} 
