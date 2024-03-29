#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i <(n); ++i)
#define REP2(i,x,n) for (int i = x; i <(n); ++i)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
using ll = long long;
using P = pair<int,int>;
static const double PI = acos(-1);
static const int INF = 1e9+7;
#define REP(i,n) for (int i = 0; i <(n); ++i)
//debug 
#ifdef _DEBUG
#define debug(var)  do{cout << #var << " :";view(var);}while(0)
#else
#define debug(...)
#endif
template<typename T> void view(T e){cout << e << endl;}
template<typename T> void view(const vector<T>& v){for(const auto& e : v){ cout << e << " "; } cout << endl;}
template<typename T> void view(const vector<vector<T> >& vv){ for(const auto& v : vv){ view(v); } }


int main(){
  //in
  int n,l,r;
  cin >> n >> l >> r;


  //L,Rで例外処理
  if(l > r){
    cout << 0 << endl;
    return 0;
  }
  if(l == r){
    cout << 1 << endl;
    return 0;
  }
  //L　<　Rのとき，nで例外処理
  if(n == 1){
    cout << 0 << endl;
    return 0;
  }
  if(n == 2){
    cout << 1 << endl;
    return 0;
  }
  //L<R

  ll ans = 0;
  //ans = (n-1)*r + l - (n-1)*l+r+ 1;
  ans = (ll)(n-1)*(r-l) + l - r + 1;
  cout << ans << endl;
  return 0;
}