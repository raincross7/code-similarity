#include<bits/stdc++.h>
using namespace std;
int main(){
  int64_t a,b,c,d;
  cin >> a >> b >> c >> d;
  cout << (int64_t)max(a*c,max(a*d,max(b*c,b*d))) << endl;
}