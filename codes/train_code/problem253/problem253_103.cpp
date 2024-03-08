#include <algorithm>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
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
#define INF 1e9
#define PIE 3.14159265358979323

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
#define int long long

signed main() {
    int n, m, X, Y;
    cin >> n >> m >> X >> Y;
    vector<int> x(n);
    vector<int> y(m);
    rep(i, n) cin >> x[i];
    rep(i, m) cin >> y[i];
    repk(i, X + 1, Y + 1) {
        bool flag = true;
        rep(j, n) {
            if (x[j] >= i)
                flag = false;
        }
        rep(j, m) {
            if (y[j] < i)
                flag = false;
        }
        if (flag) {
            cout << "No War" << endl;
            return 0;
        }
    }
    cout << "War" << endl;
}