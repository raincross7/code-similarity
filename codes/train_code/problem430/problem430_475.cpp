#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << a / b << " " << a % b << " " << setprecision(15) << fixed <<(double)a / b << endl;
}
