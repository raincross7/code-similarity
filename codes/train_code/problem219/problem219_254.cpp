#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  int M = N;
  int sum = 0;
  
  while (N != 0){
    if (N % 10 != 0){
      sum += N%10;
      N = N - N%10;
    }
    else {
      N = N/10;
    }
  }
  if (M % sum == 0){
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
}

