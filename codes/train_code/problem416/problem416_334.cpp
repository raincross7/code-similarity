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
using namespace std;
#define REP(i,m,n) for(int i=(int)(m) ; i < (int) (n) ; ++i )
#define rep(i,n) REP(i,0,n)
using ll = long long;
const int inf=1e9+7;
const ll longinf=1LL<<60 ;
const ll mod=1e9+7 ;
#define pai 3.141592653589793238462643383279




int main(){
  int keta=-1; ll pow[11]; pow[0] = 1;
  rep(i, 10){
    pow[i+1] = pow[i]*10;
  }
  for(int i=0; i<=10; i++){
    cout << "? " << flush;
    cout << pow[i] << flush;
    cout << endl << flush;
    char c; cin >> c;
    if(c=='N'){
      keta = i; break;
    }
  }
  if(keta==-1){
    for(int i=0; i<=10; i++){
      cout << "? " << flush;
      cout << (ll)2LL*pow[i] << endl << flush;
      char c; cin >> c;
      if(c=='Y'){
        cout << "! " << pow[i] << endl << flush; return 0;
      }
    }
  }
  vector<int> made;
  for(int i=1; i<=keta; i++){
    ll ng = -1, ok = 9;
    if(i==1) ng = 0;
    while(abs(ok-ng)>1){
      ll mid = (ok+ng)/2;
      cout << "? " << flush;
      for(auto k: made){
        cout << k << flush;
      }
      cout << mid << flush;
      rep(i, keta-made.size()){
        cout << 9 << flush;
      }
      cout << endl;
      cout << flush;
      char c; cin >> c;
      if(c=='Y') ok = mid;
      else ng = mid;
    }
    made.push_back(ok);
  }
  cout << "! " << flush;
  for(auto k: made){
    cout << k << flush;
  }
  cout << endl; cout << flush; return 0;
}