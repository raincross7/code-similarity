#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n,k;
  cin >> n >> k;
  int ans = 1;

  rep(i,n) {
    int bai = ans*2;
    int plu = ans+k;
    if (bai <= plu) ans *= 2;
    else ans += k;
  }

  cout << ans << endl;
  return 0;
}