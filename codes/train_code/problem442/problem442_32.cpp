#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin>>S;
  reverse(S.begin(),S.end());
  bool bo=false;
  for(int i=0;i<S.size();){
    if(S.substr(i,5)=="maerd")
      i+=5;
    else if(S.substr(i,7)=="remaerd")
      i+=7;
    else if(S.substr(i,5)=="esare")
      i+=5;
    else if(S.substr(i,6)=="resare")
      i+=6;
    else{
      bo=true;
      break;
    }
  }
  if(bo)
    cout<<"NO"<<endl;
  else
    cout<<"YES"<<endl;
}