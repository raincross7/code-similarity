#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
  int a, p;
  cin >> a >> p;
  p = p + a*3;
  int ans;
  ans = p/2;
  cout << ans << endl;
  return 0;
}