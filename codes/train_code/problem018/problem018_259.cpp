#include<bits/stdc++.h>
using namespace std;
int main(){
  string S;
  cin>>S;
  if(S=="RRR") cout<<3<<endl;
  else if(S=="SSS") cout<<0<<endl;
  else if(S=="RRS"||S=="SRR") cout<<2<<endl;
  else cout<<1<<endl;
}