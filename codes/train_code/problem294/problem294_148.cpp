#include <algorithm>
#include <bitset>
#include <cmath>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)
#define repk(i, k, n) for (int i = k; i < n; i++)
#define MOD 1000000007
#define INF INT32_MAX / 2
#define PI 3.1415926

template <class T>
inline bool chmin(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
T GCD(T a, T b) {
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}
template <class T>
inline T LCM(T a, T b) {
    return (a * b) / GCD(a, b);
}

using namespace std;
//#inculude <bits/stdc++.h>
//#define int long long

signed main() {
    double a, b, x;
    cin >> a >> b >> x;
    if (x == a * a * b) {
        cout << 0 << endl;
        return 0;
    }
    double ans;
    if (x > b * a * a / 2) {
        ans = b - (x / (a * a));
        ans *= 2 / a;
    }
    else {
        ans = a * b * b;
        ans /= 2 * x;
    }
    ans = atan(ans);
    ans = (ans * 180) / PI;
    cout << fixed << setprecision(10);
    cout << ans << endl;
}