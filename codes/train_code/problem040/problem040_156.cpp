#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i < n; i++)
using P = pair<ll, ll>;

int main()
{
    ll n, ans;
    cin >> n;
    ll d[n];
    rep(i, n) cin >> d[i];
    sort(d, d + n);
    if (n % 2 == 0)
        ans = d[n / 2] - d[n / 2-1];
    else
        ans = 0;
    cout << ans << endl;
    return 0;
}