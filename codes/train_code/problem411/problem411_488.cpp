#include <bits/stdc++.h>
using namespace std;
int main (){
int a,b,c,d;
  cin>>a>>b>>c>>d;
  int co=0;
  co+=min(a,b)+min(c,d);
  cout<<co;
  return 0;
}
