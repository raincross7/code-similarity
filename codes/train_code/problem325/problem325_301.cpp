#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, l;
  cin>>n>>l;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  bool ans = false;
  int s = -1;
  for(int i=0;i<n-1;i++) if(a[i]+a[i+1]>=l) ans = true, s = i;
  if(ans) {
    cout<<"Possible"<<endl;
    for(int i=1;i<=s;i++) cout<<i<<endl;
    for(int i = n-1;i>=s+2;i--) cout<<i<<endl;
    cout<<s+1<<endl;
  }
  else cout<<"Impossible"<<endl;
}