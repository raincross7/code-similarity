#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <cctype>
#include <functional>
#include <ctime>
#include <fstream>
#include <cmath>
#include <limits>
#include <chrono>
#include <numeric>
#include <type_traits>
#include <iomanip>
#include <float.h>
#include <math.h>
#include <cassert>
#pragma warning (disable: 4996)
using namespace std;

using ll = long long;
unsigned euclidean_gcd(unsigned a, unsigned b) {
    if (a < b) return euclidean_gcd(b, a);
    unsigned r;
    while ((r = a % b)) {
        a = b;
        b = r;
    }
    return b;
}

ll ll_gcd(ll a, ll b) {
    if (a < b) return ll_gcd(b, a);
    ll r;
    while ((r = a % b)) {
        a = b;
        b = r;
    }
    return b;
}

struct UnionFind {
    vector <ll> par;
    vector <ll> siz;
    UnionFind(ll sz_) : par(sz_), siz(sz_, 1LL) {
        for (ll i = 0; i < sz_; ++i) par[i] = i;
    }
    void init(ll sz_) {
        par.resize(sz_);
        siz.assign(sz_, 1LL);
        for (ll i = 0; i < sz_; ++i) par[i] = i;
    }
    ll root(ll x) {
        while (par[x] != x) {
            x = par[x] = par[par[x]];
        }
        return x;
    }
    bool merge(ll x, ll y) {
        x = root(x);
        y = root(y);
        if (x == y) return false;
        if (siz[x] < siz[y]) swap(x, y);
        siz[x] += siz[y];
        par[y] = x;
        return true;
    }

    bool issame(ll x, ll y) {
        return root(x) == root(y);
    }

    ll size(ll x) {
        return siz[root(x)];
    }
};

long long modpow(long long a, long long n, long long mod) {
    if (n < 0)return 0;
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

long long modinv(long long a, long long mod) {
    return modpow(a, mod - 2, mod);
}

ll merge_cnt(vector<ll>& a) {
    int n = a.size();
    if (n <= 1) { return 0; }

    ll cnt = 0;
    vector<ll> b(a.begin(), a.begin() + n / 2);
    vector<ll> c(a.begin() + n / 2, a.end());

    cnt += merge_cnt(b);
    cnt += merge_cnt(c);

    int ai = 0, bi = 0, ci = 0;
    while (ai < n) {
        if (bi < b.size() && (ci == c.size() || b[bi] <= c[ci])) {
            a[ai++] = b[bi++];
        }
        else {
            cnt += n / 2 - bi;
            a[ai++] = c[ci++];
        }
    }
    return cnt;
}

int main() {
    ll n;
    cin >> n;
    ll m;
    cin >> m;
    vector<vector<ll>> z(n,vector<ll>(3));
    for (int i = 0; i < n; i++) {
        cin >> z[i][0] >> z[i][1] >> z[i][2];
    }
    vector<vector<ll>> p(8, vector<ll>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < 3; k++) {
                p[j][i] += z[i][k];
                if (j & (1<<k))p[j][i] += -2 * z[i][k];
            }
        }
    }
    ll ans = 0;
    for (int i = 0; i < 8; i++) {
        ll zans = 0;
        sort(p[i].begin(), p[i].end());
        for (int j = 0; j < m; j++) {
            zans += p[i][n - j - 1];
        }
        ans = max(ans, zans);
    }
    cout << ans << endl;
}