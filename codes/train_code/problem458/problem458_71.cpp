#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <numeric>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using vi = vector<int>; // intの1次元の型に vi という別名をつける
using vvi = vector<vi>; // intの2次元の型に vvi という別名をつける
using vl = vector<ll>;  // long longの1次元の型に vl という別名をつける
using vvl = vector<vl>; // long longの2次元の型に vvl という別名をつける
int MOD = 1000000007; //10^9 + 7

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

// 無限大の値
const ll  lINF = 1LL << 60;
const int iINF = 1 << 29;

int main(void){
  string s;
  cin >> s;

  string ans;

  for(int i=1; i<s.size(); i++){
    if((s.size()-i)%2 != 0) continue;
    ans = s.substr(0,s.size()-i);
    bool ok=true;
    rep(j,ans.size()/2){
      if(ans[j] != ans[j + ans.size() / 2]) ok=false;
    }
    if(ok){
      cout << ans.size() << endl;
      return 0;
    }
  }

  return 0;
} 