#include <algorithm>
#include <functional>
#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#include <unordered_set>
#include <queue>
#include <numeric>
#include <bitset>
#include <cmath>

using namespace std;
using ll = long long;
using ull = unsigned long long;
// const ll mod =  998244353 ;
const ll mod =  1000000007 ;
const ll inf = 1e18;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

#define REP(i, n) for (ll i = 0; i < (n); ++i)
#define REP_FROM(i, j, n) for (ll i = (j); i < (n); ++i)
#define all(x) (x).begin(),(x).end()
#define sz(x) int(x.size())

template<typename T> void print_vec(vector<T> a) {int n = a.size();REP(i, n) {cout >> a[i]; if(i!=n-1) cout << " "; else cout << endl;}}
ll power(ll base, ll exponent){ if(exponent % 2){ return power(base, exponent - 1) * base % mod; }else if(exponent){ ll root_ans = power(base, exponent / 2); return root_ans * root_ans % mod; }else{ return 1; }}
ll inverse(ll x){ return power(x, mod - 2);}
ll gcd(ll a, ll b) {if(a < b) gcd(b, a);ll r;while(r=a%b) {a=b;b=r;}return b;}
template<typename T> ll sum(T begin, T end) {return accumulate(begin, end, 0ll);}
struct combination{ vector<ll> fact, inv; combination(int sz) : fact(sz + 1), inv(sz + 1){ fact[0] = 1; for(int i = 1; i <= sz; i++){ fact[i] = fact[i - 1] * i % mod; } inv[sz] = power(fact[sz], mod - 2); for(int i = sz - 1; i >= 0; i--){ inv[i] = inv[i + 1] * (i + 1) % mod; } } ll C(int p, int q) const{ if(q < 0 || p < q) return 0; return (fact[p] * inv[q] % mod * inv[p - q] % mod); } };

using Pair = pair<ll, ll>;

const char C[] = {'A', 'B', 'X', 'Y'};

signed main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<string> s(n);
    REP(i, n) cin >> s[i];
    ll ans = 0;
    REP(x, n) {
        bool ok = true;
        REP(i, n) {
            REP(j, n) {
                if(s[i][j] != s[(j+x) % n][(i-x+n)%n]) {
                    ok = false;
                }
            }
        }
        if(ok) ans += n;
    }
    cout << ans << endl;
    return 0;
}
