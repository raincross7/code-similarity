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
  int R, G, B, n;
  cin >> R >> G >> B >> n;

  int cnt = 0;

  REP(r,3001){
    REP(g,3001){
      int b = n - r*R - g*G;
      if(b < 0) continue;
      if(b%B == 0){
        b /= B;
        if(b <= 3000 && b >= 0) ++cnt;
      }

    }
  }

  cout << cnt << endl;

  return 0;
}