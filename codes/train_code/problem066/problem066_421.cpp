#include <stdio.h>
int main() {int RideBack[5],i,j,k;for (i=0;i<5;i++) {scanf("%d",&j);for (k=0;k<i;k++) if (RideBack[k]<j) break;for (int s=4;s>k;s--) RideBack[s]=RideBack[s-1];RideBack[k]=j;} for (i=1,printf("%d",RideBack[0]);i<5;printf(" %d",RideBack[i++]));puts("");return 0;}