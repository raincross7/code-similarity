#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N, K;
  cin >> N >> K;
  vector<long long> H(N);
  for (long long i = 0; i < N; i++){
    cin >> H[i];
  }
  
  sort(H.begin(), H.end());
  for (int i = 0; i < K; i++){
    H.pop_back();
  }
  
  long long ans = 0;
  for (long long i = 0; i < N - K; i++){
    ans += H[i];
  }
  
  cout << ans << endl;
}