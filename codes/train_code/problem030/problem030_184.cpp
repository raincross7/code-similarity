#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n, a, b;
  cin >> n >> a >> b;
  cout << n / (a + b) * a + min(a, n % (a + b)) << '\n';
  return 0;
}
