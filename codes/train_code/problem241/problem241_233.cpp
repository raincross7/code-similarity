#include <bits/stdc++.h>
using namespace std;

#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define MIN(a) *min_element(all(a))
#define MAX(a) *max_element(all(a))
#define SUM(a) accumulate(all(a), 0LL)
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define RREP(i, n) for(int (i)=(n)-1; (i)>=0; (i)--)
#define FOR(i, m, n) for(int (i)=(m); (i)<(n); i++)
#define FORR(i, m, n) for(int (i)=(n)-1; (i)>=(m); i--)
#define debug(x) cerr << #x << " = " << x << endl
//#define int long long

typedef long long ll;
//ll const MOD = 998244353;
ll const MOD = 1e9+7;
int const inf = 1e9;
ll const INF = 1e18;

inline void ios_(){cin.tie(0); ios::sync_with_stdio(false);}
template<typename T> int size(const T& a){return (int)a.size();}
template<typename T> T Div(T a, T b){return (a + b - 1) / b;}
template<typename T> bool chmin(T& a, const T& b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, const T& b){if(a < b){a = b; return true;} return false;}



signed main(){
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(auto& i : a) cin >> i;
    for(auto& i : b) cin >> i;

    vector<pair<ll,ll>> ha(n), hb(n);
    
    REP(i, n){
        if(i == 0){
            ha[i].first = ha[i].second = a[i];
        }else{
            if(a[i] > a[i-1]){
                ha[i].first = ha[i].second = a[i];
            }else{
                ha[i].first = 1;
                ha[i].second = a[i];
            }
        }
    }

    RREP(i, n){
        if(i == n-1){
            hb[i].first = hb[i].second = b[i];
        }else{
            if(b[i] > b[i+1]){
                hb[i].first = hb[i].second = b[i];
            }else{
                hb[i].first = 1;
                hb[i].second = b[i];
            }
        }
    }

    ll ans = 1;
    REP(i, n){
        ll d = min(ha[i].second, hb[i].second) - max(ha[i].first, hb[i].first) + 1;
        if(d < 0) ans = 0;
        ans *= d;
        ans %= MOD;
    }

    cout << ans << endl;

    return 0;
}
