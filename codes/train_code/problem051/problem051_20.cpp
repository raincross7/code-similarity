#include<stdio.h>

int main(void){

    int A,B,C;

    scanf("%d%d%d",&A,&B,&C);

    if(A==B && B==C){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}