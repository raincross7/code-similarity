#include<iostream>
int n,m,i,d,p,z;
main(){
  while(std::cin>>n>>m,n){
    int x[11]={};
    for(z=i=0;i++<n;x[p]+=d,z+=d*p)std::cin>>d>>p;
    for(i=10;i>=0;--i)
      if(x[i]<m)z-=x[i]*i,m-=x[i];
      else if(x[i])z-=i*m,m=0;
    std::cout<<z<<'\n';
  }
}