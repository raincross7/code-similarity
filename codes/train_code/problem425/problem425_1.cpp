#include<stdio.h>
int main(void)
{
	int a,b,i,j;
	scanf("%d %d",&a,&b);
	while(a!=0 || b!=0){
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				printf("#");
				}
			printf("\n");
		}
		printf("\n");
		scanf("%d %d",&a,&b);
	}
	return 0;
}