#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

#define FOR(i, n, m) for (ll(i) = (m); (i) < (n); ++(i))
#define REP(i, n) FOR(i, n, 0)
#define OF64 std::setprecision(10)

const ll MOD = 1000000007;
const ll INF = (ll)1e15;

int main()
{
    ll N, H, W;
    cin >> N >> H >> W;
    ll ans = 0;
    REP(i, N)
    {
        ll a, b;
        cin >> a >> b;
        if (a >= H && b >= W)
            ans++;
    }
    cout << ans << endl;
    return 0;
}