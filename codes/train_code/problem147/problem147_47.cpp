#include<stdio.h>
int main() {
	int a,b;
	scanf("%d %d", &a, &b);

	if (a + b == 15) {
		printf("+");
	}
	else if(a*b == 15) {
		printf("*");
	}
	else if(a + b != 15 && a*b != 15) {
		printf("x");
	}
	return 0;

}