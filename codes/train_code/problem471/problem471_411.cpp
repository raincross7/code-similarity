#include<bits/stdc++.h>

using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (int)n; i++)

int main(){
  int n;
  cin >> n;
  std::vector<int> p(n);
  rep(i,n) cin >> p.at(i);
  int ans = 0;
  int curMin = 1e9;
  rep(i,n) {
    curMin = min(curMin, p.at(i));
    if (curMin == p.at(i)) ans++;
  }
  cout << ans << endl;
  return 0;
}
