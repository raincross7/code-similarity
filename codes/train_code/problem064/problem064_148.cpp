#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
  ll a,b;
  char op;
  
  cin>>a>>op>>b;
  
  if(op=='+'){
    cout<<a+b<<endl;
  }else{
    cout<<a-b<<endl;
  }
  
  return 0;
}
