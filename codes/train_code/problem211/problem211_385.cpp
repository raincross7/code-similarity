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
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    ll a[n];
    rep(i, n)
    {
        cin >> a[n - 1 - i];
    }
    ll maxans = 2;
    ll minans = 2;
    rep(i, n)
    {
        cerr << i << " " << maxans << " " << a[i] << endl;
        if (maxans < a[i])
        {
            cout << -1 << endl;
            return 0;
        }
        maxans = maxans - (maxans % a[i]) + a[i] - 1;

        minans = a[i] * ((minans + a[i] - 1) / a[i]);
    }
    if (minans > maxans)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << minans << " " << maxans << endl;
    return 0;
}
