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

ll power(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

const int N = 1e5 + 5;
int n, m, k, ans;

int main() {
    cin >> n >> k;

    int ans = k * power(k - 1, n - 1);
    cout << ans << endl;
    return 0;
}
