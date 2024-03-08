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
  ll ans = 0;
  rep(i, n){
    int m = 0;
    if(i != 0) m = a.at(i-1);
    // cerr << a.at(i) << " " << ans << " " << m << endl;
    ans += (a.at(i)+m)/2;
    if(m == 0) a.at(i) %= 2;
    else if(a.at(i) != 0)a.at(i) = 1 - (a.at(i)%2);
    else a.at(i) = 0;
  }
  cout << ans << endl;
  return 0;
}