#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i <(n); ++i)
#define ALL(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;
static const double PI = acos(-1);



int main(){
  int n, k;
  cin >> n >> k;
  if(n%k == 0) cout << 0 << endl;
  else cout << 1 << endl;
  return 0;
}
