#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
    a[i]--;
  }
  int cnt = 0;
  rep(i, n) {
    if (a[a[i]] == i) cnt++;
  }
  cout << cnt / 2 << endl;
  return 0;
}
