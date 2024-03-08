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
    ll A, B, K;
    cin >> A >> B >> K;
    REP(i, K)
    {
        if (i % 2 == 0)
        {
            A /= 2;
            B += A;
        }
        else
        {
            B /= 2;
            A += B;
        }
    }
    cout << A << " " << B << endl;
    return 0;
}