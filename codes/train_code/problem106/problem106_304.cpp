#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  vector<int> a(n);
  int cnt=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==j)continue;
      cnt+=a[i]*a[j];
    }
  }
  cout<<cnt/2<<endl;
}