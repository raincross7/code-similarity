#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define rep(i,n) for(int i = 0, i_len = n; (i) < (i_len); ++(i))
#define repp(i,n) for(int i = 1, i_len = n; (i) <= (i_len); ++(i))
#define per(i,n) for(int i = n-1; (i) >= 0; --(i))
#define perr(i,n) for(int i = n; (i) > 0; --(i))
#define sz(x) ((int)(x).size())
#define popcnt __builtin_popcount
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).begin(),(v).end(),greater<>()
#define debug(x) cerr << #x << ':' << x << '\n'
#define Pi 3.1415926535
#define MOD 1000000007
using namespace std;
using ll = long long;
using pint = pair<int,int>;
using itn = int;
using vint = vector<int>;
template<class T,class S> inline bool chmax(T& a, S b){if(a<b){a = b; return true;} return false;}
template<class T,class S> inline bool chmin(T& a, S b){if(a>b){a = b; return true;} return false;}
template<class T> T gcd(T a, T b){return b?gcd(b,a%b):a;}
template<class T> T lcm(T a, T b){return a*b/gcd(a,b);}
void yes(){cout << "Yes" << '\n';}
void no(){cout << "No" << '\n';}

int solve(){
    int n; cin >> n;
    vector<int> a(n); rep(i,n) cin >> a[i];
    int max = a[0];
    ll ans = 0;
    for(int i = 1; i < n; ++i){
        if(max > a[i]){
            ans += max - a[i];
        }
        else{
            chmax(max, a[i]);
        }
    }

    cout << ans << endl;
    return 0;
}

int main(){
    cin.tie(0);
    cout << fixed << setprecision(10);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}
