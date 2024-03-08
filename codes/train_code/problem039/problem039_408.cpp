#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define P pair<int,int>
#define fi first
#define se second
#define rep(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define pb push_back
template<class T>void chmax(T& a, T b) { if (a < b)a = b; }
template<class T>void chmin(T& a, T b) { if (a > b)a = b; }
constexpr int INF = 1000000000000000000;
constexpr int mod = 1000000007;
int dx[] = { 0,1,0,-1 }, dy[] = { 1,0,-1,0 };
int kaijo[2000010];
struct edge { int to, cost; };
int gcd(int a, int b) {
    if (b == 0)return a;
    return gcd(b, a % b);
}
int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}
bool prime(int a) {
    if (a == 1)return false;
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0)return false;
    }
    return true;
}
void init_fact() {
    kaijo[0] = 1;
    for (int i = 1; i <= 2000000; i++) {
        kaijo[i] = kaijo[i - 1] * i;
        kaijo[i] %= mod;
    }
}
int modpow(int a, int b) {
    if (b == 0)return 1;
    if (b % 2)return modpow(a, b - 1) * a % mod;
    int memo = modpow(a, b / 2);
    return memo * memo % mod;
}
int comb(int a, int b) {
    if (!kaijo[0])init_fact();
    return kaijo[a] * modpow(kaijo[a - b], mod - 2) % mod * modpow(kaijo[b], mod - 2) % mod;
}
int inv(int x) {
    x = modpow(x, mod - 2);
    return x;
}
bool kosa(double ax, double ay, double bx, double by, double cx, double cy, double dx, double dy) {
    double ta = (cx - dx) * (ay - cy) + (cy - dy) * (cx - ax);
    double tb = (cx - dx) * (by - cy) + (cy - dy) * (cx - bx);
    double tc = (ax - bx) * (cy - ay) + (ay - by) * (ax - cx);
    double td = (ax - bx) * (dy - ay) + (ay - by) * (ax - dx);
    return tc * td < 0 && ta * tb < 0;
}
int n, K, a[310], dp[310][310][310];
signed main() {
    cin >> n >> K;
    for (int i = 1; i <= n; i++)cin >> a[i];
    rep(i, n + 1) {
        rep(j, K + 1) {
            rep(k, n + 1) {
                dp[i][j][k] = INF;
            }
        }
    }
    dp[0][0][0] = 0;
    rep(i, n) {
        rep(j, K + 1) {
            rep(k, i + 1) {
                chmin(dp[i + 1][j][i + 1], dp[i][j][k] + max(0ll, a[i + 1] - a[k]));
                if (j < K)chmin(dp[i + 1][j + 1][k], dp[i][j][k]);
            }
        }
    }
    int ans = INF;
    rep(i, K + 1) {
        rep(j, n + 1) {
            chmin(ans, dp[n][i][j]);
        }
    }
    cout << ans << endl;
    return 0;
}