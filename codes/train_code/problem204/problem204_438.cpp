#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, d, x;
  cin >> n >> d >> x;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  rep(i, n) x += (d-1) / a[i] + 1;
  cout << x << endl;
  return 0;
}