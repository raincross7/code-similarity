#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pi pair<int, int>
#define pb push_back
#define fr first
#define sc second
#define endl '\n'

const int mxn = 1e6 + 5;
const ll MOD =  1e9 + 7;
int arr[mxn];
int n, m, k, q;
string s, t;

void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max(max(a * c, a * d), max(b * c, b * d)) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int T = 1;
    //cin >> T;
    while(T--) solve();
    return 0;
}
