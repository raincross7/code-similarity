#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e18;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define per(i, a, b) for (int i = b - 1; i >= a; i--)
#define int ll
using pint = pair<int, int>;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

signed main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a + b < c + d) {
        cout << "Right\n";
    } else if (a + b == c + d) {
        cout << "Balanced\n";
    } else {
        cout << "Left\n";
    }
}