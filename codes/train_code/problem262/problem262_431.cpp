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
  vector<int> a(n);
  rep(i, n) cin >> a.at(i);
  int mx = 0, smx = 0;
  rep(i, n){
    if(a.at(i) > mx){
      smx = mx;
      mx = a.at(i);
    }else if(a.at(i) > smx){
      smx = a.at(i);
    }
  }
  rep(i, n){
    if(a.at(i) == mx) cout << smx << endl;
    else cout << mx << endl;
  }
  return 0;
}