#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

 
int main(){
  int a, b;
  cin >> a >> b;
  string ans;
  if(a%3==0 || b%3==0 || (a+b)%3==0) ans = "Possible";
  else ans = "Impossible";
  cout << ans << endl;
  return 0;
}
