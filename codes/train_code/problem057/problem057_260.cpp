#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)


int main(){
  string s;
  cin >> s;
  rep(i,s.length()){
    if(i%2==0)cout << s[i];
  }
  
  
  
  return 0;
}