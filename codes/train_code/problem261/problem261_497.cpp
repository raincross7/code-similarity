#include <bits/stdc++.h>
using namespace std;
#include <math.h>
#include <iomanip>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const int INF=1001001001;
const int mod=1e9+7;

int main() {
  int N;
  cin>>N;
  for(int i=N;i<1000;i++){
    if(i%10==i/10%10&&i/10%10==i/100%10){
      cout<<i<<endl;return 0;
    }
  }
  
  return 0;
}