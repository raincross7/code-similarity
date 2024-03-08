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
  int R, G, B, n;
  cin >> R >> G >> B >> n;
  int ans = 0;
  rep(i, n+1){
    int now = i*R;
    if(now > n) break;
    rep(j, n+1){
      int nx = now + j * G;
      if(nx > n) break;
      if((n-nx) % B == 0){
        // cerr << i << " " << j << endl;
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}