#include <stdio.h>
int main(void)
{
  int H,W,i,j;
  for ( ; ; )
  {
    scanf("%d %d",&H,&W);
    if (H == 0 && W == 0){break;}
  for (i = 1; i <= H; i++)
  {
    for(j = 1; j <= W; j++)
    {
      printf("#");
      if(j == W){printf("\n");}
    }
    if(i == H){printf("\n");}
  }
  }
  return 0;
}

