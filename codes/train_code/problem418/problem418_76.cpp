#include<iostream>
#include<string>
using namespace std;
int main()
{
  int n,k;
  string s;
  cin>>n;
  cin>>s;
  cin>>k;
  for(int i=0;i<n;i++){
    if(s[k-1]!=s[i]){
      s[i]='*';
    }
  }
  cout<<s;
}
