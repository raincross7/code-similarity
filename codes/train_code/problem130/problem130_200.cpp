#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long b[10],c[10],a[10],i,n,s,h=0,l=0,k=0,d,e;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        a[i]=i;
    }
    for(i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    for(i=1;i<=n;i++)
    {
        cin>>c[i];
    }
    s=0;
    while(s!=2)
    {
        k++;
        h=0;
        for(i=1;i<=n;i++)
        {
            if(a[i]==b[i])
            {
                h++;
            }
        }
        l=0;
        for(i=1;i<=n;i++)
        {
            if(a[i]==c[i])
            {
                l++;
            }
        }
        if(h==n)
        {
            s++;
            d=k;
        }
        if(l==n)
        {
            s++;
            e=k;
        }     
        next_permutation(a+1,a+1+n);   
    }   
    cout<<max(d,e)-min(d,e)<<endl;
    return 0;
}