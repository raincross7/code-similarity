#include <algorithm>
#include <bits/stdc++.h>
#include <bitset>
#include <cassert>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <math.h>
#include <memory>
#include <queue>
#include <set>
#include <stack>
#include <utility>
#include <vector>
using namespace std;
#define REP(i, n) for (int64_t i = 0; i < (int64_t)n; i++)
#define REP_FOR(i, a, b) for (int64_t i = (int64_t)a; i < (int64_t)b; i++)
#define REP_REV(i, a, b) for (int64_t i = (int64_t)a; i > (int64_t)b; i--)
#define FORALL(v) (v).begin(), (v).end()
#define mp(a, b) make_pair(a, b)
#define eb(x) emplace_back(x)
#define F first
#define S second
typedef long long ll;
typedef long double ld;
typedef pair<int64_t, int64_t> pii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pdd;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<int64_t> vii;
typedef vector<vii> vvii;
const ll mod = 1e9 + 7;
const int64_t infi = 1147483600;
const ll infl = 4e18 + 5;
const char EOL = '\n';
//cout << fixed << setprecision(17) << res << endl;
const ll MOD = 998244353;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n+1,0);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i+1];
        --a[i+1];
    }
    for (ll i = 0; i < n; ++i) {
        a[i+1] += a[i];
        a[i+1] %= k;
    }
    ll res = 0;
    map<ll, ll> counts;
    for (ll i = 0 ; i < n+1 ; ++i){
        if (i >= k)--counts[a[i-k]];
        res += counts[a[i]];
        ++counts[a[i]];
    }
    cout << res << endl;
}
