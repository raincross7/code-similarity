#include <bits/stdc++.h>
using namespace std;
int main(){
  int n; cin >> n;
  vector<int>d(n);
  for(int i = 0; i < n; i++)
    cin >> d[i];
  
  sort(d.begin(), d.end());
  int ans = d[d.size()/2] -d[d.size()/2 -1];
  cout << ans;
}