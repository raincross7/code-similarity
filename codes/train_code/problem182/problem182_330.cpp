#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int l=a+b,r=c+d;
  if(l<r) cout<<"Right"<<endl;
  else if(l==r) cout<<"Balanced"<<endl;
  else cout<<"Left"<<endl;
 
}