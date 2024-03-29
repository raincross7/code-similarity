#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> lpair;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define rep(i,m,n) for(ll i = (m); i < (n); i++)
#define rrep(i,m,n) for(ll i = (m); i >= (n); i--)
#define print(x) cout << (x) << endl;
#define print2(x,y) cout << (x) << " " << (y) << endl;
#define printa(x,n) for(ll i = 0; i < n; i++){ cout << (x[i]) << " ";} cout<<endl;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll N;
    ll A[200010], B[200010];
    cin >> N;
    rep(i,0,N) cin >> A[i] >> B[i];
    ll ans = INF;
    ll sum = 0;
    rep(i,0,N){
        sum += A[i];
        if(A[i] > B[i]){
            ans = min(ans, B[i]);
        }
    }
    if(ans == INF){
        print(0);
    }else{
        print(sum - ans);
    }

    
}