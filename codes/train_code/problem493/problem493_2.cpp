#include <bits/stdc++.h>
using namespace std;





int main() {
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  
  if (a<c){
    if (b<c){
      cout<<0<<endl;
    }
    else if (d<b){
      cout<<d-c<<endl;
    }
    else{
      cout<<b-c<<endl;
    }
    
  }
  
  if (a>=c){
    if (a>d){
      cout<<0<<endl;
    }
    
    else if (b<d){
      cout<<b-a<<endl;
    }
    
    else {
      cout<<d-a<<endl;
    }
  }
    
}
  











