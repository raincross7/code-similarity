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
typedef pair<ll,int> pli;
const int inf=1e9+7;
const ll longinf=1LL<<60;
const ll mod=1e9+7 ;

int main(){
  ll n,x;
  cin >> n >> x;
  ll ans=n;
  n-=x;
  while(x){
    ans+=2*x*(n/x);
    if(n%x==0)ans-=2*x;
    ll temp=n%x;
    n=x;
    x=temp;
  }
  ans+=n;
  cout << ans << endl;
return 0;}