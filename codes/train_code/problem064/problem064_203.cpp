
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a,c;
  string b;
  cin>>a>>b>>c;
  if(b=="+"){
    cout<<a+c<<endl;
  }
  else if (b=="-") {
    cout<<a-c<<endl;
  }
  else if(b=="*"){
    cout<<a*c<<endl;
  }
  else if(b=="/"){
    cout<<a/c<<endl;
  }
}
