#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	x1 -= x2;
	y1 -= y2;
	cout << fixed << setprecision(5) << sqrt(x1*x1 + y1*y1) << endl;
	return 0;
}