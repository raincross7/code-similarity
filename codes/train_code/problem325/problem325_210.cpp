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
  int n, l;
  cin >> n >> l;
  vector<int> a(n);
  rep(i, n) cin >> a.at(i);
  int f = -1;
  rep(i, n-1){
    if(a.at(i) + a.at(i+1) >= l) f = i+1;
  }
  if(f != -1){
    cout << "Possible" << endl;
    rep2(i, 1, f) cout << i << endl;
    rrep2(i, f, n) cout << i << endl;
  }else cout << "Impossible" << endl;
  return 0;
}