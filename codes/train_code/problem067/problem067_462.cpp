#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,d[256];
  cin>>a>>b;
  if(a%3==0 || b%3==0){
    cout<<"Possible"<<'\n';
  }
  else if((a+b)%3==0){
    cout<<"Possible"<<'\n';
  }
  else{
    cout<<"Impossible"<<'\n';
  }
  return 0;
}
