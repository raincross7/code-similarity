#include <algorithm>
#include <bitset>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <cctype>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <cassert>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
#include <limits>
#include <map>
#include <memory>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;
using ll = long long; 
using ld = long double;
#define endl "\n"
//#define int long long
#define ALL(x) sort(x.begin(),x.end())
#define RALL(x) sort(x.rbegin(),x.end());
#define _CRT_SECURE_NO_WARNINGS
#define rep(i, n) for (int i = 0; i < n; i++)
const int MOD = 1e9 + 7;
const ll INF = 1LL << 60;
const int inf = 1 << 25;
constexpr long double pi = 3.141592653589793238462643383279;
int dx[] = { 1,0,-1,0 };
int dy[] = { 0,1,0,-1 };
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
ll fact_mod(ll n, ll mod) {
    ll f = 1; for (int i = 2; i <= n; i++) f = f * (i % mod) % mod;
    return f;
}
ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    return a * b / gcd(a, b);
}
ll keta(ll n) {
    if (n == 0) return 1;
    ll count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}
ll ketasum(ll n) {
    ll sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
ll mch(ll n) {
    if (n == 1) return 1;
    else return n * mch(n - 1);
}
ll pow_mod(ll x, ll n, ll mod) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = (res * x) % mod; //ビット演算(最下位ビットが1のとき)
        x = (x * x) % mod;
        n >>= 1; //右シフト(n = n >> 1)
    }
    return res;
}
ll inv_mod(ll a, ll mod) {
    ll b = mod, u = 1, v = 0;
    while (b) {
        ll t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= mod;
    if (u < 0) u += mod;
    return u;
}
bool is_prime(const unsigned n) {
    switch (n) {
    case 0: // fall-through
    case 1: return false;
    case 2: // fall-through
    case 3: return true;
    } // n > 3 が保証された
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (unsigned i = 5; i * i <= n; i += 6) {
        if (n % i == 0) return false; // (6の倍数)-1
        if (n % (i + 2) == 0) return false; // (6の倍数)+1
    }
    return true;
}
//関数とか

//宣言とか
/*signed*/int main(void) {
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, n) cin >> v[i];
    map<int, int> odd;
    map<int, int> even;
    int odd1 = 0;
    int o1 = 0;
    int odd2 = 0;
    int o2 = 0;
    int even1 = 0;
    int e1 = 0;
    int even2 = 0;
    int e2 = 0;
    rep(i, n) {
        if (i % 2 == 0) {
            odd[v[i]]++;
        }
        else {
            even[v[i]]++;
        }
    }
    for (auto a : odd) {
        if (a.second > odd1) {
            odd2 = odd1;
            o2 = o1;
            odd1 = a.second;
            o1 = a.first;
        }
        else if (a.second > odd2)
            odd2 = a.second;
    }
    for (auto a : even) {
        if (a.second > even1) {
            even2 = even1;
            e2 = e1;
            even1 = a.second;
            e1 = a.first;
        }
        else if (a.second > even2)
            even2 = a.second;
    }
    if (e1 != o1) {
        cout << n - odd1 - even1 << endl;
    }
    else {
        cout << min(n - even1 - odd2, n - even2 - odd1) << endl;
    }
    return 0;
}