#include <stdio.h>

int main(void)
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	int d    =         a / b;
	int r    =         a % b;
	double f = (double)a / b;
	
	printf("%d %d %f\n", d, r, f);
	
	return 0;
}