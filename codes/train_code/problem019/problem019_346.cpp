#include <stdio.h>

int main(void)
{
  char n[201]; //??¬???
  int sha; //?????£??????????????°
  int h; //?????£????????????????????°
  int i,j,k; //????????????
  int num = 0; //????????°
  int temp; //????????????

  while(1){
    scanf("%s",n); //??????????????????????????????
    if(n[0] == '-'){ //???????????????
      break;
    }
    for(num = 0; num < 201; num++){ //????????°????????????
      if(n[num] == '\0'){ //null????????????????????¬??¨????????????
	break;
      }
    }
    scanf("%d",&sha); //?????£??????????????°????¢????
    for(i=0; i<sha; i++){ //sha????????°??°?????????
      scanf("%d",&h); //?????£????????????????????°????¢????
      for(j=0; j<h; j++){ //?????£????????????????????°????????°?????????
	temp = n[0]; //n[0]?????????
	for(k=0; k<num; k++){ //????????°?????°?????????
	  n[k] = n[k+1]; //?????????????????????
	}
	n[num-1] = temp; //???????????????n[0]?????£??????????????\??????
      }
    }
  printf("%s\n",n);
  }
  
  return(0);
}