#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i <(n); ++i)
#define ALL(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;
static const double PI = acos(-1);



int main(){
  int n;
  cin >> n;
  vector<int> contest{111,222,333,444,555,666,777,888,999};
  REP(i,contest.size()){
    if(n <= contest[i]){
      cout << contest[i] << endl;
      return 0;
    }
  }


  return 0;
}