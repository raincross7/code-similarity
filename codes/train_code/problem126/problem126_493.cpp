#include <bits/stdc++.h>
#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for (ll i = (ll)(a); i < (ll)(b); ++i)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep, )(__VA_ARGS__)
#define ll long long
#define lld long double
#define ALL(x) x.begin(), x.end()
#ifdef DEBUG
#define line() cerr << "[" << __LINE__ << "] ";
#define dump(i) cerr << #i ": " << i << " ";
#define dumpl(i) cerr << #i ": " << i << endl;
#else
#define line(i)
#define dump(i)
#define dumpl(i)
#endif
using namespace std;

typedef pair<int, int> PII;
int main(int argc, char const *argv[])
{
    int h, w;
    cin >> h >> w;
    vector<PII> v;
    rep(i, h)
    {
        int t;
        cin >> t;
        v.push_back({t, 0});
    }
    rep(i, w)
    {
        int t;
        cin >> t;
        v.push_back({t, 1});
    }
    sort(ALL(v));
    ll a = w + 1;
    ll b = h + 1;
    ll ans = 0;
    int i = 0;
    rep(i, h + w)
    {
        cerr << i << endl;
        auto t = v[i];
        if (t.second == 0)
        {
            ans += a * t.first;
            b--;
        }
        else
        {
            ans += b * t.first;
            a--;
        }
    }
    cout << ans << endl;
    return 0;
}
