#include <stdio.h>



int main()
{
	
	int A,B;
	scanf("%d %d", &A, &B);
	
	if (A < 9 && B < 9){
		printf("Yay!");
	}
	else{
		printf(":(");
	}
	
	return 0;
}