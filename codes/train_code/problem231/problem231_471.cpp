#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll MOD = 1e9+7;
const ll INF = 1e18;
#define rep(i,m,n) for(ll i = (m); i <= (n); i++)
#define zep(i,m,n) for(ll i = (m); i < (n); i++)
#define rrep(i,m,n) for(ll i = (m); i >= (n); i--)
#define print(x) cout << (x) << endl;
#define printa(x,m,n) for(int i = (m); i <= n; i++){cout << (x[i]) << " ";} cout<<endl;

int main(){
    cin.tie(0); ios::sync_with_stdio(false);
    
    ll a, b, c, k; cin >> a >> b >> c >> k;
    
    ll cnt = 0;
    while(a >= b){
        b *= 2;
        cnt++;
    }

    while(b >= c){
        c *= 2;
        cnt++;
    }

    print((cnt <= k)? "Yes" : "No")
    
    return 0;
}