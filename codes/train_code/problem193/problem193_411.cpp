#include <bits/stdc++.h> 
using namespace std;

int main(){
  char a,b,c,d;
  cin>>a>>b>>c>>d;
  if((a-'0')+(b-'0')+(c-'0')+(d-'0')==7){
    cout<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"=7"<<endl;
  }
  else if((a-'0')+(b-'0')+(c-'0')-(d-'0')==7){
    cout<<a<<"+"<<b<<"+"<<c<<"-"<<d<<"=7"<<endl;
  }
  else if((a-'0')+(b-'0')-(c-'0')+(d-'0')==7){
    cout<<a<<"+"<<b<<"-"<<c<<"+"<<d<<"=7"<<endl;
  }
  else if((a-'0')+(b-'0')-(c-'0')-(d-'0')==7){
    cout<<a<<"+"<<b<<"-"<<c<<"-"<<d<<"=7"<<endl;
  }
  else if((a-'0')-(b-'0')+(c-'0')+(d-'0')==7){
    cout<<a<<"-"<<b<<"+"<<c<<"+"<<d<<"=7"<<endl;
  }
  else if((a-'0')-(b-'0')+(c-'0')-(d-'0')==7){
    cout<<a<<"-"<<b<<"+"<<c<<"-"<<d<<"=7"<<endl;
  }
  else if((a-'0')-(b-'0')-(c-'0')+(d-'0')==7){
    cout<<a<<"-"<<b<<"-"<<c<<"+"<<d<<"=7"<<endl;
  }
  else if((a-'0')-(b-'0')-(c-'0')-(d-'0')==7){
    cout<<a<<"-"<<b<<"-"<<c<<"-"<<d<<"=7"<<endl;
  }
}