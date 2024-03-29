#include <iostream>
#include <array>
#include <algorithm>
#include <vector>
#include <bitset>
#include <set>
#include <unordered_set>
#include <cmath>
#include <complex>
#include <deque>
#include <iterator>
#include <numeric>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <limits>
#include <iomanip>
#include <functional>
#include <cassert>
using namespace std;

using ll=long long;
template<class T> using V = vector<T>;
template<class T, class U> using P = pair<T, U>;
using vll = V<ll>;
using vvll = V<vll>;
#define rep(i, k, n) for (ll i=k; i<(ll)n; ++i)
#define REP(i, n) rep(i, 0, n)
#define ALL(v) v.begin(),v.end()
template < class T > inline bool chmax(T& a, T b) {if (a < b) { a=b; return true; } return false; }
template < class T > inline bool chmin(T& a, T b) {if (a > b) { a=b; return true; } return false; }
#define DEBUG_VLL(vec) REP(sz, vec.size()) std::cerr<<vec[sz]<<(sz==vec.size()-1?'\n':' ');

const long long MOD = 1000000007;
const long long HIGHINF = (long long)1e18;
const int INF = (int)1e9;

ll powmod(ll m, ll p) {
    if (p == 0) return 1;
    ll tmp = powmod(m, p / 2);
    if (p & 1) return (tmp * tmp % MOD) * m % MOD;
    else return tmp * tmp % MOD;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n, k; cin >> n >> k;
    vll memo(k + 1, 0);
    for (ll i = k; i >= 1; i--) {
        ll div = k / i;
        memo[i] = powmod(div, n);
        for (ll j = i + i; j <= k; j += i) {
            ((memo[i] -= memo[j]) += MOD) %= MOD;
        }
    }

    ll ans = 0;
    for (ll i = 1; i <= k; i++) {
        (ans += i * memo[i] % MOD) %= MOD;
    }
    cout << ans << '\n';
    return 0;
}
