#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;

using ll = long long;

const int INF = 1001001001;
const ll INF_LL = 1001001001001001001LL;

int main(void){
  string s,t; cin >> s >> t;
  int ans = 0;
  rep(i,s.size()){
    if(s[i]==t[i]) ans++;
  }

  cout << ans << endl;
  return 0;
}
