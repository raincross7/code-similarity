#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  int cnt = 0, N = 1;
  rep(i,n) {
    int a;
    cin >> a;
    if(a == N) N++;
    else cnt++;
  }
  if(cnt == n) cout << -1 << endl;
  else cout << cnt << endl;
  return 0;
}