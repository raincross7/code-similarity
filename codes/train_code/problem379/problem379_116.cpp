#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define for0(n) for(i=0; i<(n); i++)
#define for1(n) for(i=1; i<=(n); i++)


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll _,i,j,n,a,b,e,k,u,t,x=1,m,y,q,f=1,c=0,d=0,l,p,z,o,r,g;
    string ss,s;
    cin>>n>>m;
    if(m/4==n&&m%4==0)c=1;
    while(n--&&m>0)
    {
        m-=2;
        if(m/4==n&&m%4==0)c=1;
    }
    if(c)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

