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
  string s;
  cin >> s;

  int cnt = 0;

  REP(i,s.size() - 1){
    if(s[i] != s[i+1]) ++cnt;
  }

  cout << cnt << endl;
  
  return 0;
}
