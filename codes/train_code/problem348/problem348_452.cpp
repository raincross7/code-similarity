#include <stdio.h>

int main(){
	
	int x, y;

	for (;;){

		scanf("%d %d", &x, &y);

		if (x == 0 && y == 0) return 0;

		if (x <= y){
			printf("%d %d\n", x, y);
		}
		else{
			printf("%d %d\n", y, x);
		}
	}

	return 0;
}