#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n;
  cin >> n;
  if(n%2) cout << 0 << endl;
  else{
    long long ans=0;
    for(long long i=10;i<=n;i*=5){
      ans+=n/i;
    }
    cout << ans << endl;
  }
}