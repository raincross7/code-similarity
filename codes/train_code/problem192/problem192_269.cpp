#include <bits/stdc++.h>
using namespace std;

using int32 = int_fast32_t;
using int64 = int_fast64_t;

const int32 INF = 1e9;
const int32 MOD = 1e9+7;
const int64 LLINF = 4 * 1e18;

#define YES(n) cout << ((n) ? "YES\n" : "NO\n"  )
#define Yes(n) cout << ((n) ? "Yes\n" : "No\n"  )
#define ANS(n) cout << (n) << "\n"
#define REP(i,n) for(int64 i=0;i<(n);++i)
#define FOR(i,a,b) for(int64 i=(a);i<(b);i++)
#define FORR(i,a,b) for(int64 i=(a);i>=(b);i--)
#define ALL(obj) (obj).begin(),(obj).end()
#define pii pair<int32,int32>
#define pll pair<int64,int64>
#define pb(a) push_back(a)
#define mp make_pair

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int32 n,k;
  cin >> n >> k;
  vector<int32> x(n),y(n);
  REP(i,n){
    cin >> x[i] >> y[i];
  }
  int64 ans = LLINF;
  REP(xi,n-1)FOR(xj,xi+1,n){
    REP(yi,n-1)FOR(yj,yi+1,n){
      int32 cnt = 0;
      int64 lx = x[xi];
      int64 rx = x[xj];
      if(lx > rx)swap(lx,rx);
      int64 ly = y[yi];
      int64 ry = y[yj];
      if(ly > ry)swap(ly,ry);
      REP(i,n){
        if(lx <= x[i] && x[i] <= rx && ly <= y[i] && y[i] <= ry)cnt++;
      }
      if(cnt >= k){
        ans = min(ans, abs(x[xi] - x[xj]) * abs(y[yi] - y[yj]));
      }
    }
  }
  ANS(ans);
  return 0;
}