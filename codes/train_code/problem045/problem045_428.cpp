#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   long long a, b, c, d;
   cin >> a >> b >> c >> d;
   long long ans = max({a * c, a * d, b * c, b * d});
   cout << ans << endl;
}