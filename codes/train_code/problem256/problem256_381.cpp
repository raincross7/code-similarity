#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
#define show(x) {for(auto i: x){cout << i << " ";} cout << endl;}
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int K, X;
  cin >> K >> X;
  bool bl = (500 * K >= X);
  if (bl) puts("Yes");
  else puts("No");
  return 0;
}