#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using WGraph = vector<vector<pair<int, ll>>>;

template<class T>inline bool chmax(T &a, const T &b) { if (b > a) { a = b; return true; } return false; }
template<class T>inline bool chmin(T &a, const T &b) { if (b < a) { a = b; return true; } return false; }

constexpr int dx[4] = {-1, 0, 0, 1}, dy[4] = {0, -1, 1, 0};
constexpr int INF = 1e9;
constexpr int MOD = 1e9 + 7;
constexpr long long LINF = 1e18;
constexpr double EPS = 1e-10;
constexpr double PI = M_PI;

void solve() {
    int n, c, k;
    cin >> n >> c >> k;
    vector<int> t(n);
    for (int i=0; i<n; ++i) {
        cin >> t.at(i);
    }

    sort(t.begin(), t.end());
    int res = 0;
    for (int i=0; i<n; ++i) {
        int tmp = 0;
        while (tmp < c && i+tmp < n && t.at(i+tmp) <= t.at(i)+k) ++tmp;
        i += tmp-1;
        ++res;
    }
    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(20);

    solve();

    return 0;
}
