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
const int maxn=1e5+7;
const int mod=1e9+7;

int a[maxn];
int main()
{
	ll k; cin>>k;
	ll m,n;
	m=k/50; n=k%50;
 
	//N-1+m*1;
	//剩余n步伐
	vc<ll> ans;
	ll x=50-1+m;
	for(int i=0;i<n;++i)
	{
		ans.push_back(x+50-n+1);
	}
	for(int i=0;i<(50-n);++i)
	{
		ans.push_back(x-n);
	}
	cout<<50<<endl;
	for(int i=0;i<50;++i)
	{
		cout<<ans[i]<<" ";
	}
//	int p=ans.size();
	//dbg(p);
}
