#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
  cin>>a>>b;
  if(a>b)swap(a,b);
  if(a==1&&b==2)cout <<"3\n";
  else if(a==1)cout <<"2\n";
  else cout <<"1\n";
}