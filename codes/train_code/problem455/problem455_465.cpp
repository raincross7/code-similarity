#include<iostream>
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
#include <bits/stdc++.h> 
using namespace std;
#define REP(i,m,n) for(int i=(int)(m) ; i < (int) (n) ; ++i )
#define rep(i,n) REP(i,0,n)
#define pll pair<ll,ll>
#define pint pll
using ll = long long;
const int inf=1e9+7;
const ll longinf=1LL<<60 ;
const ll mod=1e9+7 ;

int main(){
  int n;
  cin >> n;
  ll a[n];
  rep(i,n)cin >> a[i];
  ll ans=a[0]-1;
  ll x=2;
  REP(i,1,n){
    if(a[i]==x){
      x=a[i]+1;
      continue;
    }
    ans+=(a[i]+x-1)/x-1;
  }
  cout << ans << endl;
return 0;}