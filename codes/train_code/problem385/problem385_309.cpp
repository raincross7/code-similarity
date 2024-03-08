#include <iostream>
#include <vector>
#include <cmath>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n, 100010);
  rep(i, n-1){
    int b;
    cin >> b;
    a[i] = min(a[i], b);
    a[i+1] = min(a[i+1], b);
  }
  int ans = 0;
  rep(i, n) ans += a[i];
  cout << ans << endl;
  
  return 0;
}