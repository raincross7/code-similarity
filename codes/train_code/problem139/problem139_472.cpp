#include<bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#define dbg(x...) do{cout << "\033[32;1m" << #x << "->" ; err(x);} while(0)
void err(){cout << "\033[39;0m" << endl;}
template<template<typename...> class T,typename t,typename... A>
void err(T<t> a,A... x){for (auto v:a) cout << v << ' '; err(x...);}
template<typename T,typename... A>
void err(T a,A... x){cout << a << ' '; err(x...);}
#else
#define dbg(...)
#endif
typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
template<class T> using vc=vector<T>;
template<class T> using vvc=vc<vc<T>>;
template<class T> void mkuni(vector<T>&v)
{
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
}
template<class T>
void print(T x,int suc=1)
{
    cout<<x;
    if(suc==1) cout<<'\n';
    else cout<<' ';
}
template<class T>
void print(const vector<T>&v,int suc=1)
{
    for(int i=0;i<v.size();i++)
        print(v[i],i==(int)(v.size())-1?suc:2);
}
const int INF=0x3f3f3f3f;
const int mod=1e9+7;
const int maxn=3e5+7;
#define pii pair<int,int>

pii a[maxn];
pii merge(pii a, pii b)
{
    pii c;
    if(a.first<b.first) swap(a,b);
    c.first=a.first;
    c.second=max(a.second,b.first);
    return c;
}
int main()
{
    int n;
    cin>>n;
    int pow2=(1<<n);
    for(int i=0,x;i<pow2;++i)
    {
        cin>>x; a[i]={x,0};
    }
    for(int j=0;j<n;++j)
    {
        for(int i=0;i<pow2;++i)
        {
            if((i>>j)&1) a[i]=merge(a[i],a[i^(1<<j)]);
        }
    }
    int ans=0;
    for(int i=1;i<pow2;++i)
    {
        print(max(ans,a[i].first+a[i].second));
        ans=max(ans,a[i].first+a[i].second);
    }
}