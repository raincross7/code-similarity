/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author
 */

#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
using namespace std;

static int MOD = 1e9 + 7;

class ECommonSubsequence {
public:
    void solve(std::istream &in, std::ostream &out) {
        int n, m;
        in >> n >> m;
        vector<int> u(n), v(m);
        forn(i, n)in >> u[i];
        forn(i, m)in >> v[i];

        vector<vector<int> > dp(n + 1, vector<int>(m + 1, 0));

        forn(i, n + 1)dp[i][0] = 1;
        forn(i, m + 1)dp[0][i] = 1;

        fore(i, 1, n)fore(j, 1, m) {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
                if (u[i - 1] != v[j - 1])
                    dp[i][j] = (0LL + dp[i][j] - dp[i - 1][j - 1] + MOD) % MOD;
            }

        out << dp[n][m] << endl;
    }
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ECommonSubsequence solver;
    std::istream &in(std::cin);
    std::ostream &out(std::cout);
    solver.solve(in, out);
    return 0;
}