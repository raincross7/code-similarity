#include <stdio.h>
int main(){
	int a, b;
    scanf("%d %d", &a, &b);
    
	if (a <= 8 && b <= 8 && (a + b) <= 16)
		printf("Yay!\n");
	else
		printf(":(\n");

    return 0;
}