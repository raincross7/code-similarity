#include<bits/stdc++.h>
using namespace std;
int main(void){
  int n; cin>>n;
  string s,t; cin>>s>>t;
  string res;
  for(int i=0; i<n; ++i) res+=s[i],res+=t[i];
  cout<<res;
  return 0;
}
