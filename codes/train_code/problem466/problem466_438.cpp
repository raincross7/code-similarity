#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;
#define DEBUG freopen("in.txt", "r", stdin);

struct fastio {
    fastio() {
        ios::sync_with_stdio(false);
        cout << setprecision(10) << fixed;
        cin.tie(0);
    }
};

fastio _fast_io;

int a, b, c, ans;
int main() {
    cin >> a >> b >> c;
    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());
    // -1, +2
    int d1 = v[1] - v[0];
    int d2 = v[2] - v[1];
    if (d1 & 1)
        ans += (d1 + 1) / 2 + 1;
    else
        ans += d1 / 2;
    ans += d2;
    cout << ans << endl;
    return 0;
}
