#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3;

  cin >> num1 >> num2 >> num3;

  if(num3 >= num1 && num3 <= num2)
  cout << "Yes" << endl;
  else
  cout << "No" << endl;
}
