#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;cin >> N;
  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin >> A[i];
  }
  sort(A.begin(),A.end());
  int cnt = 1;
  for(int i=1;i<N;i++){
    if(A[i-1]!=A[i]){
      cnt ++;
    }
  }
  if((N-cnt)%2==0){
    cout << cnt << endl;
  }else{
    cout << cnt-1 << endl;
  }
}