#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){

	int a, b, c;

	double S, L, h, d;

	cin >> a >> b >> c;


	d = ( acos( -1.0) * c) / 180.0;

	S = a * b * sin(d) / 2.0;

	L = a + b + sqrt( a * a + b * b - 2 * a * b * cos(d));

	h = b * sin(d);


	printf( "%1f\n%1f\n%1f\n", S ,L, h);

	return 0;

}