

#include<bits/stdc++.h>
using namespace std;

#define int long long int 


int32_t main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    reverse(a,a+n);
    int sum=0;
    for(int i=0;i<k;i++)
     sum+=a[i];
     cout<<sum<<endl;
}
