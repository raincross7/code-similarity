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
    cin>>n;
    ll aa[n];
    vector<ll> v(1000005);
    for0(n)
    {
        cin>>aa[i];
        if(v[aa[i]]==0)
        {
            for(j=aa[i];j<1000003;j+=aa[i])v[j]++;
        }
        else v[aa[i]]=5;
    }
    for0(n)if(v[aa[i]]==1)c++;
    cout<<c<<endl;


}

