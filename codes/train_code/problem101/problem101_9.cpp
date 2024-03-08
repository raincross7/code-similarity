#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define repr(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define invrepr(i,a,b) for(int i=b-1;i>=a;i--)
#define invrep(i,n) invrepr(i,0,n)
#define repitr(itr,a) for(auto itr=a.begin();itr!=a.end();++itr)
#define P pair<int,int>
const int MOD=1e9+7;
const int INF=2e9;
const double PI=acos(-1);


int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<ll> a(n);
    ll ans=1000;
    rep(i,n) cin >> a[i];
    rep(i,n-1) {
        if (a[i]<a[i+1]) {
            ll j=ans/a[i];
            ans+=(a[i+1]-a[i])*j;
        }
    }
    cout << ans << endl;
    
    return 0;   
}