#include <string>
#include <math.h>
#include <iostream>
 
using namespace std;
 
int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  if (a == b && b == c)
    cout << "1";
  else if (a == b)
    cout << "2";
  else if (a == c)
    cout << "2";
  else if (c == b)
    cout << "2";
  else
    cout << "3";
}