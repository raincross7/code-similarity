#include<stdio.h>

int main(){
int a, b, d, r;
scanf("%d %d", &a, &b);
	double f;
	d = a / b;
	r = a % b;
	f = (double)a / (double)b;
	printf("%d %d %f\n", d, r, f);
    return 0;
}
