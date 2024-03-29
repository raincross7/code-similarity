#include <cstdio>
#include <iostream>
using namespace std;
int prime[1000005];
bool is_prime[1000005];
int seve(int n)
{
    int p=0;
    for(int i=0;i<=n;i++)
        is_prime[i]=true;
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i<=n;i++)
    {
        if(is_prime[i])
        {
            prime[p++]=i;
            for(int j=2*i;j<=n;j+=i)
                is_prime[j]=false;
        }
    }
    return p;
}
int main(void)
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",seve(n));
    }
    return 0;
}
