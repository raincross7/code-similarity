#include <stdio.h>
main(){
  int W,H,x,y,r;
  scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);
  if((r<=x)&&(x<=W-r)&&(r<=y)&&(y<=H-r)){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
}