#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<double> v(n);
    rep(i, n) cin >> v[i];
    sort(v.begin(), v.end());
    double ans = v[0];
    rep(i, n - 1)
    {
        ans = (ans + v[i + 1]) / 2;
    }
    printf("%.10f\n", ans);
    return 0;
}