#include<stdio.h>
int main(void){
  int a,b,c,d;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  if(a+b>c+d){
    printf("Left");
  }else if(a+b<c+d){
    printf("Right");
  }else{
    printf("Balanced");
  }
  return 0;
}