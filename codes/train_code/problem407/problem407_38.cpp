#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  
  long ans = k;
  
  if (k != 1){
    for (int i = 1; i < n; i++){
      ans *= (k - 1);
    }
  }
  
  cout << ans << endl;
  
}