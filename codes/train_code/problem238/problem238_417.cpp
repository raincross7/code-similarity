#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

int const NMAX = 2e5 + 11;

int n, ans[NMAX];
vi  g[NMAX];

void dfs(int u, int p = -1)
{
    for (auto v : g[u])
    {
        if (v == p)
            continue;
        ans[v] += ans[u];
        dfs(v, u);
    }
}

int main(void)
{
    int q, u, v, p, x;
    cin >> n >> q;

    for (int i = 0; i < n - 1; ++i)
    {
        cin >> u >> v, u--, v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    while (q--)
    {
        cin >> p >> x, p--;
        ans[p] += x;
    }
    dfs(0);
    for_each(ans, ans + n, [](int x) { cout << x << " "; }), cout << endl;

    return 0;
}
