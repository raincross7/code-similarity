#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b){
        printf("%d\n",c);
    }
   else if(b==c){
        printf("%d\n",a);
    }
    else{
        printf("%d\n",b);
    }
    return 0;
}
