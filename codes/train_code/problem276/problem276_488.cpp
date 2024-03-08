#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<math.h>
#include<complex>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<set>
#include<bitset>
#include<functional>
#include<assert.h>
#include<numeric>
using namespace std;
#define REP(i,m,n) for(int i=(int)(m) ; i < (int) (n) ; ++i )
#define rep(i,n) REP(i,0,n)
using ll = long long;
const int inf=1e9+7;
const ll longinf=1LL<<60 ;
const ll mod=1e9+7 ;
#define PI 3.141592653589793



int main(){
  int a, b, n; cin >> a >> b >> n; int c[a], d[b];
  int minc=inf, mind=inf, ans=inf;
  rep(i, a){
    cin >> c[i]; minc = min(minc, c[i]);
  }
  rep(j, b){
    cin >> d[j]; mind = min(mind, d[j]);
  }
  ans = minc+mind;
  rep(i, n){
    int x, y, z; cin >> x >> y >> z; x--; y--;
    ans = min(ans, c[x]+d[y]-z);
  }
  cout << ans << endl;
}
