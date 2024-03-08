#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >> n;
  vector<ll> div(n);
  for(int i=1; i<=n; ++i) {
    for(int j=i; j<=n; j+=i) {
      div[j]++;
    }
  }
  ll ans=0;
  for(int i=1; i<=n; ++i) {
    ans += i * div[i];
  }
  cout << ans << endl;
  return 0;
}