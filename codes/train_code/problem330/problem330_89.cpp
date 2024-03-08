#include <bits/stdc++.h>
#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for (int i = (a); i < (b); ++i)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep, )(__VA_ARGS__)
#define ALL(x) x.begin(), x.end()
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using lld = long double;
using VI = vector<int>;
using VVI = vector<VI>;
using VL = vector<ll>;
using VVL = vector<VL>;
using PII = pair<int, int>;
random_device rnd;
mt19937 mt(rnd());

const int IINF = 1 << 28;
const ll INF = 1ll << 60;
const ll MOD = 1e9 + 7;
int main()
{
    int n, m;
    cin >> n >> m;
    VVI cost(n, VI(n, IINF));
    vector<pair<PII, int>> g;
    rep(i, m)
    {
        int a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        cost[a][b] = c;
        cost[b][a] = c;

        g.push_back({{a, b}, c});
    }

    rep(k, n) rep(i, n) rep(j, n)
    {
        chmin(cost[i][j], cost[i][k] + cost[k][j]);
    }
    int ans = 0;
    rep(i, m)
    {
        int a = g[i].first.first;
        int b = g[i].first.second;
        int c = g[i].second;
        if (c > cost[a][b])
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}