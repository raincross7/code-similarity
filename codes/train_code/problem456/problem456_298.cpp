#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0,x;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        {
            cin>>x;
            a[x]=i;
        }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

