#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	printf("%.8lf\n", hypot(x1-x2, y1-y2));
	return 0;
}