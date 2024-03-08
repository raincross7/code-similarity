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
  vector<int> a(n);
  int mx = -1;
  rep(i, n){
    cin >> a.at(i);
    mx = max(mx, a.at(i));
  }
  if(k > mx){
    cout << "IMPOSSIBLE" << endl;
    return 0;
  }
  int g;
  rep(i, n){
    if(i == 0){
      g = a.at(i);
    }else{
      g = gcd(g, a.at(i));
    }
  }
  if(k % g == 0) cout << "POSSIBLE" << endl;
  else cout << "IMPOSSIBLE" << endl;
  return 0;
}