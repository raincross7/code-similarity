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

int main(){
  int x, a, b;
  cin >> x >> a >> b;

  int day = -a + b;
  if(day <= 0) cout << "delicious" << endl;
  else if(day > 0 && day <= x) cout << "safe" << endl;
  else cout << "dangerous" << endl;
  return 0;
}