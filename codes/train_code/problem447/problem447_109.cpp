#include<iostream>
using namespace std;
int main()
{
  int a, b, c, ans;
  cin >> a >> b >> c;
  ans = c - (a - b);
  if(ans > 0)
    cout << ans <<"\n";
  else
    cout << 0 <<"\n";
  
  return 0;
}