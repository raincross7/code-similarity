#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;++i){
    cin>>a[i];
  }
  int res=0;
  for(int i=0;i<n;++i){
    for(int j=i+1;j<n;++j){
      res=max(res,abs(a[i]-a[j]));
    }
  }
  cout<<res<<endl;
  return 0;
}