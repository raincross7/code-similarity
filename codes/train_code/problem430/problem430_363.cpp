#include<stdio.h>

int main(){

	int a,b,d,r;
	double f;
	
	scanf("%d %d\n",&a,&b);
	
	d = a/b;
	r = a%b;
	f = (double)a/(double)b;

	printf("%d %d %lf\n",d,r,f);
	return 0;
}