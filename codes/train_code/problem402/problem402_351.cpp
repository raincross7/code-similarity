#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;
typedef long long ll;

int main() {
  int t, x;
  cin >> t >> x;
  double ans = (double)t / (double)x;
  cout << fixed << setprecision(12) << ans << endl;
}