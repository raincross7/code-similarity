#include<iostream>

using namespace std;

int main(void)
{
  int a,b,x; cin>>a>>b>>x;
  
  if((a<=x)&&(x<=(a+b))){puts("YES");}
  else{puts("NO");}
  
  return 0;
}
