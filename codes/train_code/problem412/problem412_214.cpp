#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
#define sz(x) int(x.size())
typedef long long ll;
const int inf = 100100100;

int main(){
  ll x,y;
  cin >> x >> y;



  ll ans = 0;
  if(x == 0){
    if(y >= 0) ans = y-x;
    else ans = x - y + 1;
  }
  else if(y == 0){
    if(x<=0) ans = y - x;
    else ans = x - y + 1 ;
  }
  else if(x <= 0 && y <= 0){
    if(y <= x) ans = x - y + 2; //OK
    else ans = y - x; // -3 -1 OK
  }
  else if(x <= 0 && y > 0){
    if(abs(x) >= y) ans = 1 + abs(x) - y;  //-1 2 OK
    else ans = 1 + y - abs(x);//5 -1 OK
  }
  else if(x>=0 && y>=0){
    if(x<=y) ans = y-x; //OK
    else ans = 2 + x- y;// 10 5 OK
  }
  else {
    if(x>=abs(y)) ans = 1 + x-abs(y); //OK
    else ans = 1 + abs(y)-x;// 3 -6 OK
  }
  cout << ans << endl;
}
