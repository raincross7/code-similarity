#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  int res = 1;
  for(int i = 0; i < n; ++i){
    res = min({res * 2, res + k});
  }
  cout << res;
}