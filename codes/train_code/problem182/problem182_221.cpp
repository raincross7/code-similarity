#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n);i++)
using namespace std;
using ll =long long;
using P =pair<int, int>;

int main(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int L=a+b;
  int R=c+d;
  if(L>R){
    cout<<"Left"<<endl;
  }else if(L<R){
    cout<<"Right"<<endl;
  }else{
    cout<<"Balanced"<<endl;   
  }
  return 0;
}