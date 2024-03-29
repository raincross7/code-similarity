#include<iostream>
#include <cstring>
#include<string>
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
typedef pair<int,int> pint;
typedef pair<ll,int> pli;
const int inf=1e9+7;
const ll longinf=1LL<<60 ;
const ll mod=1e9+7 ;

int main(){
  int N; cin >> N; ll a[N];
  rep(i, N){
    cin >> a[i];
  }
  ll tmp = 0, ans=0;
  rep(i, N){
    if(a[i]==0){
      ans+=tmp/2; tmp=0;
    }
    else tmp+=a[i];
  }
  ans+=tmp/2;
  cout << ans << endl;
}