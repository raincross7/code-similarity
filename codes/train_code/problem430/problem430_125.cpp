#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << a / b << " " << a % b << " " << fixed << 1.0 * a / b << endl;
	return 0;
}