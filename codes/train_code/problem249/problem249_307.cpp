#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin>>a[i];
  sort(a.begin(),a.end());
  double ans=a[0];
  rep(i,n-1){
    ans=(ans+a[i+1]+0.0)/2.0;
  }
  cout << ans;
  return 0;
}