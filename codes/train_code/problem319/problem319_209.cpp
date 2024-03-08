#include <bits/stdc++.h>
using namespace std;

using int32 = int_fast32_t;
using int64 = int_fast64_t;

const int32 INF = 1e9;
const int32 MOD = 1e9+7;
const int64 LLINF = 1e18;

#define YES(n) cout << ((n) ? "YES\n" : "NO\n"  )
#define Yes(n) cout << ((n) ? "Yes\n" : "No\n"  )
#define POSSIBLE cout << ((n) ? "POSSIBLE\n" : "IMPOSSIBLE\n"  )
#define ANS(n) cout << (n) << "\n"
#define REP(i,n) for(int64 i=0;i<(n);++i)
#define FOR(i,a,b) for(int64 i=(a);i<(b);i++)
#define FORR(i,a,b) for(int64 i=(a);i>=(b);i--)
#define ALL(obj) (obj).begin(),(obj).end()
#define pii pair<int32,int32>
#define pll pair<int64,int64>
#define pb(a) push_back(a)

int64 mypow(int64 n,int64 r){
  if(r == 0)return 1;
  int64 x = mypow(n,r/2);
  x *= x;
  if(r % 2){
    x *= n;
  }
  return x;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int32 n,m;
  cin >> n >> m;
  int64 y = 1900 * m + 100 * (n - m);
  int64 z = mypow(2,m);
  // cout << y << " " << z << endl;
  ANS(y * z);
  return 0;
}