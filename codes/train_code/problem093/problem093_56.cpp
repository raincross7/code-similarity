#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rrep(i, n) for (int i = 1; i < (int)(n+1); i++)
int main() {
  int A,B;
  cin>>A>>B;
  int ans=0;
  for(int i=A; i<B+1; i++){
      if(i/10000==(i%10)){
      if(i/1000-(i/10000)*10==(i%100-(i%10))/10){
          ans++;
      }
      }
  }
  cout<<ans<<endl;
}

