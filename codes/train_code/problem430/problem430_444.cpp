#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int a,b;
  cin >> a >>b;
  
  cout << a/b << ' ' << a%b << ' ';
  cout << fixed << setprecision(5) << static_cast<double>(a)/b;
}

