#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rrep(ri,n) for(int ri = (int)(n-1); ri >= 0; ri--)
#define rep2(i,x,n) for(int i = (int)(x); i < (int)(n); i++)
#define rrep2(ri,x,n) for(int ri = (int)(n-1); ri >= (int)(x); ri--)
#define repit(itr,x) for(auto itr = x.begin(); itr != x.end(); itr++)
#define rrepit(ritr,x) for(auto ritr = x.rbegin(); ritr != x.rend(); ritr++)
#define ALL(x) x.begin(), x.end()
using ll = long long;
using namespace std;

int main(){
  string s;
  cin >> s;
  vector<int> ans(s.size()+1, 0);
  rep(i, s.size()){
    if(s.at(i) == '<'){
      ans.at(i+1) = ans.at(i) + 1;
    }
  }
  rrep(i, s.size()){
    if(s.at(i) == '>'){
      ans.at(i) = max(ans.at(i), ans.at(i+1)+1);
    }
  }
  ll sum = 0;
  rep(i, ans.size()) sum += ans.at(i);
  cout << sum << endl;
  return 0;
}