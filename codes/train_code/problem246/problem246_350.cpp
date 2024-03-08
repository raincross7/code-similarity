#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0 ; i<(n) ; i++)
#define repr(i,n) for(int i=(n) ; i>=0 ; i--)
#define ALL(x) (x).begin(),(x).end()

using ll = long long;
using ull = unsigned long long;
 
const ll INF = 1LL<<60;
const int MINF = 1e9;
const int MOD = 1e9+7;

using vi = vector<int>;
using vii = vector<vi>;

template<typename T> bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<typename T> bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

template<typename T>
T GCD(T a,T b){ return b ? GCD(b,a%b) : a ;}
template<typename T>
T LCM(T a,T b){ return a*b / GCD(a,b) ;}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n;cin >> n;
    ll t;cin >> t;
    vector<ll> times(n);
    rep(i,n)cin >> times[i];

    adjacent_difference(ALL(times),times.begin());
    ll ans = 0;
    rep(i,n){
        ans += min(times[i],t);
    }
    cout << ans+t << endl;
    return 0;
}