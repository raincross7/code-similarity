#include<bits/stdc++.h>
using namespace std;

int main(){
  string s, t, u;
  int a, b;
  cin>>s>>t;
  cin>>a>>b;
  cin>>u;
  if(u==s)
    cout<<a-1<<" "<<b<<endl;
  else if(u==t)
    cout<<a<<" "<<b-1<<endl;
}