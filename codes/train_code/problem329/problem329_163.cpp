#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  ll sum = 0, ans = n;
  for (int i = n-1; i >= 0; i--) {
    if (sum + a[i] < k)
      sum += a[i];
    else {
      ans = i;
    }
  }
  cout << ans << endl;
  return 0;
}
