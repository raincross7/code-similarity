#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    ll ans[n];
    rep(i, n)
    {
        ll a;
        cin >> a;
        ans[a - 1] = i + 1;
    }

    rep(i, n) cout << ans[i] << " ";
    cout << endl;
    return 0;
}