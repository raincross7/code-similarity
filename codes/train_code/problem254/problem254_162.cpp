#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) REP(i,0,n)
#define REP(i,s,e) for(int i=(s); i<(int)(e); i++)
#define repr(i, n) REPR(i, n, 0)
#define REPR(i, s, e) for(int i=(int)(s-1); i>=(int)(e); i--)
#define pb push_back
#define all(r) r.begin(),r.end()
#define rall(r) r.rbegin(),r.rend()
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const double EPS = 1e-8;

template<typename T> T chmax(T& a, const T& b){return a = (a > b ? a : b);}
template<typename T> T chmin(T& a, const T& b){return a = (a < b ? a : b);}

int main(){
    int n, k;
    cin >> n >> k;
    vl a(n);
    rep(i, n) cin >> a[i];
    ll ans = 1e18;
    rep(mask, 1 << n) if(__builtin_popcount(mask) >= k) {
        ll tmp = 0;
        ll pre = 0;
        rep(i, n) {
            if(mask&(1<<i)) {
                if(pre >= a[i]) {
                    tmp += pre - a[i]+1;
                    pre++;
                }
            }
            chmax(pre, a[i]);
        }
        // cout << bitset<8>(mask) << " " << tmp << " " << pre<< endl;
        chmin(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}