#include<bits/stdc++.h>
using namespace std;
main(){
  int n,r=0;
  cin>>n;
  vector<string> s(n);
  for(auto &str:s)cin>>str;

  for(int i=0;i<n;++i){
    bool m=true;
    for(int j=0;m&&j<n;++j){
      for(int k=0;m&&k<n;++k)
        if(s[(k+j)%n][(i+j)%n]!=s[j][(i+j+k)%n])m=false;
    }
    r+=m*n;
  }
  cout<<r;
}