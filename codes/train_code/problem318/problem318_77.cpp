#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int a,b,c;
  cin >> a >> b >> c;
  
  cout << a+b+c - max( max(a,b),max(b,c) ) << endl;
  
}
