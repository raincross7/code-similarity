#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  int ans=0;
  for(int i=0;i<n;i++){
    int hi;
    cin>>hi;
    ans+=hi>=k;
  }
  cout<<ans<<endl;
  return 0;
}