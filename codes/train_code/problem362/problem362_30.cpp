#include<bits/stdc++.h>
using namespace std;
int main(void){
int x[3];
for(int i=0;i<3;i++)
  cin>>x[i];
sort(x,x+3);
cout<<(x[1]-x[0])+(x[2]-x[1])<<endl;
return 0;}