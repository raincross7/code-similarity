#include<bits/stdc++.h>
#define fo(i,a,b) for(i=a;i<=b;i++)
using namespace std;
#define ll long long
const int maxn=100000+10;
int x[maxn],xx[maxn],w[maxn];
int i,j,k,l,r,s,t,n,m;
ll c;
inline int read()
{
    int k=1;int x=0;
    char ch=getchar();
    while ((ch<'0'||ch>'9')&&ch!='-')ch=getchar();
    if(ch=='-')
    k=-1,ch=getchar();
    while(ch>='0'&&ch<='9')
    x=x*10+ch-'0',ch=getchar();
    return k*x;
}
int main()
{
    n=read(),l=read(),t=read();
    fo(i,1,n)
        x[i]=read(),w[i]=read();
    fo(i,1,n)
    {
        if (w[i]==2) w[i]=-1;
        r=x[i]+w[i]*t;
        if (r>0) (c+=r/l)%=n;
        else if (r<0) (c+=(r+1)/l-1)%=n;
        xx[i]=(r%l+l)%l;
    }
    sort(xx+1,xx+n+1);
    c=(c+n)%n;
    fo(i,c+1,n)
        printf("%d\n",xx[i]);
    fo(i,1,c) printf("%d\n",xx[i]);
}