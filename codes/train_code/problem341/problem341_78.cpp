#include <iostream>

using namespace std;

int main(){
  string s;
  int n;
  cin>>s>>n;
  for(int i=0;i<s.size();i+=n)cout<<s[i];
}