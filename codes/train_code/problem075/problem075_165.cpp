#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rrep(ri,n) for(int ri = (int)(n-1); ri >= 0; ri--)
#define rep2(i,x,n) for(int i = (int)(x); i < (int)(n); i++)
#define repit(itr,x) for(auto itr = x.begin(); itr != x.end(); itr++)
#define rrepit(ritr,x) for(auto ritr = x.rbegin(); ritr != x.rend(); ritr++)
#define ALL(x) x.begin(), x.end()
using ll = long long;
using namespace std;

int main(){
  int x;
  cin >> x;
  int m = x % 100;
  int c = (m+4)/5;
  int l = 100*c;
  // cerr << x << " " << m << " " << c << " " << l << endl;
  if(l > x) cout << 0 << endl;
  else cout << 1 << endl;
  return 0;
}