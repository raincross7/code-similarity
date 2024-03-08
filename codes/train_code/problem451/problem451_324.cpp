#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int findSumOfDigits(int n) {
  int sum = 0;
  while (n > 0) { // n が 0 になるまで
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
int main(){
  int N, K;
  cin >> N >> K;
  vector<int> h(N);
  int ans = 0;
  rep(i,N){
    cin >> h.at(i);
    if(h.at(i) >= K) ans++;
  }
  cout << ans << endl;
}