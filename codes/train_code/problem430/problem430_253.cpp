// itp1_4_D Computation - A / B Problem
#include<stdio.h>

int main() {
	int a,b;
	scanf("%d %d",&a, &b);
	int d = a/b;
	int r = a%b;
	double f = double(a)/double(b);
	
	printf("%d %d %lf\n", d, r, f);
	
	return 0;
}