#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i <(n); ++i)
#define REP2(i,x,n) for (int i = x; i <(n); ++i)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
using ll = long long;
using P = pair<int,int>;
static const double PI = acos(-1);



int main(){
  string s;
  cin >> s;
  bool ok = false;
  if(s[0] == s[1] && s[1] == s[2]) ok = true;
  if(s[1] == s[2] && s[2] == s[3]) ok = true;


  if(ok) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
