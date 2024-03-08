#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int N;
  cin >> N;
  vector<double> x(N);
  vector<string> u(N);
  rep(i,N) {
    cin >> x[i] >> u[i];
  }
  double ans = 0;
  rep(i,N) {
    if (u[i] == "JPY") ans += x[i];
    else ans += 380000.0 * x[i];
  }
  cout << ans << endl;
  return 0;
}