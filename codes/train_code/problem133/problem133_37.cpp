#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(void){
	
	double x1, y1, x2, y2, r;
	cin >> x1 >> y1 >> x2 >> y2;
	r = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	cout << fixed << setprecision(7);
	cout << r << "\n";
	cin >> r;
	return 0;
}