#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;

int main(void){
  int n, k, ans=0;
  cin >> n >> k;
  vector<int> p(n);
  rep(i,n) cin >> p[i];
  sort(p.begin(),p.end());
  rep(i,k) ans += p[i];
  cout << ans << endl;
  return 0;
}
