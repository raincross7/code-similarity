#include <bits/stdc++.h>
using namespace std;


void solve(std::vector<long long> A){
  cout << abs(*min_element(A.begin(), A.end()) - *max_element(A.begin(), A.end())) << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    std::vector<long long> A(3);
  for(int i = 0 ; i < 3 ; i++){
    scanf("%lld",&A[i]);
  }
    solve(std::move(A));
    return 0;
}
