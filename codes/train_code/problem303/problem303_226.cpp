#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(){
  string s;
  string t;
  cin >> s >> t;
  int ans=0;
  int n = s.size();
  rep(i,n){
    if(s[i]==t[i]) continue;
    ans +=1;
  }

  cout << ans << endl;

  return 0;

}