#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
	int a, b;
	int d, r;
	double f;
	cin >> a >> b;
	d = a / b;
	r = a % b;
	f = (double)a / (double)b;
	//cout << d << " " << r << " " << f << endl;
	    printf("%d %d %lf\n", d, r, f);
}