#include <stdio.h>

int main() {
    int a;
    int b;
    int d,r;
    double f;
    scanf("%d%d",&a,&b);
    d = a/b;
    r = a%b;
    f = (double)a/b;
    
    printf("%d %d %.5lf\n",d,r,f);
    return 0;
}