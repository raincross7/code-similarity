#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n,k;
  cin >> n >> k;
  long long ans=pow(n/k,3);
  if(k%2==0) ans+=pow((n+k/2)/k,3);
  cout << ans << endl;
}