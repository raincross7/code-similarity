#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  
  int ans=max({a,b,c});
  
  cout<<ans*9+a+b+c;
  
  return 0;
}
