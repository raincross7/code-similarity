#include "bits/stdc++.h"
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&b==c&&c==a)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}