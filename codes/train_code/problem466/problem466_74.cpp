#include<bits/stdc++.h>
using namespace std;
int main(){
  int n[3];cin>>n[0]>>n[1]>>n[2];
  sort(n,n+3);
  cout<<n[2]-n[1]+(n[1]-n[0])/2+(n[1]-n[0])%2*2<<endl;
}