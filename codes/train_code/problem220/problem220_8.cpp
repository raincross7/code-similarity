#include<bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  
  
  if(abs(c - a) <= d || (abs(b - a) <=d && abs(b - c) <= d)){
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}


