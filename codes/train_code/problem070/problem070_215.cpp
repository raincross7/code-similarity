#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();


int main() {
  int X, A, B;
  cin >> X >> A >> B;
  if (B - A <= 0) cout << "delicious";
  else if (B - A > X) cout << "dangerous";
  else cout << "safe";
  cout << endl;
}