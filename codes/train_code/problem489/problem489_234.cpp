#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin>>s;
  if(s.size()<4){
    cout<<"No"<<endl;
  }
  else{
    string t=s.substr(0,4);
    if(t=="YAKI") cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }



}