#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,m,n) for(int i=(int)(m); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define RREP(i,m,n) for(int i=(int)(m); i>=(int)(n); i--)
#define rrep(i,n) RREP(i,n-1,0)
#define all(v) v.begin(), v.end()
const int inf = 1e9+7;
const ll longinf = 1LL<<60;
const ll mod = 1e9+7;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll x, y;
  cin >> x >> y;
  if(x < y) {
    if(y < 0) {
      cout << y-x << endl;
    } else if(y == 0) {
      cout << y-x << endl;
    } else if(x < 0) {
      cout << abs(abs(y)-abs(x))+1 << endl;
    } else if(x == 0) {
      cout << y-x << endl;
    } else {
      cout << y-x << endl;
    }
  } else {
    if(x < 0) {
      cout << abs(abs(y)-abs(x))+2 << endl;
    } else if(x == 0) {
      cout << abs(abs(y)-abs(x))+1 << endl;
    } else if(y < 0) {
      cout << abs(abs(y)-abs(x))+1 << endl;
    } else if(y == 0) {
      cout << abs(abs(y)-abs(x))+1 << endl;
    } else {
      cout << abs(abs(y)-abs(x))+2 << endl;
    }
  }
  return 0;
}
