#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, srt, end) for (long long i = (srt); i < (long long)(end); i++)
#define VL vector<ll>

int main(){
  ll N, M;
  cin >> N >> M;
  
  if(N == 1 && M == 1){cout << 1 << endl; return 0;}
  else if(N == 1 || M == 1){cout << N * M - 2 << endl; return 0;}
  else if(N == 2 || M == 2){cout << 0 << endl; return 0;}
  else{
    cout << (N-2)*(M-2) << endl;
  }
  return 0;
}