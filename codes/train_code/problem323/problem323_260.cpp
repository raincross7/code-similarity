#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, sum, cond, count;
  sum = 0;
  count = 0;
  cin >> N >> M;
  
  vector<int> A(N);
  for(int i = 0; i < N; i++){
    cin >> A[i];
    sum += A[i];
  }
  cond = sum /(4*M) ;
  
  for(int i = 0; i < N; i++){
    if(A[i]*4*M >= sum ){
      count++;
    }
  }
  
  if(count >= M) cout << "Yes" << endl;
  else cout << "No" << endl;

}
