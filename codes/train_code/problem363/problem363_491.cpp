#include<stdio.h>
signed main(){
    int i,N,sum=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        sum+=i;  
    }
    printf("%d\n",sum);
    return(0);
}