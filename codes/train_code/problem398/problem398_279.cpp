#include<bits/stdc++.h>
using namespace std;

int main (void){
  int k,s,ans = 0;
  cin >> k >> s;

  for(int i = 0;i <= k;i++){
    for(int j = 0;j <= k;j++){
      if(s-i-j <= k && s-i-j >=0){
        ans++;
      }
    }
  }

  cout << ans << "\n";
  return 0;
}