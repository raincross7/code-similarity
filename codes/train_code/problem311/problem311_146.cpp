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
#define printa(x,m,n) for(ll i = (m); i <= n; i++){cout << (x[i]) << " ";} cout<<endl;

int main(){
    cin.tie(0); ios::sync_with_stdio(false);
    
    ll n; cin >> n;
    string s[n]; ll t[n]; zep(i, 0, n){cin >> s[i] >> t[i];}
    string x; cin >> x;

    ll ans = 0;
    bool sleep = false;
    zep(i, 0, n){
        if(sleep){
            ans += t[i];
        }
        if(s[i] == x){
            sleep = true;
        }
    }
    print(ans)
    return 0;
}