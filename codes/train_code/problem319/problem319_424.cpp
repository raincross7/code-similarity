#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  cout << (1900 * m + 100 * (n - m)) * pow(2, m) << endl;
  return 0;
}
