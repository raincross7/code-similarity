#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  int zero=0,one=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='0'){
      zero++;
    }else if(s[i]=='1'){
      one++;
    }
  }
  int ans=min(zero,one);
  cout<<2*ans<<endl;
}