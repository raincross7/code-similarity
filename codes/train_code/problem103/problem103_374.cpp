#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
  string s;
  cin>>s;
  int n=s.size();
  string ans="yes";
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(s[i]==s[j]) ans="no";
    }
  }
  cout<<ans<<endl;
}
