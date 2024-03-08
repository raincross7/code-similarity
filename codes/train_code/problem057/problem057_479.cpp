#include <bits/stdc++.h>
using namespace std;
struct Fast {
    Fast() {
        cin.tie(0);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(20);
    }
} fast;

long long mod = 1000000007;

long long div(long long a, long long b, long long c) { return b / c - (a - 1) / c; }

void print_binary(long long a) {
    for (int i = 31; i >= 0; i--) {
        cout << (a >> i & 1);
    }
    cout << endl;
}
long long modpow(long long m, long long n) {
    if (n == 0) return 1;
    if (n % 2 == 0) {
        long long t = modpow(m, n / 2);
        return t * t;
    } else {
        return modpow(m, n - 1) * m;
    }
}
void yes() {
    cout << "Yes" << endl;
    exit(0);
}
void no() {
    cout << "No" << endl;
    exit(0);
}
#define REP(i, n) for (long long i = 0; i < (n); i++)
vector<int> h, memo;

// int dp(int n) {
//     if (memo[n] != -1) {
//         return memo[n];
//     }
//     if (n == 0) {
//         return 0;
//     }
//     if (n == 1) {
//         return abs(h[1] - h[0]);
//     }
//     memo[n] = min(dp(n - 1) + abs(h[n] - h[n - 1]), dp(n - 2) + abs(h[n] - h[n - 2]));
//     return min(dp(n - 1) + abs(h[n] - h[n - 1]), dp(n - 2) + abs(h[n] - h[n - 2]));
// }

signed main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i = i + 2) {
        cout << s[i];
    }
}