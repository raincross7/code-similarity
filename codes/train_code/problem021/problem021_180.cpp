#include<stdio.h>

int main (){
	int A, B;
	A=1; 
	A=2; 
	A=3;
	
	B=1; 
	B=2; 
	B=3;
	
	scanf ("%d",&A);
	getchar ();
	scanf ("%d",&B);
	
	if (A==1 && B==2){
		printf ("3\n");
		
		}else if (A==2 && B==1){
		printf ("3\n");
		
		}else if (A==1 && B==3){
		printf ("2\n");
		
		}else if (A==3 && B==1){
		printf ("2\n");
		
		}else if (A==2 && B==3){
		printf ("1\n");
			
		}else {
		printf ("1\n");
	}
	return 0;
}