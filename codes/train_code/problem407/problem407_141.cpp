#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,k;
  cin >> n >> k;
  if (n == 1) {
    cout << k << endl;
    return 0;
  }
  long long int ans = k;
  for (int i=0; i<n-1; i++) {
    ans *= k-1;
  }
  cout << ans << endl;
}