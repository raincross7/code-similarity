#include <iostream>
using namespace std;main(){int n=0,s,j,k,i,a[11][46];for(;n<506;n++)a[n%11][n/11]=0;for(i=0;i<1024;i++){for(j=i,n=s=k=0;j>0;j/=2,k++)n+=j%2,s+=j%2*k;a[n][s]++;}for(cin>>n>>s;n||s;s<46?cout<<a[n][s]:cout<<0,cout<<endl,cin>>n>>s);}