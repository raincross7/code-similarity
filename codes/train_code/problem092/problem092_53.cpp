#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  int c;
  cin>>a>>b>>c;
  if(a==b){
    cout<<c;
  }
  if(a==c){
    cout<<b;
  }
  if(b==c){
    cout<<a;
  }
}
