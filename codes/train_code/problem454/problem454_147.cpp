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
  int H, W, A, B; cin >> H >> W >> A >> B;
  rep(i, B){
    rep(j, A){
      cout << 0;
    }
    rep(j, W-A){
      cout << 1;
    }
    cout << endl;
  }
  rep(i, H-B){
    rep(j, A){
      cout << 1;
    }
    rep(j, W-A){
      cout << 0;
    }
    cout << endl;
  }
}