#include <stdio.h>
int main(){
  int a,b,c,i,n;
  scanf("%d %d %d",&a,&b,&c);
  for(i=a;i<=b;i++){
    if(c%i==0){
      n++;
    }
  }
  printf("%d\n",n);
  return 0;
}