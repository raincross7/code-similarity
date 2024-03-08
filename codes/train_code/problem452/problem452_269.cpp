#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#define ll long long int
#define hell 1000000007LL
using namespace std;
ll power(ll x, ll y, ll z){ 
    if(y==0)
     return 1;
    else
    {
        ll p=power(x,y/2,z);
        if(y%2==0)
         return (p*p)%z;
        else
        return (x*((p*p)%z))%z;
    }}
ll gcd(ll x,ll y)
{
    if(y==0)
     return x;
    else
    return gcd(y,x%y);
}
ll po(ll x)
{
    ll c=0;
    while(x>0)
    {
        x=x&(x-1);
        c++;
    }
    return c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
    ll n,k;
    cin>>n>>k;
    map<ll,ll>mp;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        mp[x]=mp[x]+y;
    }
    ll p=0;
    for(int i=1;i<=100000;i++)
    {
        if(p+mp[i]<k)
        {
            p=p+mp[i];
        }
        else
        {
            cout<<i;
            exit(0);
        }
    }}