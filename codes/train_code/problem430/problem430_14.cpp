#include <iostream>
#include <iomanip>
using namespace std;

int main(){

 int a, b, d, r;
 double f;

 cin >> a >> b;

 d = a / b;
 r = a % b;
 f = 1.0 * a / b;

 cout << d << " " << r << " " << fixed << setprecision(5) << f << "\n";

 return 0;
}