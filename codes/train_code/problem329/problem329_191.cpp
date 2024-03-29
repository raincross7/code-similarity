#include <bits/stdc++.h>

using namespace std;

#define INF 1001000100010001000
#define MOD 1000000007
#define EPS 1e-10
#define int long long
#define rep(i, N) for (int i = 0; i < N; i++)
#define Rep(i, N) for (int i = 1; i < N; i++)
#define For(i, a, b) for (int i = (a); i < (b); i++)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define i_i pair<int, int>
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define vp vector< i_i >
#define all(a) (a).begin(), (a).end()
#define Int(x) int x; cin >> x;
#define int2(x, y) Int(x); Int(y);
#define int3(x, y, z) Int(x); int2(y, z);
#define fir first
#define sec second
#define ffir first.first
#define fsec first.second
#define sfir second.first
#define ssec second.second
#define Decimal fixed << setprecision(10)

//int dxy[5] = {0, 1, 0, -1, 0};
// cmd

signed main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int2(n, k);
    vector<int> data(0);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        Int(tmp);
        if (tmp < k) {
            data.pb(tmp);
            sum += tmp;
        }
    }
    if (sum < k) {
        cout << data.size() << endl;
        return 0;
    }

    sort(all(data)); reverse(all(data));

    vb dp(k, false);
    dp[0] = true;
    rep(i, data.size()-1) {
        for (int j = dp.size()-1; j >= 0; j--) {
            if (dp[j] && j + data[i] < dp.size()) {
                dp[j + data[i]] = true;
            }
        }
    }
    bool ok = false;
    for (int i = k - data.back(); i < k; i++) {
        ok |= dp[i];
    }
    if (ok) {
        cout << 0 << endl;
        return 0;
    }

    int l = 0, r = data.size();
    while (r - l > 1) {
        int mid = (r + l) / 2;
        dp = vb(k, false);
        dp[0] = true;
        rep(i, data.size()) {
            if (i == mid) continue;
            for (int j = dp.size()-1; j >= 0; j--) {
                if (dp[j] && j + data[i] < dp.size()) {
                    dp[j + data[i]] = true;
                }
            }
        }
        bool ok = false;
        for (int i = k - data[mid]; i < k; i++) {
            ok |= dp[i];
        }
        if (ok) {
            l = mid;
        } else {
            r = mid;
        }
    }

    cout << data.size() - l - 1 << endl;

    return 0;
}

