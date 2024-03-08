#include <bits/stdc++.h>
#include <boost/format.hpp>
using namespace std;
#define int long long
#define REP(i, n) FOR(i, 0, n)
#define REPR(i, n) for (int i = n - 1; i >= 0; i--)
#define FOR(i, s, n) for (int i = (s), i##_len = (n); i < i##_len; ++i)
#define ALL(obj) (obj).begin(), (obj).end()
#define ALLR(obj) (obj).rbegin(), (obj).rend()
#define DIV(a, b) ((a - 1) / b + 1)

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, ans = 0;
    string s;
    cin >> n >> s;
    REP(i, 10) {
        auto pos1 = s.find(to_string(i));
        if (pos1 == string::npos) {
            continue;
        }
        REP(j, 10) {
            auto pos2 = s.find(to_string(j), pos1 + 1);
            if (pos2 == string::npos) {
                continue;
            }
            REP(k, 10) {
                auto pos3 = s.find(to_string(k), pos2 + 1);
                if (pos3 != string::npos) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}
