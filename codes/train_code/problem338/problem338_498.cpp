#include <algorithm>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using P = pair<int, int>;
const ll INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());

  ll res = a[0];

  rep(i, n) {
    if (a[i] % res != 0 && res > a[i] % res) {
      res = a[i] % res;
      i = -1;
    }
  }

  cout << res;
  return 0;
}
