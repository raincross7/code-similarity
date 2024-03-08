#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rrep(ri,n) for(int ri = (int)(n-1); ri >= 0; ri--)
#define rep2(i,x,n) for(int i = (int)(x); i < (int)(n); i++)
#define rrep2(ri,x,n) for(int ri = (int)(n-1); ri >= (int)(x); ri--)
#define repit(itr,x) for(auto itr = x.begin(); itr != x.end(); itr++)
#define rrepit(ritr,x) for(auto ritr = x.rbegin(); ritr != x.rend(); ritr++)
#define ALL(x) x.begin(), x.end()
using ll = long long;
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n+1);
  rep(i, n+1) cin >> a.at(i);
  vector<int> b(n);
  rep(i, n) cin >> b.at(i);
  ll ans = 0;
  rep(i, n){
    ans += min(b.at(i), a.at(i));
    b.at(i) -= a.at(i);
    if(b.at(i) > 0){
      ans += min(b.at(i), a.at(i+1));
      a.at(i+1) = max(0, a.at(i+1)-b.at(i));
    }
  }
  cout << ans << endl;
  return 0;
}