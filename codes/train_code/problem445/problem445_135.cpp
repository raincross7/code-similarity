#include <stdio.h>

int main(){
	int N, R;
	scanf("%d %d", &N, &R);
	
	if (N >= 10){
		printf("%d \n", R);
	}
	else{
		printf("%d \n", R + 100 * (10-N));
	} 
	return 0;
}