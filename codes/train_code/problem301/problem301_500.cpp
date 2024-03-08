#include <bits/stdc++.h>
using namespace std;


void solve(long long N, std::vector<long long> W){
  long long acc = 0;
  long long mymin = LLONG_MAX;
  for(long long i = 0; i < N; i++){
    acc += W[i];

    long long twoacc = 0;
    for(long long j = (i+1); j < N; j++){
      twoacc += W[j];
    }

    mymin = min(mymin, abs(acc - twoacc));
  }

  cout << mymin << endl;
}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
  scanf("%lld",&N);
  std::vector<long long> W(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&W[i]);
  }
    solve(N, std::move(W));
    return 0;
}