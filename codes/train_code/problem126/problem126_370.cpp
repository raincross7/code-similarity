#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vint;
typedef vector< vector<ll> > vvint;

#define rep(i,n) for(ll i=0;i<n;i++)
#define repf(i,f,n) for(ll i=f;i<n;i++)
#define repr(i,n) for(ll i=n-1;i>=0;i--)
#define mp make_pair
#define mt make_tuple
#define ALL(obj) (obj).begin(), (obj).end()
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int dy[]={0, 0, 1, -1, 1, -1, -1, 1};
int dx[]={1, -1, 0, 0, 1, 1, -1, -1};


int main() {
    cout<<fixed<<setprecision(10);

    ll w,h; cin>>w>>h;
    using T = tuple<ll,ll,ll>;
    vector<T> vec;

    rep(i,w){
        ll p; cin>>p;
        vec.emplace_back(p, i, 0);
    }
    rep(j,h){
        ll q; cin>>q;
        vec.emplace_back(q, j, 1);
    }

    sort(ALL(vec));

    ll ans = 0;
    vint cnt(2,0);
    vint num = {w+1, h+1};

    for(auto e:vec){
        ll cost, cur, t;
        tie(cost, cur, t) = e;
        ans += cost*(num[t^1] - cnt[t^1]);
        cnt[t]++;
    }
    cout<<ans<<endl;



    return 0;

}