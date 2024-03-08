#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
  int n; cin >>n;
  vector<int> h(n);
  rep(i,n) cin >>h[i];
  int ans = 0, sum = 0;
  rep(i,n){
    if(sum<h[i]){
      ans += (h[i]-sum);
      sum = h[i];
    }
    else sum = h[i];
  }
  cout << ans << endl;
  return 0; 
}