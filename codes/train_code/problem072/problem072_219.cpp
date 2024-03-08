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
    ll N;
    cin >> N;
    ll sum = 0;
    FOR(i, N + 1, 1)
    {
        sum += i;
        if (sum >= N)
        {
            FOR(j, i + 1, 1)
            {
                if (j == sum - N)
                    continue;
                cout << j << endl;
            }
            break;
        }
    }
    return 0;
}