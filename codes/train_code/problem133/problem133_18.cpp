#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	double x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	cout.setf(ios::fixed, ios::floatfield);
	cout<<sqrt(pow(x1-x2,2.0)+pow(y1-y2,2.0));
	return 0;
}