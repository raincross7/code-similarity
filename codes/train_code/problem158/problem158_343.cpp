#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    while(~scanf("%d %d",&a,&b))
    {
        printf("%d\n",a+b/2);
    }
    return 0;
}
