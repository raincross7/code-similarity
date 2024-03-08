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
  int n, k;
  cin >> n >> k;
  double ans = 0;
  rep2(i, 1, n+1){
    double add = (double)1/n;
    if(i >= k){
      ans += add;
      continue;
    }
    double d =log2((double)k/i);
    int co = ceil(d);
    // cerr << d << " " << co << endl;
    add *= pow(0.5, co);
    ans += add;
  }
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}