#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i], a[i]--;

  int res = 0;
  rep(i,n) {
    if (i == a[a[i]]) res++;
  }
  cout << res/2 << endl;
  return 0;
}