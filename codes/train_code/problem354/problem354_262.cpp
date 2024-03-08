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

    ll r,g,b,n;
    cin >> r >> g >> b >> n;
    int ans=0;
    rep(i,3001) {
        rep(j,3001) {
            ll s=n-(r*i+g*j);
            if (s>=0 && s%b==0) ++ans;
        }
    } 
    cout << ans << endl;
    
    return 0;   
}