#include <stdio.h>
int main(void){
    // Your code here!
    char a,b;
    
    scanf(" %c %c",&a,&b);
    
    if((a == 'H' && b == 'H') || (a == 'D' && b == 'D')){
        printf("H\n");
    }
    else{
        printf("D\n");
    }
    
    return 0;
}
