#include<iostream>
using namespace std;

int main(){
  int h1,m1,h2,m2,k;
  cin>>h1>>m1>>h2>>m2>>k;
  cout<<(h2-h1)*60+(m2-m1)-k<<endl;
  return 0;
}