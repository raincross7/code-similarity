#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const int inf = 1001001001;

int main(){
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  
  if(abs(a-c) <= d || (abs(a-b) <= d && abs(b-c) <= d)) cout << "Yes" << endl;
  else cout << "No" << endl;
}