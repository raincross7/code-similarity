#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define ll long long
#define P pair<ll,ll>
#define all(v) (v).begin(),(v).end()

const ll mod = 1e9+7;
const ll INF = 1e18;
const double pi = acos(-1.0);

int main(void)
{
    ll h,w; cin>>h>>w;
    vector<string> c(h);
    rep(i,h) cin>>c[i];
    rep(i,h)rep(j,2) cout<<c[i]<<endl;
    return 0;
}