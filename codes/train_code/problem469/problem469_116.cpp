#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++)cin>>a[i];
  sort(a.begin(),a.end());
  vector<int> cnt(a[n-1]+1);
  for(int i=0;i<n;i++){
    for(int j=a[i];j<cnt.size();j+=a[i]){
      cnt[j]++;
    }
  }
  int ans=0;
  for(int i=0;i<n;i++){
    if(cnt[a[i]]==1)ans++;
  }
  cout<<ans<<endl;
  return 0;
}