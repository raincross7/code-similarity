#include<iostream>

using namespace std;

int main(void){

  int N,d;
  
  long long ans = 0;

  cin >> N;

  int A[N];

  for(int i = 0;i < N;i++){
     cin >> A[i];
 }

  for(int i = 1;i < N;i++){
    if(A[i] < A[i-1]){
      d = A[i-1]-A[i];
      ans += d;
      A[i] += d;
    }
  }

  cout << ans << endl;
}
