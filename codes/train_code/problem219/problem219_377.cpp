#include <bits/stdc++.h>
int N;
int main ()
{
  scanf("%d",&N);
  int t=N,c=0;
  while(t>0)c+=t%10,t/=10; 
  if(N%c==0)puts("Yes"); else puts("No");
}
  
  
  