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
//#define int long long

signed main() {
    int n, m;
    cin >> n >> m;
    int a, b;
    priority_queue<pair<int, int>, vector<pair<int, int>>,
                   greater<pair<int, int>>>
        q;
    while (n--) {
        cin >> a >> b;
        q.push(make_pair(a, b));
    }
    int res = 0;
    priority_queue<int> candicate;
    for (int i = m; i >= 0; i--) {
        while (1) {
            if (q.empty())
                break;
            if (q.top().first + i <= m) {
                auto top = q.top();
                candicate.push(top.second);
                q.pop();
            }
            else
                break;
        }
        if (candicate.empty())
            continue;
        res += candicate.top();
        candicate.pop();
    }
    cout << res << endl;
}