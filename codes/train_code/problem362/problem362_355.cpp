#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
  int a,b,c;
  cin >> a >> b >> c;
  cout << max(a,max(b,c))-min(a,min(b,c)) << endl;
}