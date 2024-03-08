#include <iostream>
#include <algorithm>
#include <string>
#include <set>

#include <regex>
#include <locale>
#include <iomanip>

using namespace std;
using ll = long long;

#define OVERLOAD3(_1,_2,_3,name,...) name
#define REP(i,n) REPI(i,0,n)
#define REPI(i,a,b) for(int i=int(a),i##_Len=int(b);i<i##_Len;++i)
#define rep(...) OVERLOAD3(__VA_ARGS__,REPI,REP,)(__VA_ARGS__)
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)(x).size())

int main () {
  string s, t, sr, tr;
  cin >> sr >> tr;
  s = sr; reverse(ALL(sr));
  t = tr; reverse(ALL(tr));
  cout << (s==tr && t==sr ? "YES" : "NO") << endl;
}