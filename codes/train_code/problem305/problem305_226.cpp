#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<long long> a(n), b(n);
  for(int i = 0; i < n; ++i) cin >> a[i] >> b[i];
  long long ans = 0;
  for(int i = n - 1; i >= 0; --i){
    a[i] += ans;
    if(a[i] % b[i] == 0) continue;
    ans += b[i] - a[i] % b[i];
  }
  cout << ans << endl;
}