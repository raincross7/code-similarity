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

const int IINF = 1 << 30;
const ll INF = 1ll << 60;
const ll MOD = 1e9 + 7;
int main()
{
    int h, w, a, b;
    cin >> h >> w >> a >> b;
    rep(i, h - b)
    {
        rep(j, w)
        {
            if (j < w - a)
                cout << 0;
            else
                cout << 1;
        }
        cout << endl;
    }
    rep(i, b)
    {
        rep(j, w)
        {
            if (j < w - a)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }
    return 0;
}