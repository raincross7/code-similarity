#include <bits/stdc++.h>
using namespace std;


void solve(long long N, long long K){
  long long acc = 1;

  for(long long i = 0; i < N; i++){
    if(acc+K < acc*2) {
      acc += K;
    }
    else {
      acc *= 2;
    }
  }

  cout << acc << endl;
}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
  scanf("%lld",&N);
  long long K;
  scanf("%lld",&K);
    solve(N, K);
    return 0;
}
