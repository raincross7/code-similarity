#include <cstdio>

int main()
{
    int a,b;
    char op;
    scanf("%d %c %d",&a, &op, &b);
    
    if(op == '-')
    {
        printf("%d",a-b);
    }
    else
    {
        printf("%d",a+b);
    }
}
