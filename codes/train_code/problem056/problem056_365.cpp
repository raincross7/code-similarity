#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int n, k;
  cin >> n >> k;
  
  vector<int> vec(n);
  
  for (int i = 0; i < n; i++){
    int x;
    cin >> x;
    vec.at(i) = x;
  }
  
  sort(vec.begin(), vec.end());
  
  int ans = 0;
  
  for (int i = 0; i < k; i++){
    ans = ans + vec.at(i);
  }
  
  cout << ans << endl;
  
  
}