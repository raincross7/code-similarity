#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <queue>
#include <bitset>
#include <stack>
#include <functional>

#ifdef LOCAL
    #define eprintf(...) fprintf(stderr, __VA_ARGS__)
#else
    #define eprintf(...) 42
#endif

#define rep_(i, a_, b_, a, b, ...) for (int i = (a), i##_len = (b); i < i##_len; ++i)
#define rep(i, ...) rep_(i, __VA_ARGS__, __VA_ARGS__, 0, __VA_ARGS__)
#define reprev_(i, a_, b_, a, b, ...) for (int i = (b-1), i##_min = (a); i >= i##_min; --i)
#define reprev(i, ...) reprev_(i, __VA_ARGS__, __VA_ARGS__, 0, __VA_ARGS__)
#define all(x) (x).begin(), (x).end()
template <class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T &a, const T &b) { if (b < a) { a = b; return 1; } return 0; }
template <class T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair <int,int> P;
typedef long double ld;

int main (void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s; cin >> s;
    int n = (int)s.length();
    vector<vector<ll> > dp(n + 1, vector<ll>(2));
    ll MOD = 1000000007;
    dp[0][0] = 1;
    rep (i, n) {
        if (s[i] == '1') {
            dp[i + 1][0] = (dp[i][0] * 2) % MOD;
            dp[i + 1][1] = (dp[i][1] * 3 + dp[i][0]) % MOD;
        } else {
            dp[i + 1][0] = dp[i][0];
            dp[i + 1][1] = (dp[i][1] * 3) % MOD;
        }
    }
    rep (i, 2) {
        rep (j, n + 1) eprintf("%lld ", dp[j][i]); eprintf("\n");
    }
    cout << (dp[n][0] + dp[n][1]) % MOD << "\n";
    return 0;
}