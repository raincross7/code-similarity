#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; ++i)
#define REPR(i, n) for (int i = n - 1; i >= 0; --i)
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define FORR(i, a, b) for (int i = b - 1; i >= a; --i)
#define SORT(v) sort(v.begin(), v.end())
#define SORTR(v) sort(v.rbegin(), v.rend())
#define REV(v) reverse(v.begin(), v.end())
#define ITER(itr, v) for (auto itr = v.begin(); itr != v.end(); ++itr)
#define LB(v, x) (lower_bound(v.begin(), v.end(), x) - v.begin())
#define UB(v, x) (upper_bound(v.begin(), v.end(), x) - v.begin())
#define SZ(v) (int)v.size()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<ll> a(N), b(N);
    ll sum_a = 0, sum_b = 0;
    REP(i, N) {
        cin >> a[i];
        sum_a += a[i];
    }
    REP(i, N) {
        cin >> b[i];
        sum_b += b[i];
    }
    ll cnt = 0;
    REP(i, N) {
        if (a[i] < b[i]) { cnt += (b[i] - a[i] + 1) / 2; }
    }
    cout << (cnt <= sum_b - sum_a ? "Yes" : "No") << endl;

    return 0;
}