#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i <(n); ++i)
#define ALL(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;
static const double PI = acos(-1);



int main(){
  int r, d, x;
  cin >> r >> d >> x;
  REP(i,10){
    x = r*x - d;
    cout << x << endl;
  }

  return 0;
}