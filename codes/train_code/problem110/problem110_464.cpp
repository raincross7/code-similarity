#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,M,K;cin >> N >> M >> K;
  for(int i=0;i<=N;i++){
    for(int j=0;j<=M;j++){
      int S = i*(M-j)+j*(N-i);
      if(S==K){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}