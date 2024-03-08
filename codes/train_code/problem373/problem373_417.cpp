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

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n, k; cin >> n >> k;
    V< P<ll, ll> > dt(n);
    for (ll i = 0; i < n; i++) cin >> dt[i].second >> dt[i].first;
    sort(ALL(dt));
    reverse(ALL(dt));
    ll ans = 0, tmp = 0, ct = 0;
    map<ll, ll> ttt;

    for (ll i = 0; i < k; i++) {
        tmp += dt[i].first;
        ttt[dt[i].second]++;
        if (ttt[dt[i].second] == 1) ct++;
    }
    ans = tmp + ct * ct;

    priority_queue< P<ll, ll> > pq;
    for (ll i = 0; i < k; i++) {
        if (ttt[dt[i].second] >= 2) pq.push(make_pair(-dt[i].first, dt[i].second));
    }

    for (ll i = k; i < n; i++) {
        if (pq.empty()) break;
        if (ttt[dt[i].second] == 0) {
            P<ll, ll> q = pq.top(); pq.pop();
            while (!pq.empty() && ttt[q.second] == 1) {
                q = pq.top(); pq.pop();
            }
            if (ttt[q.second] == 1) {
                break;
            }

            ttt[q.second]--;
            tmp += q.first;
            tmp += dt[i].first;
            ttt[dt[i].second]++;
            ct++;
            chmax(ans, tmp + ct * ct);
        }
    }
    cout << ans << '\n';
    return 0;
}
