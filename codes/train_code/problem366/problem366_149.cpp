#include <bits/stdc++.h>

#define ed cout << "\n";
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define ffor(i, a, b) for (ll i = (ll)(a); i < (ll)(b); ++i)
#define rep(i, n) ffor(i, 0, n)
#define All(obj) (obj).begin(), (obj).end()
#define INF ((ll)1e9 + 7)
#define c(a) cout << a << "\n";
using namespace std;
const int N = 100005;

int main()
{
    speed;
    cout << fixed << setprecision(6);
    /*start*/
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    ll res = 0;
    if (a < k)
    {
        res += a * 1;
        if (a + b + c <= k)
            res -= c * 1;
        else
        {
            res -= (k - a - b) * 1;
        }
    }
    else
        res += k * 1;
    c(res);
}
