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

int main(){
  int M; cin >> M; ll a[M], b[M]; ll sum = 0; ll digsum = 0;
  rep(i, M){
    cin >> a[i] >> b[i];
    digsum += a[i]*b[i];
    sum += b[i];
  }
  ll ans = (sum - 1)  + ((digsum-1)/9);
  cout << ans << endl;
}
    