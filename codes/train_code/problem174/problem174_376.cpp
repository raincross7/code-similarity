#include<bits/stdc++.h>
using namespace std;
long long n,k,a[100005],maxn;
int main()
{
    
    cin>>n>>k>>a[0];
    maxn=a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        a[0]=__gcd(a[0],a[i]);
        maxn=max(a[i],maxn);
    }
    if(k%a[0]==0&&k<=maxn) cout<<"POSSIBLE"<<endl;
    else cout<<"IMPOSSIBLE"<<endl;
    return 0;
}