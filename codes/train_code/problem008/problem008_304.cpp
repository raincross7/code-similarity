#include <bits/stdc++.h>
using namespace std;
 
int main() {
int n;
  cin>>n;
  double sum=0;
for (int i = 0; i < n; i++) {
  double x;
  string u;
  cin>>x>>u;
 if(u=="JPY"){
   sum+=x;
 }  
  else{
    sum +=380000*x;
  }
   
}
cout<<sum<<endl;
 
}