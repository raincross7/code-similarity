#include<iostream>
#include<string>
#include<string.h>
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
using namespace std;
#define REP(i,m,n) for(int i=(int)m ; i < (int) n ; ++i )
#define rep(i,n) REP(i,0,n)
typedef long long ll;
typedef pair<int,int> pint;
typedef pair<ll,ll> pll;
const int inf=1e9+7;
const ll longinf=1LL<<60;
const ll mod=1e9+7 ;

int main(){
  ll n,l;
  cin >> n >> l;
  ll a[n];
  rep(i,n)cin >> a[i];
  rep(i,n-1){
    if(a[i]+a[i+1]>=l){
      cout << "Possible" << endl;
      int p=i;
      rep(i,p)cout << i+1 << endl;
      for(int i=n-2;i>=p+1;i--)cout << i+1 << endl;
      cout << p+1 << endl;
      return 0;
    }
  }
  cout << "Impossible" << endl;
return 0;}