#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  long long n, m;
  cin >> n >> m;
  if (2*n > m) {
    cout << m/2 << endl;
  } else {
    cout << n + (m-2*n)/4 << endl;
  }

  return 0;
}

