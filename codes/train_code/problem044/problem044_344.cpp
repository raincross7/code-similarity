#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> h(n);
  for (int i=0;i<n;++i) cin >> h[i];
  
  int ans=0;
  for (int i=0;i<1;++i){
    ans+=h[0];
  }
  for (int i=1;i<n;++i){
    if (h[i-1]<=h[i]){
      ans+=h[i]-h[i-1];
    }
  }
  cout << ans << endl;
}