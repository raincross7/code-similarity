#include <bits/stdc++.h>

typedef long long ll;

#define rep(i, n) for (int i = 0; i < (ll)n; ++i)
#define INF 10e7
#define MOD 1000000000 + 7
#define MAX 51000
#define all(x) (x).begin(), (x).end()
#define MX(x) *max_element(all(x))
#define MN(x) *min_element(all(x))
using namespace std;

void solve(void)
{
    int x;
    cin >> x;
    int ans = 0;
    int i = 1;
    while (100 * i <= x)
    {
        if (100 * i <= x && x <= 105 * i)
            ans = 1;
        i++;
    }
    cout << ans << endl;
}

int main(void)
{
    solve();
}
