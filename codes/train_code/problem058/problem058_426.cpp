#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  int l = 0;
  int r = 0;
  int sum = 0;
  
  cin >> N;
  
  rep(i, N){
  	cin >> l >> r;
    sum += r - l + 1;  
  }
  
  cout << sum;
}