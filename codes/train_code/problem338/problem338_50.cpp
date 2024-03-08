#include <iostream>
#include <vector>
using namespace std;

long long GCD(long long x, long long y) {
    return y ? GCD(y, x%y) : x;
}

int main(){
  int n;
  cin >> n;
  vector<int> vec(n);
  for(int i=0; i<n; i++){
    cin >> vec[i];
  }
  int ans = vec[0];
  for(int i=1; i<n; i++){
    ans = GCD(ans, vec[i]);
  }
  cout << ans << endl;
  return 0;
}
    