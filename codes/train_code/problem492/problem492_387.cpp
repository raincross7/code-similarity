#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;
  cin >> n >> s;
  
  int a=0;
  
  for(int i=0;i<n;i++){
    if(s[i]=='(') a++;
    else a--;
    if(a<0){
      cout << '(';
      a++;
    }
  }
  
  cout << s;
  
  for(int i=0;i<a;i++) cout << ')';
  
  cout << endl;
}