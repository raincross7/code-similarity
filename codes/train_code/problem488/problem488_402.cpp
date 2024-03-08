#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < (n); i++)
#define RREP(i, s, n) for (int i = s; i < (n); i++)
#define ALL(a) a.begin(), a.end()
#define RALL(a) a.rbegin(), a.rend()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;
using ll = long long;
typedef pair<int, int> pint;
typedef pair<ll, ll> pll;
const ll MOD = 1000000007;
const ll INF = MOD * MOD;
const int inf = (1<<29);

int main() {

    ll n, k;
    cin >> n >> k;
    
    ll ans = 0;
    for(ll i = k; i <=n+1 ; i++) {
        ll low = i * (i-1) / 2;
        ll high = (n*2 - i+1) * i / 2;
        ll add = high - low + 1;
        ans = (ans + add) % MOD;
    }

    cout << ans << endl;
    return 0;
}