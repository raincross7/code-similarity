#include<bits/stdc++.h>
using namespace std;

int main(){
  int k,s;
  cin>>k>>s;
  int count=0;
  for(int i=0;i<=k;i++){
    for(int j=i;j<=k;j++){
      for(int l=j;l<=k;l++){
        if(i+j+l==s){
          if(i!=j && j!=l && i!=l) count += 6;
          else if(i==j && j==l) count += 1;
          else count += 3;
        }
      }
    }
  }
  cout<<count<<endl;
  return 0;
}