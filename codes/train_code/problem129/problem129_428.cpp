#include<iostream>
using namespace std;
int main()
{
  int x,y;
  cin>>x>>y;
  if(x%y==0){
    cout<<"-1";
  }
  else{
    for(int i=1;i<=1000000000000000000/x;i++){
      int z=x*i;
      if(y%z>0){
        cout<<z;
        break;
      }
    }
  }
}
